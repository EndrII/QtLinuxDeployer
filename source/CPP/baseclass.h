#ifndef BASECLASS_H
#define BASECLASS_H

#include <QDebug>
#include <QDir>
#include <QDirIterator>
#include <QFile>
#include <QFileInfo>
#include <QObject>
#include <QProcess>
#include <QTextStream>

class BaseClass : public QObject
{
	Q_OBJECT

protected:
	static QString m_qtdir;
	static QString m_outputdir;
    static QString m_binarycreator;
	static QString m_projectfile;
	static QString m_executablepath;
    static QString projectName;
    static QString appIcon;

	QStringList findFilesInsideDir(const QString &name, const QString &dirpath);

    bool getName(QString &name, const QString &url) const;

public:
	explicit BaseClass(QObject *parent = nullptr);
};

#endif  // BASECLASS_H
