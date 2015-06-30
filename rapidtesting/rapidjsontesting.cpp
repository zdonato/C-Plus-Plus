#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>

#include "rapidjson/document.h"
#include "rapidjson/writer.h"
#include "rapidjson/stringbuffer.h"


int main() {
    
    // Reading in Json file.
    std::ifstream file ("output.json");
    
    if (file.is_open())
    {
        std::string content( (std::istreambuf_iterator<char>(file) ),
                            (std::istreambuf_iterator<char>()    ) );
        
        rapidjson::Document d;
        
        d.Parse(content.c_str());
        
        rapidjson::Value& s = d["hello"];
        
        std::cout << s.GetString() << std::endl;
        
        file.close();
    }
    else
    {
       std::cout << "Unable to open file. \n";
    }
    
    
    // Writing to JSON file.
    
    rapidjson::StringBuffer s;
    rapidjson::Writer<rapidjson::StringBuffer> writer(s);
    
    writer.StartObject();
    writer.String("hello");
    writer.String("world");
    writer.String("boolean");
    writer.Bool(true);
    writer.String("test");
    std::string testing = "blah";
    writer.String(testing.c_str());
    writer.EndObject();
    
    std::cout << s.GetString() << std::endl;
    
    std::ofstream out_file;
    
    out_file.open ("output.json");
    
    out_file << s.GetString();
    out_file.close();
    
    return 1;
}