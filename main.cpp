#include "cpp_agents.hpp"

int main(){
	agency::Agent Smith;
	//TODO: Remove from queue values that were already used
	Smith.sendCommand("command value");
	Smith.getReply();
	Smith.sendCommand("command useless");
	Smith.getReply();
}
