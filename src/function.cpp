#include <string>

std::string tag_html_finder(std::string body){
    int start_finding, end_finding;
    std::string result = "";

    start_finding = body.find("<h1>") + 4;
    result = body.substr(start_finding);
    end_finding = result.find("</h1");
    result = result.substr(0, end_finding);
    return result; 

}