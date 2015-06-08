#include <iostream>
#include <fstream>
#include <string>

#include "rapidjson/document.h"
#include "rapidjson/writer.h"
#include "rapidjson/stringbuffer.h"


int main() {
    
    // Reading in Json file.
    std::ifstream file ("testing.json");
    
//    if (file.is_open())
//    {
//        std::string content( (std::istreambuf_iterator<char>(file) ),
//                            (std::istreambuf_iterator<char>()    ) );
//        
//        rapidjson::Document d;
//        
//        d.Parse(content.c_str());
//        
//        rapidjson::Value& s = d["key"];
//        
//        std::cout << s.GetString() << std::endl;
//        
//        file.close();
//    }
//    else
//    {
//       std::cout << "Unable to open file. \n";
//    }
    
    // Writing to JSON file.
    
    rapidjson::StringBuffer s;
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Writer<rapidjson::StringBuffer> writer(s);
    
    writer.StartObject();
    writer.String("key1");
    writer.String("value1");
    writer.String("boolean");
    writer.Bool(true);
    writer.EndObject();
    
    d.Accept(writer);
    
    std::cout << s.GetString() << std::endl;
    
    std::string json = s.GetString();
    
    std::ofstream new_file;
    
    new_file.open("testing.json");
    new_file << json;
    new_file.close();
    
    return 1;
}