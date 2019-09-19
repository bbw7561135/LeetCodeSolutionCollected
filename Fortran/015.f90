program leetcode015
    implicit none
    integer(kind=4),parameter :: arr_size = 6
    integer(kind=4),dimension(arr_size) :: arr = (/-1,0,1,2,-1,-4/)
    integer(kind=4) :: i
    call bubbleSort(arr,arr_size) !here is bubbleSort while in cpp is quicksort
    do i=1,arr_size
        write(*,*) arr(i)
    end do !check bubbleSort
    call threeSum(arr,arr_size)
end program leetcode015




subroutine bubbleSort(arr,arr_size)
    implicit none
    integer(kind=4),intent(in) :: arr_size
    integer(kind=4),dimension(arr_size) :: arr
    integer(kind=4) :: i,j,temp
    do i=1,arr_size
        temp = 0
        do j=i,arr_size ! each run pick out the smallest in the left elements
            temp = arr(i)
            if(arr(j)<arr(i))then 
                temp = arr(j)
                arr(j) = arr(i)
                arr(i) = temp
            end if
        end do
    end do
    return
end subroutine bubbleSort


subroutine threeSum(arr,arr_size)
    implicit none
    integer(kind=4),intent(in) :: arr_size
    integer(kind=4),dimension(arr_size) :: arr
    integer(kind=4) :: i,j,k,sumof3

    do i=1,arr_size
        j=i+1
        k=arr_size

        if(arr(i)>0)then
            exit !arr(i) >0 means no answer left in the array
        end if

        if(i>1 .and. arr(i-1)==arr(i))then
            cycle
        end if

        do while(j<k)
            sumof3 = arr(i) + arr(j) + arr(k)
            if(sumof3==0)then
                write(*,*) "answer is",arr(i),arr(j),arr(k)
                if(j<k .and. arr(j)==arr(j+1))then
                    j=j+1
                end if
                if(j<k .and. arr(k)==arr(k-1))then
                    k=k-1
                end if
                    !the method is the same with cpp code see the commente in 015.cpp
                j=j+1
                k=k-1
            else if(sumof3 < 0)then
                j=j+1
            else
                k=k-1
            end if
        end do
    end do

    return
end subroutine threeSum
