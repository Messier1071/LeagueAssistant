

#include <iostream>
#include <rapidjson/document.h>
#include <rapidjson/filereadstream.h>

#include <rapidjson/rapidjson.h>
#include <stdlib.h>
#include <stdio.h>
#include <curl/curl.h>

#include <windows.h>
#include <string>
#include "Requests.c++"
#include "fileProcessing.c++"


using namespace rapidjson;

int main(int argc, char const *argv[])
{
    //HttpRequestAll();
    //HttpRequestSingle();
    
    //Team t = ParseBuffers();
    APlayer MainPlayer = FindActivePlayer();
    std::cout << MainPlayer.name;
 

    
   
  



    return 0;
}

