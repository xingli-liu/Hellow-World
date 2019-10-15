#include<stdio.h>
#include<curl/curl.h>
 
int main()
{
   CURL *curl;
   CURLcode res;

   curl=curl_easy_init();
   if(curl){

      curl_easy_setopt(curl,CURLOPT_URL,"http://myip.ipip.net/");
      res=curl_easy_perform(curl);
      if(res!=CURLE_OK)
           fprintf(stderr,"curl_easy_perform() failed:5s\n",curl_easy_strerror(res));
      curl-easy_cleanup(curl);
   }
   return 0;
}
