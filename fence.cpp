#include "fence.h"

Fence::Fence() {
    health = 3;

}

void Fence::DecreaseHealth(){
    health--;
    Die();
}

void Fence::Die(){
    if(health<=0){
        scene()->removeItem(this);
        delete this;
    }

}
