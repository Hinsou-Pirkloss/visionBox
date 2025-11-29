#ifndef CONTOURS_H
#define CONTOURS_H

#include <opencv2/opencv.hpp>

// Paramètres pour la détection de contours (Canny)
struct ParametresContours
{
    int seuilBas = 50;      // seuil inférieur
    int seuilHaut = 150;    // seuil supérieur
};

// Fonction cœur de la détection de contours
cv::Mat appliquerContoursCore(const cv::Mat &entree, const ParametresContours &params);

#endif // CONTOURS_H


