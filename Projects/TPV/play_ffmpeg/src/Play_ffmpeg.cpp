#include <iostream>
#include <cstdlib>
#include <cstdint>
#include <cstring>
#include "Play_ffmpeg.hpp"

#include <filesystem>

using namespace  std;
namespace fs = std::filesystem;

extern "C" {
    #include <libavformat/avformat.h>
}

Play_ffmpeg::Play_ffmpeg(){}

void Play_ffmpeg::checkDir(std::string dir){
    std::string path = dir; // Diretório atual
    std::cout <<"Pasta /data:\n";
    int i = 1;
    for (const auto& entry : fs::directory_iterator(path)) {
        if (fs::is_regular_file(entry.status())) {
            std::cout <<i<<": "<< entry.path().filename().string() << std::endl;
            i++;
        }
    }

}

std::string Play_ffmpeg::selectVideo(){
    checkDir("./data");
    int index = 0, i=1;
    std::cout <<"Selecione o número do seu vídeo:\n";
    std::cin >> index;
    
    for (const auto& entry : fs::directory_iterator("./data")) {
        if (fs::is_regular_file(entry.status())) {
            if( index == i){
                return entry.path().filename().string();
            }
            
            i++;
        }
    }
    return "not found";
}

void Play_ffmpeg::playVideo(){

    std::string arq = selectVideo();
    
    std::string c_char = "ffplay -autoexit ./data/"+arq;
    int result = -1;
    const char* arquivo = const_cast<char*>(arq.c_str());
    const char* comando = const_cast<char*>(c_char.c_str());
    try
    {
       
        result = system(comando);

        std::cout <<"Result :"<< result <<endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        std::cout << "Error ao reproduzir video: \n";
    }
}