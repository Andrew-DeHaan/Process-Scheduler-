#ifndef MAIN_CPP
#define MAIN_CPP

#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

#include "event.h"
#include "process.h"





int main
{
  bool cpuState = true;
  int currentTime = 0;
  int quitTime 300002;
  int processTime;
  int reportTime;
  int processInput;
  queue<Event> eventQueue;
  queue<Process>readyQueue;
  cout << "How many process do you want to test? : " << endl;
  cin >> processInput;
  if(cpuState)
    {

      for(int i = 0;i < processInput;i++)
	{
	  Process tempP;
	  int tempTime = tempProcess.getStartTime();
	  int tempProcId = tempProcess.getProcessID();
	  Event tempEvent(tempTime,1,tempProcId);
	  int eventType = tempEvent.getType();
	  switch(eventType) 
	  {
	  case 1: //"process_arrival":
	    readyQueue.push(tempP);
	    if(cpuState == true)
	      {

		
		Event tempEvent1(tempTime,2,tempProcId);
		break;
	      }
	 
	    break;
	  case 2: //"CPU_completion":
	          //handle_CPU_completion(e);
	    eventQueue.push(e);
	    break;
	  case 3: //"IOcompletion":
	    //handle_IO_completion(e);
	    eventQueue.push(e);
	    break;
	  case 4: //"Timer_expiration":
	          //handle_Timer_expiration(e);
	    eventQueue.push(e);
	    break;
	  default:
	    cout << "Invalid event type." << endl;
	    break;
	  }
	  
	 
	}
}
