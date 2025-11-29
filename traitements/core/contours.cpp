#include "contours.h"

cv::Mat appliquerContoursCore(const cv::Mat &entree, const ParametresContours &params)
{
    if (entree.empty())
        return entree;

    cv::Mat gris;
    if (entree.channels() == 3)
        cv::cvtColor(entree, gris, cv::COLOR_BGR2GRAY);
    else
        gris = entree.clone();

    cv::Mat bords;

    int t1 = std::max(0, params.seuilBas);
    int t2 = std::max(t1 + 1, params.seuilHaut); // garantit t2 > t1

    cv::Canny(gris, bords, t1, t2);

    // Pour uniformiser, on retourne une image 3 canaux
    cv::Mat sortie;
    cv::cvtColor(bords, sortie, cv::COLOR_GRAY2BGR);

    return sortie;
}
