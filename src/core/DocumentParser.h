#ifndef DOCUMENTPARSER_H
#define DOCUMENTPARSER_H

#include <string>
#include <QString>

class DocumentParser
{
public:
    static std::string extractText(const std::string& filePath);

private:
    static std::string parsDocx(const std::string& filePath);
    static std::string parseXlsx(const std::string& filePath);
    static std::string parsePptx(const std::string& filePath);
    static std::string parseOdt(const std::string& filePath); // OpenDocument
    static std::string parseHtml(const std::string& filePath); // Web
    static std::string parsePdf(const std::string& filePath);
};

#endif // DOCUMENTPARSER_H
