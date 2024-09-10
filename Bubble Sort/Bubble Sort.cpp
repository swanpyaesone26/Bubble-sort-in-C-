#include <iostream>
#include<chrono>
using namespace std;



void bubbleSort(int arr[], int arrSize) {

    int i;
    int j;      // for index number 
    int temp;   //for swaping data i and j 

    for (i = 0; i < arrSize; i++) {

        for (j = 0;j < arrSize - i - 1; j++) {

            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "Sorted data in Bubble Sort : ";
    for (i = 0; i < arrSize; i++) {
        cout << arr[i];
        if (i < arrSize - 1) {
            cout << ",";
        }
    }
}

int main() {

    //*****Please remove comments in "int arr 100 and 1000 "before you compile.

    //int arr[10] = { 6,10,3,9,8,1,7,5,4,2 };             
    int arr[100] = {690, 697, 586, 835, 994, 264, 820, 254, 635, 207,
            150, 755, 802, 947, 909, 449, 126, 920, 497, 836,
            855, 703, 134, 433, 499, 463, 595, 506, 332, 378,
            551, 579, 485, 749, 657, 842, 363, 367, 145, 378,
            972, 585, 998, 297, 552, 130, 196, 621, 203, 56,
            343, 963, 823, 315, 672, 544, 548, 33, 906, 987,
            906, 102, 9, 873, 296, 227, 878, 888, 97, 889,
            289, 121, 143, 685, 746, 761, 386, 641, 319, 330,
            713, 972, 712, 216, 444, 855, 931, 522, 106, 631,
            948, 333, 537, 877, 607, 643, 849, 938, 600, 634 };
    //int arr[1000] = {416, 390, 757, 766, 646, 743, 558, 133, 697, 933, 476, 593, 374, 485, 740, 400, 680, 534, 743, 43, 320, 340, 724, 444, 550, 199, 932, 310, 388, 925, 436, 300, 717, 497, 305, 183, 982, 64, 911, 375, 843, 892, 620, 280, 416, 877, 797, 357, 742, 891, 163, 359, 208, 116, 580, 432, 301, 796, 523, 791, 260, 233, 113, 683, 832, 838, 381, 915, 45, 337, 104, 5, 110, 63, 551, 781, 170, 192, 965, 170, 658, 508, 347, 307, 223, 190, 428, 772, 491, 528, 276, 562, 782, 665, 409, 813, 637, 460, 897, 143, 856, 315, 712, 495, 724, 362, 153, 548, 192, 714, 257, 263, 317, 445, 166, 32, 200, 222, 232, 566, 118, 653, 242, 354, 400, 999, 715, 87, 720, 934, 353, 861, 41, 742, 856, 954, 737, 481, 668, 577, 548, 426, 362, 602, 289, 383, 459, 417, 819, 856, 156, 216, 573, 464, 278, 949, 424, 206, 383, 637, 414, 144, 433, 566, 620, 503, 737, 350, 509, 162, 307, 654, 754, 767, 431, 381, 466, 206, 8, 788, 764, 707, 788, 23, 193, 786, 806, 810, 114, 373, 623, 783, 873, 84, 226, 819, 992, 698, 221, 154, 678, 863, 730, 276, 44, 398, 819, 311, 423, 659, 783, 683, 949, 653, 39, 208, 43, 125, 342, 898, 240, 938, 434, 146, 950, 471, 485, 934, 812, 90, 940, 445, 534, 126, 541, 227, 860, 212, 213, 142, 576, 524, 792, 354, 155, 353, 398, 219, 785, 496, 537, 889, 312, 609, 580, 871, 193, 895, 650, 84, 22, 995, 821, 424, 59, 409, 7, 592, 602, 713, 674, 989, 5, 145, 915, 770, 793, 566, 745, 669, 765, 867, 763, 772, 640, 74, 152, 111, 946, 107, 188, 102, 860, 294, 265, 442, 644, 919, 271, 808, 599, 356, 793, 222, 797, 125, 207, 978, 76, 113, 236, 478, 558, 466, 979, 651, 544, 96, 410, 87, 165, 72, 718, 824, 469, 334, 351, 96, 372, 244, 880, 823, 382, 427, 399, 601, 471, 833, 703, 125, 935, 138, 512, 174, 884, 965, 492, 392, 790, 128, 410, 739, 171, 45, 206, 454, 355, 587, 36, 55, 495, 968, 985, 197, 962, 273, 862, 222, 477, 551, 352, 931, 686, 188, 391, 214, 561, 963, 1000, 723, 32, 178, 806, 607, 401, 375, 594, 923, 882, 356, 402, 341, 28, 473, 303, 335, 547, 862, 749, 863, 494, 18, 891, 262, 354, 850, 795, 990, 763, 551, 496, 536, 670, 557, 459, 120, 334, 706, 693, 832, 165, 459, 921, 200, 607, 945, 857, 66, 243, 127, 516, 756, 547, 338, 255, 816, 952, 847, 341, 448, 303, 289, 58, 821, 443, 722, 948, 890, 461, 281, 829, 962, 641, 805, 951, 572, 919, 840, 327, 868, 28, 340, 981, 548, 586, 214, 191, 51, 252, 11, 831, 916, 914, 384, 772, 667, 514, 124, 767, 156, 141, 795, 556, 499, 56, 860, 689, 747, 378, 975, 590, 701, 891, 198, 435, 323, 316, 120, 284, 244, 991, 361, 27, 497, 868, 491, 408, 713, 504, 928, 226, 241, 911, 849, 55, 437, 303, 499, 465, 942, 602, 31, 773, 156, 880, 634, 594, 453, 313, 346, 663, 219, 820, 396, 424, 619, 815, 646, 738, 309, 702, 109, 670, 446, 916, 742, 303, 988, 926, 537, 157, 1, 289, 13, 657, 218, 953, 503, 469, 450, 623, 74, 806, 993, 635, 573, 108, 988, 621, 993, 581, 2, 895, 605, 501, 771, 721, 347, 838, 993, 67, 192, 337, 882, 785, 137, 131, 83, 483, 469, 970, 695, 295, 731, 306, 669, 795, 22, 365, 439, 813, 773, 818, 207, 437, 21, 382, 545, 747, 757, 373, 465, 847, 616, 878, 978, 420, 297, 965, 782, 426, 332, 408, 656, 753, 620, 799, 290, 737, 169, 183, 18, 630, 579, 783, 607, 428, 281, 968, 55, 28, 618, 638, 718, 803, 275, 326, 898, 674, 452, 714, 78, 473, 245, 585, 728, 87, 114, 989, 198, 469, 243, 18, 765, 865, 691, 812, 599, 598, 546, 531, 326, 573, 405, 529, 436, 131, 584, 576, 572, 696, 259, 374, 210, 752, 525, 962, 967, 201, 957, 726, 708, 188, 68, 756, 90, 454, 46, 440, 747, 90, 911, 995, 788, 617, 551, 942, 328, 868, 66, 850, 371, 762, 97, 29, 214, 957, 996, 576, 528, 376, 985, 738, 886, 647, 427, 489, 292, 791, 380, 284, 839, 113, 531, 483, 885, 693, 856, 718, 307, 690, 96, 911, 839, 304, 731, 859, 771, 51, 837, 162, 675, 710, 47, 755, 8, 154, 81, 829, 126, 593, 342, 854, 349, 574, 592, 638, 448, 101, 303, 387, 399, 14, 476, 871, 656, 228, 464, 590, 162, 252, 290, 777, 575, 279, 481, 403, 441, 163, 732, 92, 939, 675, 83, 738, 532, 3, 945, 947, 783, 95, 590, 810, 772, 514, 792, 804, 370, 865, 383, 997, 934, 251, 162, 956, 516, 785, 903, 177, 742, 618, 996, 897, 897, 877, 198, 743, 979, 123, 265, 364, 59, 559, 714, 187, 906, 710, 375, 494, 479, 896, 279, 519, 969, 838, 351, 757, 851, 94, 557, 917, 375, 239, 503, 71, 101, 175, 118, 701, 595, 505, 939, 144, 661, 499, 561, 338, 201, 839, 789, 912, 841, 250, 203, 488, 177, 705, 14, 147, 128, 148, 766, 437, 475, 816, 938, 945, 10, 953, 113, 393, 975, 57, 203, 711, 507, 80, 247, 152, 553, 396, 285, 889, 207, 583, 764, 176, 697, 446, 60, 657, 75, 879, 276, 8, 914, 397, 573, 536, 423, 826, 573, 698, 472, 844, 702, 499, 570, 969, 290, 833, 984, 151, 156, 3, 744, 358, 470, 336, 952, 88, 398, 382, 307, 580, 138, 456, 40, 433, 684, 382, 384, 186, 687, 304, 473, 441, 722, 531, 784, 644, 627, 118, 791, 596, 664, 224, 477, 328, 869, 529, 983, 706, 697, 957, 332, 302, 980, 284, 51, 831, 448, 997, 513, 113, 125, 18, 556, 658, 189, 154, 955, 4, 644, 324, 526, 111, 179, 578, 627};

    int arrSize = sizeof(arr) / sizeof(int);

    auto start = chrono::steady_clock::now();
    bubbleSort(arr, arrSize);
    auto end = chrono::steady_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds >(end - start).count();
    cout << "\nRun Time: " << duration << " microseconds" << endl;

    return 0;
}
    
  /* Run Time of Bubble Sort
        arr[10] = 2030 microseconds
        arr[100] = 13290 microseconds
        arr[1000] = 119423 microseconds

  */
