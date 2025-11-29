#ifndef ADAPTATEUR_CONTOURS_H
#define ADAPTATEUR_CONTOURS_H


#include "contours.h"
#include <opencv2/opencv.hpp>

// Adaptateur pour l'intégration dans le moteur générique
class AdaptateurContours
{
public:
    AdaptateurContours();

    // Définit les paramètres
    void setParametres(int seuilBas, int seuilHaut);

    // Applique le traitement sur une image existante
    void appliquer(cv::Mat &image);

private:
    ParametresContours params_;
};

#endif // ADAPTATEUR_CONTOURS_H


