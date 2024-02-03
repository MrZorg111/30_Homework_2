#include <iostream>
#include <string>
#include <cpr/cpr.h>
#include "Function.h"

int main() {
    cpr::Response req;
    std::string req_body;
    req = cpr::Get(cpr::Url("http://httpbin.org/html"), cpr::Header({{"Accept", "text/html"}}));
    req_body = req.text;
   
    std::cout << "Title: " << tag_html_finder(req_body); 
   
    
    return 0;
}