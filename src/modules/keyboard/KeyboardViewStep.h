/* === This file is part of Calamares - <http://github.com/calamares> ===
 *
 *   Copyright 2014, Teo Mrnjavac <teo@kde.org>
 *
 *   Calamares is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   Calamares is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with Calamares. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef KEYBOARDVIEWSTEP_H
#define KEYBOARDVIEWSTEP_H

#include <QObject>

#include "viewpages/ViewStep.h"
#include "PluginDllMacro.h"

class KeyboardPage;

class PLUGINDLLEXPORT KeyboardViewStep : public Calamares::ViewStep
{
    Q_OBJECT
    Q_PLUGIN_METADATA( IID "calamares.ViewModule/1.0" )

    Q_INTERFACES( Calamares::ViewStep )

public:
    explicit KeyboardViewStep( QObject* parent = nullptr );
    virtual ~KeyboardViewStep();

    QString prettyName() const override;

    QWidget* widget() override;

    void next() override;
    void back() override;

    bool isNextEnabled() const override;

    bool isAtBeginning() const override;
    bool isAtEnd() const override;

private:
    KeyboardPage* m_widget;
    bool m_nextEnabled;
};

#endif // KEYBOARDVIEWSTEP_H
