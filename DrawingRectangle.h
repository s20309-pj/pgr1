#ifndef ZJAZD3_DRAWINGRECTANGLE_H
#define ZJAZD3_DRAWINGRECTANGLE_H


class DrawingRectangle {

public:

    void drawRectangle(int height, int width) {

        for (int i = 0; i < width; i++) {

            if (height <= 1) {
                break;
            }

            std::cout << "x";
        }

        std::cout << std::endl;

        for (int j = 0; j < height - 2; j++) {

            std::cout << "x";

            for (int k = 0; k < width - 2; k++) {
                std::cout << " ";
            }
            std::cout << "x" << std::endl;
        }

        for (int l = 0; l < width; l++) {

            if (height < 1) {
                break;
            }
            std::cout << "x";
        }

    }

};


#endif //ZJAZD3_DRAWINGRECTANGLE_H
