#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("RUNNING TOOL...\n");
    
    // Use the system() function to run the Python script
    system("git clone https://github.com/MUHIB-143/RIZE.git")
    int returnCode = system("python RIZE.py");
    
    // Check the return code
    if (returnCode == 0) {
        printf("Python script executed successfully.\n");
    } else {
        printf("Python script execution failed.\n");
    }
    
    return 0;
}
