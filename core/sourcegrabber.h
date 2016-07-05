#ifndef SOURCEGRABBER_H
#define SOURCEGRABBER_H

#include <string>
#include <iostream>
#include <QObject>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkReply>
#include <QEventLoop>
#include <QString>
#include <QDebug>
#include <fstream>

struct TvSeries {
    std::string title;
    std::string link;
    std::string image;
};

class SourceGrabber {
public:
     SourceGrabber(const std::string& title) : _title(title){}

public:
     inline std::string grabSearchIMDB() { return grabSearchIMDB(_title); }
     std::string grabSearchIMDB(const std::string& title);
     std::string grabURL(const std::string& url);

private:
     std::string _title;
};

#endif // SOURCEGRABBER_H
