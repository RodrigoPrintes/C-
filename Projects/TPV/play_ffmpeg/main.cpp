#include <iostream>
#include <cstdlib>
#include <string>
#include <cstdint>
#include <cstring>

using namespace  std;

extern "C" {
    #include <libavformat/avformat.h>
}

int main (){
    avformat_network_init();
    AVFormatContext* formatContext = nullptr;
    //try{
        
    int result = avformat_open_input(&formatContext, "carros.mp4", nullptr, nullptr);
        
    result = avformat_find_stream_info(formatContext, nullptr);

         // Comando que você deseja executar
    const char* comando = "ffplay carros.mp4";

            // Chamar a função system para executar o comando no terminal
      
    AVCodec* codec = nullptr;
    
    int videoStreamIndex = av_find_best_stream(formatContext, AVMEDIA_TYPE_VIDEO, -1, -1, &codec, 0);
    
    std::string codecName = avcodec_get_name(codec->id);
    std::cout << "Codec de vídeo: " << codecName << std::endl;

    avformat_close_input(&formatContext);

    int resultado = system(comando);
      
   /* }catch(const std::exception& e){
        std::cerr << e.what() << '\n';
        if (result < 0) {
        std::cout << "Erro ao obter informações do stream." << std::endl;
        return -1;
        }
        if (videoStreamIndex < 0) {
            std::cout << "Nenhum stream de vídeo encontrado." << std::endl;
        
        }
        if (result != 0) {
        std::cout << "Erro ao abrir o arquivo MP4." << std::endl;
        return -1;
        }
        if (result != 0) {
        std::cout << "Erro ao abrir o arquivo MP4." << std::endl;
        return -1;
        }
    }*/
    
    return 0;
}