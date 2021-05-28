#include <bits/stdc++.h>
using namespace std;

int main() {
    float time_needed_for_Toonces, time_needed_for_Gonzalez, time_saved_for_Gonzalez;
    
    time_needed_for_Toonces = 10.00/60.00*60.00;
    time_needed_for_Gonzalez = 10.00/75.00*60.00;
    time_saved_for_Gonzalez = time_needed_for_Toonces-time_needed_for_Gonzalez;


    cout << "It will take " << time_needed_for_Toonces << " minutes for Toonces to go the last 10 km." << endl;
    cout << "It will take " << time_needed_for_Gonzalez << " minutes for Gonzalez to go the last 10 km." << endl;
    cout << "Gonzalez saved " << time_saved_for_Gonzalez << " minutes compared to Toonces over the last 10 km." << endl;
    
    return 0;
}