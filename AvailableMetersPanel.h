/* Do not edit this file. It was automatically generated. */

#ifndef HEADER_AvailableMetersPanel
#define HEADER_AvailableMetersPanel
/*
htop - AvailableMetersPanel.h
(C) 2004-2011 Hisham H. Muhammad
Released under the GNU GPL, see the COPYING file
in the source distribution for its full text.
*/

#include "Settings.h"
#include "Panel.h"
#include "ScreenManager.h"

typedef struct AvailableMetersPanel_ {
   Panel super;

   Settings* settings;
   Panel* leftPanel;
   Panel* rightPanel;
   ScreenManager* scr;
} AvailableMetersPanel;


extern PanelClass AvailableMetersPanel_class;

AvailableMetersPanel* AvailableMetersPanel_new(Settings* settings, Panel* leftMeters, Panel* rightMeters, ScreenManager* scr);

#endif
