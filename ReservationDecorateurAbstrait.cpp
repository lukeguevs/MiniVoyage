#include "ReservationDecorateurAbstrait.hpp"


ReservationDecorateurAbstrait::ReservationDecorateurAbstrait(shared_ptr<ReservationElementaire> reservation) : ReservationElementaire(*reservation){
}