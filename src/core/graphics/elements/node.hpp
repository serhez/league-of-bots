#ifndef NODE_HPP
#define NODE_HPP

#include "coord.hpp"
#include <vector>

// Forward declaration
class Edge;

class Node {
    public:
        Coord coord;
        float r;
        float theta;
        std::vector<Edge*> edge_ptrs;
        Node(Coord coord, Coord origin);
        Node(Coord coord, Coord origin, Edge* edge_ptr);
        ~Node();
        Edge* getEdgeWith(Node* node);
        void setOrigin(Coord origin);
        bool isOn(Edge* edge);

        struct RComparator {
            bool operator() (Node* lhs, Node* rhs);
        };

        struct ThetaComparator {
            bool operator() (Node* lhs, Node* rhs);
        };

    private:
        Node();
};

#endif