#ifndef TEXTNOTE_H
#define TEXTNOTE_H

#include "note.h"

class TextEdit;

class TextNote : public Note
{
	Q_OBJECT

public:
	TextNote(const QFileInfo& fileinfo, Note::Type type_new);
	~TextNote();
	void load(); //Reading note's content
	void save(bool forced = false); //Saving note's content
	void copy() const; //Coping note's content to clipboard
	bool find(const QString& text, bool next=false); //Searching text in a note's content
	QWidget* widget();
    bool isDocumentSupported() const;
    QTextDocument* document() const;

private:
	TextEdit* text_edit;
};

#endif // TEXTNOTE_H
