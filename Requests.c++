/********* Sample code generated by the curl command line tool **********
 * All curl_easy_setopt() options are documented at:
 * https://curl.se/libcurl/c/curl_easy_setopt.html
 ************************************************************************/
#include <curl/curl.h>
#include <stdio.h>
#include <stdlib.h>

void HttpRequestAll(){
  CURLcode ret;
  CURL *hnd;

  FILE* BUFFER = fopen("buffer.json","wb");


  hnd = curl_easy_init();
  curl_easy_setopt(hnd, CURLOPT_BUFFERSIZE, 102400L);
  curl_easy_setopt(hnd, CURLOPT_URL, "https://127.0.0.1:2999/liveclientdata/playerlist");
  curl_easy_setopt(hnd, CURLOPT_NOPROGRESS, 1L);
  curl_easy_setopt(hnd, CURLOPT_USERAGENT, "curl/8.4.0");
  curl_easy_setopt(hnd, CURLOPT_MAXREDIRS, 50L);
  curl_easy_setopt(hnd, CURLOPT_SSL_VERIFYPEER, 0L);
  curl_easy_setopt(hnd, CURLOPT_SSL_VERIFYHOST, 0L);
  curl_easy_setopt(hnd, CURLOPT_FTP_SKIP_PASV_IP, 1L);
  curl_easy_setopt(hnd, CURLOPT_TCP_KEEPALIVE, 1L);
  curl_easy_setopt(hnd, CURLOPT_WRITEDATA,BUFFER);
 
    

  /* Here is a list of options the curl code used that cannot get generated
     as source easily. You may choose to either not use them or implement
     them yourself.

  CURLOPT_WRITEDATA was set to an object pointer
  CURLOPT_WRITEFUNCTION was set to a function pointer
  CURLOPT_READDATA was set to an object pointer
  CURLOPT_READFUNCTION was set to a function pointer
  CURLOPT_SEEKDATA was set to an object pointer
  CURLOPT_SEEKFUNCTION was set to a function pointer
  CURLOPT_ERRORBUFFER was set to an object pointer
  CURLOPT_STDERR was set to an object pointer
  CURLOPT_HEADERFUNCTION was set to a function pointer
  CURLOPT_HEADERDATA was set to an object pointer

  */

  ret = curl_easy_perform(hnd);

  curl_easy_cleanup(hnd);
  hnd = NULL;
  fflush(BUFFER);
  fclose(BUFFER);
  return;
}

void HttpRequestSingle(){
  CURLcode ret;
  CURL *hnd;

  FILE* BUFFER = fopen("buffer_single.json","wb");


  hnd = curl_easy_init();
  curl_easy_setopt(hnd, CURLOPT_BUFFERSIZE, 102400L);
  curl_easy_setopt(hnd, CURLOPT_URL, "https://127.0.0.1:2999/liveclientdata/activeplayer");
  curl_easy_setopt(hnd, CURLOPT_NOPROGRESS, 1L);
  curl_easy_setopt(hnd, CURLOPT_USERAGENT, "curl/8.4.0");
  curl_easy_setopt(hnd, CURLOPT_MAXREDIRS, 50L);
  curl_easy_setopt(hnd, CURLOPT_SSL_VERIFYPEER, 0L);
  curl_easy_setopt(hnd, CURLOPT_SSL_VERIFYHOST, 0L);
  curl_easy_setopt(hnd, CURLOPT_FTP_SKIP_PASV_IP, 1L);
  curl_easy_setopt(hnd, CURLOPT_TCP_KEEPALIVE, 1L);
  curl_easy_setopt(hnd, CURLOPT_WRITEDATA,BUFFER);
 
    

  /* Here is a list of options the curl code used that cannot get generated
     as source easily. You may choose to either not use them or implement
     them yourself.

  CURLOPT_WRITEDATA was set to an object pointer
  CURLOPT_WRITEFUNCTION was set to a function pointer
  CURLOPT_READDATA was set to an object pointer
  CURLOPT_READFUNCTION was set to a function pointer
  CURLOPT_SEEKDATA was set to an object pointer
  CURLOPT_SEEKFUNCTION was set to a function pointer
  CURLOPT_ERRORBUFFER was set to an object pointer
  CURLOPT_STDERR was set to an object pointer
  CURLOPT_HEADERFUNCTION was set to a function pointer
  CURLOPT_HEADERDATA was set to an object pointer

  */

  ret = curl_easy_perform(hnd);

  curl_easy_cleanup(hnd);
  hnd = NULL;
  fflush(BUFFER);
  fclose(BUFFER);
  return;
}