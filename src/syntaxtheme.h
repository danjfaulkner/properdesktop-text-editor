// SPDX-FileCopyrightText: 2026 Reion Wong <reionwong@gmail.com>
// SPDX-License-Identifier: BSD-3-Clause

#ifndef SYNTAXTHEME_H
#define SYNTAXTHEME_H

#include "syntax.h"

#include "ui/geometry.h"

// The text area's own colours and one per syntax style, in a light and a dark
// variant that follow the system appearance.
struct SyntaxTheme
{
    properdesktop::ui::Color background;
    properdesktop::ui::Color text;
    properdesktop::ui::Color gutterText;
    properdesktop::ui::Color currentLine;
    properdesktop::ui::Color selection;
    properdesktop::ui::Color match;
    properdesktop::ui::Color currentMatch;
    properdesktop::ui::Color bracket;
    properdesktop::ui::Color whitespace;
    properdesktop::ui::Color styles[int(SyntaxStyle::Count)];

    static SyntaxTheme theme(bool dark, properdesktop::ui::Color accent);
    // The background the theme gives the text area, which the window takes.
    static properdesktop::ui::Color windowBackground(bool dark);
};

#endif
