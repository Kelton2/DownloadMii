#pragma once

#include <iostream>
#include <netdb.h>
#define SERVER_HOSTNAME "downloadmii.filfatstudios.com"
#define BUFFER_SIZE 63*1000

using namespace std;
/* Public functions */
Result networkInit();
string downloadFile(string url);

/* Private-ish functuons, shouldnt be used by any other class! */
