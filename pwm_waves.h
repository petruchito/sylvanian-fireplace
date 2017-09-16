#define RUNTIME 1000 //seconds
#define STEPS 30 //interrupts per second
#define WAVE_SIDE_SIZE 2000

const uint8_t wave_side[] = {30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,29,29,29,28,28,27,27,26,26,25,25,25,24,24,23,23,22,22,21,21,21,20,20,20,20,20,20,20,20,20,20,21,21,21,21,21,22,22,22,23,23,23,24,24,25,25,25,26,26,27,27,28,28,29,29,30,31,32,33,34,36,37,38,39,40,40,40,39,38,36,35,34,32,31,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,29,29,29,28,28,27,27,26,26,25,25,25,24,24,23,23,22,22,21,21,21,20,20,20,20,20,20,20,20,20,21,21,21,22,22,23,23,24,24,25,25,25,26,26,27,27,28,28,29,29,29,30,30,30,30,30,30,30,30,30,29,29,29,28,28,27,27,26,26,25,25,25,24,24,23,23,22,22,21,21,21,20,20,20,20,20,20,20,20,20,21,21,21,22,22,23,23,24,24,25,25,25,26,26,27,27,28,28,29,29,29,30,30,30,30,30,30,30,30,30,30,29,29,29,29,29,28,28,28,28,28,27,27,27,27,26,26,26,26,26,25,25,25,25,25,25,25,25,25,25,26,26,26,26,27,27,27,28,28,28,29,29,29,30,30,30,30,30,31,31,31,31,32,32,32,32,32,33,33,33,33,33,34,34,34,34,34,34,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,34,34,34,34,34,33,33,33,33,33,32,32,32,32,31,31,31,31,31,30,30,30,30,30,30,30,30,30,30,31,31,31,32,32,33,33,34,34,35,35,35,36,36,37,37,38,38,39,39,39,40,40,40,40,40,40,40,39,39,39,38,37,36,36,35,34,33,32,31,30,29,28,27,26,25,24,24,23,22,21,21,21,20,20,20,20,20,21,21,21,22,23,24,24,25,26,27,28,29,30,31,32,33,34,35,36,36,37,38,39,39,39,40,40,40,40,40,40,40,39,39,39,39,38,38,38,37,37,37,36,36,35,35,35,34,34,33,33,32,32,31,31,31,30,30,30,29,29,29,28,28,27,27,26,26,25,25,25,24,24,23,23,23,22,22,22,21,21,21,21,20,20,20,20,20,20,20,20,20,20,21,21,21,21,21,22,22,22,23,23,24,24,24,25,25,26,26,27,27,28,28,29,29,30,30,30,31,31,32,32,33,33,34,34,35,35,36,36,36,37,37,38,38,38,39,39,39,39,39,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,39,39,39,39,39,39,39,39,39,39,38,38,38,38,38,38,38,38,38,37,37,37,37,37,37,37,37,36,36,36,36,36,36,36,36,36,36,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,34,34,34,34,34,33,33,33,33,33,32,32,32,32,31,31,31,31,31,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,29,28,26,25,24,22,21,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,21,21,21,21,21,21,21,21,21,21,21,21,21,21,22,22,22,22,22,22,22,22,22,22,22,23,23,23,23,23,23,23,23,23,24,24,24,24,24,24,24,24,24,25,25,25,25,25,25,25,25,25,26,26,26,26,26,26,26,26,26,27,27,27,27,27,27,27,27,27,28,28,28,28,28,28,28,28,28,28,28,29,29,29,29,29,29,29,29,29,29,29,29,29,29,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,31,31,31,32,32,33,33,34,34,35,35,35,36,36,37,37,38,38,39,39,39,40,40,40,40,40,40,40,40,40,40,39,39,39,39,39,38,38,38,37,37,36,36,36,35,35,34,34,33,33,32,32,31,31,30,30,30,29,29,28,28,27,27,26,26,25,25,24,24,24,23,23,22,22,22,21,21,21,21,21,20,20,20,20,20,20,20,20,20,20,21,21,21,21,22,22,23,23,23,24,24,25,25,26,26,27,27,28,28,28,29,29,29,30,30,30,30,30,31,31,31,31,31,31,31,32,32,32,32,32,32,33,33,33,33,33,33,34,34,34,34,34,34,34,35,35,35,35,35,35,35,35,36,36,36,36,36,36,36,36,37,37,37,37,37,37,37,37,37,38,38,38,38,38,38,38,38,38,38,38,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,39,39,39,38,37,37,36,35,35,34,33,33,32,31,31,31,30,30,30,30,30,29,29,29,29,29,29,28,28,28,28,28,28,28,27,27,27,27,27,27,27,27,26,26,26,26,26,26,26,26,25,25,25,25,25,25,25,25,25,24,24,24,24,24,24,24,24,24,24,23,23,23,23,23,23,23,23,23,23,23,23,22,22,22,22,22,22,22,22,22,22,22,22,22,22,21,21,21,21,21,21,21,21,21,21,21,21,21,21,21,21,21,21,21,21,21,21,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,21,21,21,21,21,21,22,22,22,22,23,23,23,23,24,24,24,25,25,25,26,26,26,27,27,27,28,28,29,29,29,30,30,30,31,31,31,32,32,33,33,33,34,34,34,35,35,35,36,36,36,37,37,37,37,38,38,38,38,39,39,39,39,39,39,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,33,33,33,33,33,33,33,33,33,33,33,33,33,33,33,33,33,33,33,33,33,33,33,33,33,33,33,33,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30};

const uint8_t wave_top[] = {30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,29,29,29,29,29,28,28,28,28,28,27,27,27,27,26,26,26,26,26,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,26,26,27,27,28,29,29,30,31,32,33,34,35,36,38,39,40,42,43,44,45,46,47,48,49,50,50,50,50,50,49,49,49,48,47,46,46,45,44,43,42,41,40,39,38,37,36,35,34,34,33,32,31,31,31,30,30,30,30,30,30,30,30,30,30,31,31,31,31,31,31,32,32,32,32,33,33,33,33,33,34,34,34,34,34,35,35,35,35,35,36,36,36,36,36,37,37,37,37,37,38,38,38,38,39,39,39,39,39,39,40,40,40,40,40,40,40,40,40,40,40,40,39,39,39,38,38,37,37,36,36,35,35,35,34,34,33,33,32,32,31,31,31,30,30,30,30,30,30,30,30,30,30,30,30,31,31,31,31,31,31,32,32,32,32,32,33,33,33,33,33,34,34,34,34,35,35,35,35,35,36,36,36,36,37,37,37,38,38,38,38,39,39,39,39,40,40,40,40,40,41,41,41,41,41,41,41,42,42,42,42,42,42,42,42,43,43,43,43,43,43,44,44,44,44,44,45,45,45,46,47,48,49,50,51,52,54,55,57,59,60,62,64,65,67,69,70,72,73,74,76,77,78,78,79,80,80,80,80,80,79,79,79,78,77,76,76,75,74,73,72,71,70,69,68,67,66,65,64,64,63,62,61,61,61,60,60,60,60,60,60,60,60,61,61,61,61,61,62,62,62,62,63,63,63,63,63,64,64,64,64,64,65,65,65,65,65,65,65,65,65,64,64,64,63,63,62,62,61,60,60,59,58,58,57,56,56,55,54,54,53,53,52,51,51,51,50,50,50,50,49,49,49,49,49,48,48,48,48,48,48,48,48,47,47,47,47,47,47,47,46,46,46,46,46,45,45,45,45,44,44,44,43,42,42,41,41,40,39,39,38,37,37,36,35,35,34,33,33,32,32,31,31,31,30,30,30,30,30,30,30,30,30,30,31,31,31,31,31,31,32,32,32,32,33,33,33,33,33,34,34,34,34,34,35,35,35,35,35,35,35,35,36,36,36,36,36,36,36,36,37,37,37,37,37,37,37,37,37,38,38,38,38,38,38,38,38,38,38,39,39,39,39,39,39,39,39,39,39,39,39,39,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,39,39,39,39,39,39,38,38,38,38,38,37,37,37,37,36,36,36,36,35,35,35,35,35,34,34,34,34,33,33,33,33,32,32,32,32,32,31,31,31,31,31,31,30,30,30,30,30,30,30,30,30,30,31,31,32,34,35,37,39,41,43,45,48,50,53,55,57,60,62,65,67,69,71,73,75,76,78,79,79,80,80,80,79,79,78,76,75,73,71,69,67,65,62,60,57,55,53,50,48,45,43,41,39,37,35,34,32,31,31,30,30,30,30,31,31,32,33,34,35,36,38,39,41,42,44,45,46,48,49,51,52,54,55,56,57,58,59,59,60,60,60,59,56,51,46,40,34,29,24,21,20,21,24,28,32,38,43,47,51,54,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,54,54,54,54,54,54,54,54,54,54,54,54,54,54,54,54,53,53,53,53,53,53,53,53,53,53,53,53,52,52,52,52,52,52,52,52,52,51,51,51,51,51,51,51,51,50,50,50,50,50,50,50,50,49,49,49,49,49,49,49,48,48,48,48,48,48,48,47,47,47,47,47,47,46,46,46,46,46,46,45,45,45,45,45,45,44,44,44,44,44,44,43,43,43,43,43,42,42,42,42,42,42,41,41,41,41,41,40,40,40,40,40,39,39,39,38,38,37,37,37,36,36,35,35,34,34,33,33,33,32,32,31,31,31,31,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,31,31,31,31,31,31,31,31,31,32,32,32,32,32,32,32,33,33,33,33,33,33,34,34,34,34,35,35,35,35,35,36,36,36,36,37,37,37,38,38,38,38,39,39,39,40,40,40,41,42,43,44,45,47,48,50,52,54,55,57,59,61,63,65,67,69,70,72,73,75,76,77,78,79,80,80,80,80,80,80,80,80,80,80,79,79,79,79,79,79,78,78,78,78,77,77,77,77,76,76,76,75,75,75,74,74,74,73,73,72,72,72,71,71,70,70,69,69,69,68,68,67,67,66,66,65,65,65,64,64,63,63,62,62,61,61,61,60,60,59,59,58,58,58,57,57,56,56,56,55,55,55,54,54,54,53,53,53,53,52,52,52,52,51,51,51,51,51,51,50,50,50,50,50,50,50,50,50,51,51,52,53,54,56,57,59,60,61,63,64,66,67,68,69,69,70,70,70,70,70,70,70,70,70,70,70,70,69,69,69,69,69,69,69,69,68,68,68,68,68,68,67,67,67,67,67,66,66,66,66,66,65,65,65,65,64,64,64,63,63,63,63,62,62,62,62,61,61,61,60,60,60,59,59,59,58,58,58,57,57,57,57,56,56,56,55,55,55,54,54,54,53,53,53,52,52,52,51,51,51,50,50,50,49,49,49,49,48,48,48,47,47,47,47,46,46,46,45,45,45,45,44,44,44,44,43,43,43,43,43,42,42,42,42,42,41,41,41,41,41,41,41,40,40,40,40,40,40,40,40,40,40,39,39,39,39,39,39,39,39,39,39,39,38,38,38,38,38,38,38,38,38,38,38,38,38,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,33,33,33,33,33,33,33,33,33,33,33,33,33,33,33,33,33,33,33,33,33,33,33,33,33,33,33,33,33,33,33,33,33,33,33,33,33,33,33,33,33,33,33,33,33,33,33,33,33,33,33,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30};
