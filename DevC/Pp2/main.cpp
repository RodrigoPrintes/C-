#include <iostream>
#include <string>
#include <cstdlib>

extern "C" {
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
#include <libavutil/imgutils.h>
#include <libswscale/swscale.h>
#include <libavutil/error.h>
}

int main() {
    // Inicializar o FFmpeg
    av_register_all();
    avformat_network_init();

    // Abrir o arquivo de v�deo
    AVFormatContext* formatContext = nullptr;
    if (avformat_open_input(&formatContext, "./output3.avi", nullptr, nullptr) != 0) {
        std::cerr << "Erro ao abrir o arquivo de v�deo." << std::endl;
        return EXIT_FAILURE;
    }

    // Obter informa��es do arquivo de v�deo
    if (avformat_find_stream_info(formatContext, nullptr) < 0) {
        std::cerr << "Erro ao encontrar informa��es do fluxo do arquivo de v�deo." << std::endl;
        return EXIT_FAILURE;
    }

    // Encontrar o fluxo de v�deo no arquivo
    int videoStreamIndex = -1;
    for (unsigned int i = 0; i < formatContext->nb_streams; i++) {
        if (formatContext->streams[i]->codecpar->codec_type == AVMEDIA_TYPE_VIDEO) {
            videoStreamIndex = i;
            break;
        }
    }
    if (videoStreamIndex == -1) {
        std::cerr << "N�o foi poss�vel encontrar o fluxo de v�deo." << std::endl;
        return EXIT_FAILURE;
    }

    // Obter o codec do fluxo de v�deo
    AVCodecParameters* codecParameters = formatContext->streams[videoStreamIndex]->codecpar;
    AVCodec* codec = avcodec_find_decoder(codecParameters->codec_id);
    if (codec == nullptr) {
        std::cerr << "N�o foi poss�vel encontrar o codec." << std::endl;
        return EXIT_FAILURE;
    }

    // Inicializar o codec
    AVCodecContext* codecContext = avcodec_alloc_context3(codec);
    if (codecContext == nullptr) {
        std::cerr << "Erro ao alocar contexto do codec." << std::endl;
        return EXIT_FAILURE;
    }
    if (avcodec_parameters_to_context(codecContext, codecParameters) < 0) {
        std::cerr << "Erro ao configurar o contexto do codec." << std::endl;
        return EXIT_FAILURE;
    }
    if (avcodec_open2(codecContext, codec, nullptr) < 0) {
        std::cerr << "Erro ao abrir o codec." << std::endl;
        return EXIT_FAILURE;
    }

    // Inicializar o pacote de dados
    AVPacket* packet = av_packet_alloc();
    if (packet == nullptr) {
        std::cerr << "Erro ao alocar o pacote de dados." << std::endl;
        return EXIT_FAILURE;
    }

    // Inicializar o frame
    AVFrame* frame = av_frame_alloc();
    if (frame == nullptr) {
        std::cerr << "Erro ao alocar o frame." << std::endl;
        return EXIT_FAILURE;
    }

    // Inicializar o contexto de convers�o de cores
    SwsContext* swsContext = sws_getContext(codecContext->width, codecContext->height,
        codecContext->pix_fmt, codecContext->

