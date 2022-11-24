#include <string>

#include "Agenda.h"

Agenda::Agenda(std::string name, std::string dateTime)
	: AbsDocument(name, dateTime)
{
}

Agenda* Agenda::clone(void) const
{
	// QUESTION: Pas de constructeur de copie ??
	// � compl�ter pour construire un nouvel objet Agenda en appelant le constructeur de copie
	return new Agenda(m_name, getDateTime()); // � remplacer
}