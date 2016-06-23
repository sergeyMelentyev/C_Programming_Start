#include <stdio.h>
#include <curl/curl.h>
#include "curl_data.h"

void curl_test (void) {
	CURL *curl;
	CURLcode res;

	curl = curl_easy_init();
  	if (curl) {
    	curl_easy_setopt(curl, CURLOPT_URL, "http://www.nasdaq.com/screening/companies-by-industry.aspx?exchange=NYSE&render=download");
    	curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
 		res = curl_easy_perform(curl);
    	if(res != CURLE_OK) {
    		fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));
    	}
    	curl_easy_cleanup(curl);
  	}
}
