#include <rapidjson/document.h>
#include <rapidjson/filereadstream.h>
#include <rapidjson/pointer.h>
#include <rapidjson/rapidjson.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <iostream>
#include <string>
#include <rapidjson/document.h>

using namespace rapidjson;

typedef struct Champion
{
    std::string name;
    std::string team;
    std::string summonerSpellOne;
    std::string summonerSpellTwo;
    int items [6];
}Champion;

typedef struct ActivePlayer
{
    std::string name;
    std::string team;
    std::string summonerSpellOne;
    std::string summonerSpellTwo;
    int items [6];
}APlayer;

typedef struct team
{
    //MOVE ACTIVE PLAYER OUT OF THIS STRUCT AND TO A DIFFERENT FUNCTION
    struct Champion eone;
    struct Champion etwo;
    struct Champion etree;
    struct Champion efour;
    struct Champion efive;
}ETeam;


APlayer FindActivePlayer(){
    APlayer player;
    std::string FullName ;
    char * Buffer = NULL;
    size_t length;
    FILE * f = fopen ("buffer_single.json", "rb");
    fseek (f, 0, SEEK_END);
    length = ftell(f);
    rewind(f);
    Buffer = (char*)malloc (length);
    if (Buffer)
    {
    fread (Buffer, 1, length, f);
    }

    fflush(f);
    fclose (f);


    StringStream stream(Buffer);
    Document d_single;
    d_single.ParseStream(stream);

    if (d_single.HasParseError())
    {
      printf("PANIC! EXITING");
      printf(Buffer);
      exit(144);
    }
    
    try
    {
         
    FullName = GetValueByPointer(d_single,"/summonerName")->GetString();

    }
    catch(const std::exception& e)
    {
      std::cerr << e.what() << '\n';
    }
    




    const char s[2] = "#";
    char tempstr[25];
    char *token;
   
    strcpy(tempstr, FullName.c_str());
    token = strtok(tempstr, s);
    player.name=token;

    

  
  return player;
}



team ParseBuffers()
{
    ETeam Enemy_team;
    
    
    
    
    
    
    
    
    char * buffer = NULL;
    size_t length;
    FILE * fm = fopen ("buffer.json", "rb");

    fseek (fm, 0, SEEK_END);
    length = ftell(fm);
    rewind(fm);
    buffer = (char*)malloc (length);

    if (buffer)
    {
    fread (buffer, 1, length, fm);
    }
    fflush(fm);
    fclose (fm);
    

  StringStream stream2(buffer);
  Document d;
  d.ParseStream(stream2);
   

try
{

for (size_t i = 0; i < 10; i++)
{
  char *ch;
  sprintf(ch, "/%i", i);
 


  std::cout <<"champion:"<< GetValueByPointer(d,"/0/championName")->GetString() << std::endl;
  std::cout <<"champion:"<< GetValueByPointer(d,"/0/summonerSpells/summonerSpellOne/displayName")->GetString() << std::endl;
  std::cout <<"champion:"<< GetValueByPointer(d,"/0/summonerSpells/summonerSpellTwo/displayName")->GetString() << std::endl;
}

}
catch(const std::exception& e)
{
  std::cerr <<"a"<< e.what() << '\n';
}

  return Enemy_team;
}

