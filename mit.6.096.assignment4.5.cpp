#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Graph {
	map<int, vector<int> > list;

	public:
		Graph(const vector &starts, const vector &ends);
		int numOutgoing(const int nodeID) const;
		const vector<int> &adjacent(const int nodeID) const;
};

Graph::Graph(const vector &starts, const vector &ends) {
	size_type startsSize = starts.size();
	size_type endsSize = ends.size();
	if (startsSize != endsSize) {
		throw invalid_argument("Starts and ends size should be the same");
	}
	for (int i = 0; i < s; ++i) {
		list[starts[i]].push_back(ends[i]);
		list[ends[i]];
	}
}

int Graph::numOutgoing(const int nodeID) const {
	return list[nodeID].size();
}

