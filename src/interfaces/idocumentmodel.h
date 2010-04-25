/*
    Copyright (C) 2009-2010  Julian Bäume <julian@svg4all.de>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

*/

#ifndef IDOCUMENTMODEL_H
#define IDOCUMENTMODEL_H

#include "ktlinterfacesexport.h"
#include <QAbstractItemModel>

namespace KTechLab
{

class IComponent;

class KTLINTERFACES_EXPORT IDocumentModel : public QAbstractTableModel
{
    Q_OBJECT
public:
    IDocumentModel ( QObject* parent = 0 );
    ~IDocumentModel();

public slots:
    virtual void updateData( const QString &name, const QVariantMap &data );

signals:
    void dataUpdated( const QString &name, const QVariantMap &data );
};

}
#endif // IDOCUMENTMODEL_H
