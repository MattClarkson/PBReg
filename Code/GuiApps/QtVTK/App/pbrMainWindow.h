/*=============================================================================

  PBREG: A software package for point based registration, including ICP for surfaces.

  Copyright (c) University College London (UCL). All rights reserved.

  This software is distributed WITHOUT ANY WARRANTY; without even
  the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
  PURPOSE.

  See LICENSE.txt in the top level directory for details.

=============================================================================*/

#ifndef pbrMainWindow_h
#define pbrMainWindow_h

#include "ui_pbrMainWindow.h"
#include <pbrVolumeRenderingModel.h>

#include <QMainWindow>

namespace pbr
{

class VTKViewWidget;

/**
* \class MainWindow
* \brief Demo widget provides main window, and connects it to Model.
*/
class MainWindow : public QMainWindow, public Ui_MainWindow
{
  Q_OBJECT

public:

  MainWindow(pbr::VolumeRenderingModel* model);
  virtual ~MainWindow();
  void ConnectRenderer();

private slots:

  void OnFileOpen();

private:

  pbr::VolumeRenderingModel* m_Model;
  pbr::VTKViewWidget*        m_Viewer;

}; // end class

} // end namespace

#endif
