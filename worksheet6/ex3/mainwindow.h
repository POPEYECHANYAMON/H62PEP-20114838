#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <vtkCamera.h>
#include <vtkPolyData.h>
#include <vtkDataSetMapper.h>
#include <vtkRenderWindow.h>
#include <vtkRenderWindowInteractor.h>
#include <vtkRenderer.h>
#include <vtkNew.h>
#include <vtkGenericOpenGLRenderWindow.h>
#include <vtkPlane.h>
#include <vtkSTLReader.h>
//color//
#include <QColorDialog>
#include <QColor>
#include <vtkNamedColors.h>
//light//
#include <vtkLight.h>
//shrink//
#include <vtkShrinkFilter.h>
//clip//
#include <vtkClipDataSet.h>
/// Axes//
#include <vtkAxesActor.h>
#include <vtkTransform.h>




namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget* parent = 0);
    ~MainWindow();

    vtkSmartPointer<vtkDataSetMapper> mapper;
    vtkSmartPointer<vtkActor> actor;
    vtkSmartPointer<vtkNamedColors> colors;
    vtkSmartPointer<vtkRenderer> renderer;
    vtkSmartPointer<vtkLight> light;
    vtkSmartPointer<vtkSTLReader> reader;
 
    
   

private slots:

    /**
    * Handles the file button to choose any files 
    */
    void on_actionFileOpen_triggered();
    /**
    * Handles the changing of the model's colour
    */
    void handleObjectColor();
    /**
    * Handles the changing of the background's colour
    */
    void handleBackgroundColor();
    /**
    * handles the sliding of the light intensity after checked the ON/OFF box
    */
    void on_Slider_sliderMoved(int position);
    /**
   * handles the ON/OFF box of the light intensity sliding
   */
    void on_checkBox_clicked(bool checked);
    /**
   * handles the reset button to turn model back to original
   */
    void handleResetCamera();
    /**
    * Handles the application of the clip filter
    */
    void on_clipfilter_clicked(bool checked);
    /**
    * Handles the application of the shrink filter
    */
    void on_shrinkfilter_clicked(bool checked);
    /**
    * handles the wireframe when checked the box
    */
    void on_EdgeCheckBox_toggled(bool checked);
    /**
    * Handles the marking of axes on the model
    */
    void on_AxesCheckBox_stateChanged(int checked);
   

    

private:

    Ui::MainWindow* ui; 
    vtkSmartPointer<vtkPlane> planeLeft = vtkSmartPointer<vtkPlane>::New();
    vtkSmartPointer<vtkClipDataSet> clipfilter = vtkSmartPointer<vtkClipDataSet>::New();
    vtkSmartPointer<vtkShrinkFilter> shrinkfilter = vtkSmartPointer<vtkShrinkFilter>::New();
    vtkSmartPointer<vtkAxesActor> axes;
    vtkSmartPointer<vtkTransform> transform;
};
   



#endif // MAINWINDOW_H
