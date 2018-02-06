/*=============================================================================

  PBREG: A software package for point based registration, including ICP for surfaces.

  Copyright (c) University College London (UCL). All rights reserved.

  This software is distributed WITHOUT ANY WARRANTY; without even
  the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
  PURPOSE.

  See LICENSE.txt in the top level directory for details.

=============================================================================*/

#ifndef pbrControlPanelWidget_h
#define pbrControlPanelWidget_h

#include "pbrQtVTKControllerWin32ExportHeader.h"
#include "ui_pbrControlPanelWidget.h"

#include <QWidget>

namespace pbr
{

/**
* \class ControlPanelWidget
* \brief Demo widget to combine a standard Qt widget with one of ours.
*
* Intended to demonstrate that a widget should JUST contain widget logic
* and communicate entirely via signals and slots and also that we can
* combine both Qt widgets and our own widgets in the Designer.
*/
class PBREG_QTVTKCONTROLLERWINEXPORT ControlPanelWidget : public QWidget, Ui_ControlPanelWidget
{
  Q_OBJECT

public:

  ControlPanelWidget(QWidget* parent);
  virtual ~ControlPanelWidget();

  void SetIntensityRange(int low, int high);

signals:

  void WindowValuesChanged(int low, int high);
  void DoSomethingPressed();

private slots:

}; // end class

} // end namespace

#endif
