// SPDX-License-Identifier: MIT
// cctest_csmith_e8d32466.c --- cctest case csmith_e8d32466 (csmith seed 3906151526)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x46143645 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <math.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static unsigned int crc32_tab[256];
static unsigned int crc32_context = 0xFFFFFFFFUL;

static void crc32_gentab(void)
{
   int i, j;
   unsigned int crc;
   for (i = 0; i < 256; i++) {
      crc = (unsigned int)i;
      for (j = 0; j < 8; j++)
         crc = (crc & 1U) ? ((crc >> 1) ^ 0xEDB88320UL) : (crc >> 1);
      crc32_tab[i] = crc;
   }
}

static void crc32_byte(unsigned char b)
{
   crc32_context = ((crc32_context >> 8) & 0x00FFFFFFUL) ^
                   crc32_tab[(crc32_context ^ (unsigned int)b) & 0xFFU];
}

static void transparent_crc(unsigned long long val, const char *vname, int flag)
{
   int i;
   (void)vname;
   (void)flag;
   for (i = 0; i < 8; i++)
      crc32_byte((unsigned char)((val >> (i * 8)) & 0xFFULL));
}

static void platform_main_begin(void) {}

static int8_t
safe_unary_minus_func_int8_t_s(int8_t si )
{
 
  return
    -si;
}
static int8_t
safe_add_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 + si2);
}
static int8_t
safe_sub_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 - si2);
}
static int8_t
safe_mul_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    si1 * si2;
}
static int8_t
safe_mod_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int8_t
safe_div_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int8_t
safe_lshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int8_t
safe_lshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int8_t
safe_rshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int8_t
safe_rshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int16_t
safe_unary_minus_func_int16_t_s(int16_t si )
{
 
  return
    -si;
}
static int16_t
safe_add_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 + si2);
}
static int16_t
safe_sub_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 - si2);
}
static int16_t
safe_mul_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    si1 * si2;
}
static int16_t
safe_mod_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int16_t
safe_div_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int16_t
safe_lshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int16_t
safe_lshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int16_t
safe_rshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int16_t
safe_rshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int32_t
safe_unary_minus_func_int32_t_s(int32_t si )
{
 
  return
    (si==(-2147483647-1)) ?
    ((si)) :
    -si;
}
static int32_t
safe_add_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int32_t
safe_sub_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int32_t
safe_mul_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((2147483647) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-2147483647-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-2147483647-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((2147483647) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int32_t
safe_mod_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int32_t
safe_div_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int32_t
safe_lshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((2147483647) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int32_t
safe_lshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((2147483647) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int32_t
safe_rshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int32_t
safe_rshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int64_t
safe_unary_minus_func_int64_t_s(int64_t si )
{
 
  return
    (si==(-9223372036854775807L -1)) ?
    ((si)) :
    -si;
}
static int64_t
safe_add_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((9223372036854775807L)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-9223372036854775807L -1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int64_t
safe_sub_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807L))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int64_t
safe_mul_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((9223372036854775807L) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-9223372036854775807L -1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-9223372036854775807L -1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((9223372036854775807L) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int64_t
safe_mod_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int64_t
safe_div_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int64_t
safe_lshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((9223372036854775807L) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int64_t
safe_lshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((9223372036854775807L) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int64_t
safe_rshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int64_t
safe_rshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint8_t
safe_unary_minus_func_uint8_t_u(uint8_t ui )
{
 
  return -ui;
}
static uint8_t
safe_add_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 + ui2;
}
static uint8_t
safe_sub_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 - ui2;
}
static uint8_t
safe_mul_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint8_t
safe_mod_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint8_t
safe_div_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint8_t
safe_lshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint8_t
safe_lshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint16_t
safe_unary_minus_func_uint16_t_u(uint16_t ui )
{
 
  return -ui;
}
static uint16_t
safe_add_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 + ui2;
}
static uint16_t
safe_sub_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 - ui2;
}
static uint16_t
safe_mul_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint16_t
safe_mod_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint16_t
safe_div_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint16_t
safe_lshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint16_t
safe_lshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint32_t
safe_unary_minus_func_uint32_t_u(uint32_t ui )
{
 
  return -ui;
}
static uint32_t
safe_add_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 + ui2;
}
static uint32_t
safe_sub_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 - ui2;
}
static uint32_t
safe_mul_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint32_t
safe_mod_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint32_t
safe_div_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint32_t
safe_lshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((4294967295U) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint32_t
safe_lshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((4294967295U) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint64_t
safe_unary_minus_func_uint64_t_u(uint64_t ui )
{
 
  return -ui;
}
static uint64_t
safe_add_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 + ui2;
}
static uint64_t
safe_sub_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 - ui2;
}
static uint64_t
safe_mul_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ((unsigned long long)ui1) * ((unsigned long long)ui2);
}
static uint64_t
safe_mod_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint64_t
safe_div_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint64_t
safe_lshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((18446744073709551615UL) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint64_t
safe_lshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((18446744073709551615UL) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static float
safe_add_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) + (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static float
safe_sub_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) - (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static float
safe_mul_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0x1.0p-100f * sf1) * (0x1.0p-28f * sf2)) > (0x1.0p-100f * (0x1.0p-28f * FLT_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static float
safe_div_func_float_f_f(float sf1, float sf2 )
{
 
  return
    ((fabsf(sf2) < 1.0f) && (((sf2 == 0.0f) || (fabsf((0x1.0p-49f * sf1) / (0x1.0p100f * sf2))) > (0x1.0p-100f * (0x1.0p-49f * FLT_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static double
safe_add_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) + (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static double
safe_sub_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) - (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static double
safe_mul_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0x1.0p-100 * sf1) * (0x1.0p-924 * sf2)) > (0x1.0p-100 * (0x1.0p-924 * DBL_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static double
safe_div_func_double_f_f(double sf1, double sf2 )
{
 
  return
    ((fabs(sf2) < 1.0) && (((sf2 == 0.0) || (fabs((0x1.0p-974 * sf1) / (0x1.0p100 * sf2))) > (0x1.0p-100 * (0x1.0p-974 * DBL_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static int32_t
safe_convert_func_float_to_int32_t(float sf1 )
{
 
  return
    ((sf1 <= (-2147483647-1)) || (sf1 >= (2147483647))) ?
    ((2147483647)) :
    ((int32_t)(sf1));
}

// Options:   -s 3906151526 -o /tmp/csmith_gen__dq8k5i3/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint16_t  f0;
   int8_t  f1;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   uint64_t  f0;
   uint8_t  f1;
   struct S0  f2;
   uint32_t  f3;
   int32_t  f4;
   uint16_t  f5;
};
#pragma pack(pop)

struct S2 {
   const uint64_t  f0;
   const uint64_t  f1;
   const int8_t  f2;
};

union U3 {
   int32_t  f0;
};


static int64_t g_5[5][1][5] = {{{1L,0x8C08872FA4AD744DLL,1L,1L,0x8C08872FA4AD744DLL}},{{0x8C08872FA4AD744DLL,1L,1L,0x8C08872FA4AD744DLL,1L}},{{0x8C08872FA4AD744DLL,0x8C08872FA4AD744DLL,0L,0x8C08872FA4AD744DLL,0x8C08872FA4AD744DLL}},{{1L,0x8C08872FA4AD744DLL,1L,1L,0x8C08872FA4AD744DLL}},{{0x8C08872FA4AD744DLL,1L,1L,0x8C08872FA4AD744DLL,1L}}};
static const union U3 g_10 = {0xF8B8AE50L};
static int16_t g_22 = 0x11B5L;
static struct S0 g_24 = {65530UL,-4L};
static int8_t g_61 = (-2L);
static uint16_t g_64[2] = {8UL,8UL};
static int16_t g_75[5][2] = {{0x4F7AL,0L},{2L,2L},{2L,0L},{0x4F7AL,0x449CL},{0L,0x449CL}};
static uint8_t g_76 = 254UL;
static uint64_t g_130[3][1] = {{2UL},{2UL},{2UL}};
static int8_t g_133 = 0x2CL;
static uint16_t g_134 = 0UL;
static uint32_t g_143[5] = {0xBEAB6E37L,0xBEAB6E37L,0xBEAB6E37L,0xBEAB6E37L,0xBEAB6E37L};
static uint32_t g_195 = 5UL;
static int8_t g_209 = 0x3AL;
static uint16_t g_233[5] = {1UL,1UL,1UL,1UL,1UL};
static int16_t g_249 = 1L;
static int64_t g_253 = 0x416B469B12F1D451LL;
static int16_t g_260 = (-7L);
static int32_t g_277 = 0x88B0BA48L;
static uint32_t g_300[5] = {4294967290UL,4294967290UL,4294967290UL,4294967290UL,4294967290UL};
static struct S2 g_337 = {0x30B14678578EF78CLL,1UL,0x1FL};
static struct S0 g_339 = {0x1518L,0x01L};
static int64_t g_360[3] = {0L,0L,0L};
static int16_t g_364 = 0L;
static uint8_t g_369 = 255UL;
static struct S1 g_394 = {0xA94A030C4B63F0CFLL,0x1CL,{0xF18AL,0L},9UL,0x3209B4CAL,0x6602L};
static int64_t g_432 = 1L;
static int32_t g_435 = (-2L);
static uint16_t g_439 = 65535UL;
static uint64_t g_445 = 18446744073709551610UL;
static int32_t g_456 = 0xDE84128DL;
static int16_t g_457 = 0x67ECL;
static int32_t g_462 = 1L;
static int8_t g_463 = 2L;
static uint64_t g_465 = 18446744073709551609UL;
static int32_t g_472 = 0xE1B883A2L;



static uint32_t  func_1(void);
static int32_t  func_2(uint32_t  p_3);
static int32_t  func_6(const union U3  p_7, uint16_t  p_8, uint64_t  p_9);
static int32_t  func_12(uint32_t  p_13, int32_t  p_14, uint64_t  p_15);




static uint32_t  func_1(void)
{ 
    uint8_t l_4 = 250UL;
    int32_t l_471 = 1L;
    g_472 |= (l_471 = (g_456 ^= func_2(l_4)));
    if ((((l_4 > g_22) ^ (g_394.f2 , ((g_394.f1 = ((safe_add_func_uint32_t_u_u((g_143[4]--), g_75[1][0])) < g_253)) & l_4))) | l_4))
    { 
        int16_t l_484 = (-9L);
        int32_t l_493 = 0x94976834L;
        g_277 ^= (+(safe_add_func_uint8_t_u_u((l_471 = (safe_mul_func_int8_t_s_s(((l_493 = ((((safe_mul_func_uint16_t_u_u(0xC32AL, (g_75[1][1] & (((l_484 < ((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((g_22 > 0UL), l_484)), l_484)), 2)), 4)) < l_484)) || g_360[0]) >= 65533UL)))) < g_300[3]) || l_471) , g_364)) < g_134), g_61))), g_24.f0)));
        g_339 = g_24;
    }
    else
    { 
        uint64_t l_494 = 0xED2D776C4493FA2ELL;
        l_494++;
        l_471 ^= (safe_mul_func_int16_t_s_s(l_494, l_494));
    }
    g_394.f4 = ((safe_add_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s((l_471 = l_471), 0xCBC7L)) ^ ((g_337 , (~65535UL)) | 0xF93E4D36L)), g_394.f1)), g_233[2])) ^ (-3L));
    return g_432;
}



static int32_t  func_2(uint32_t  p_3)
{ 
    int32_t l_301 = 1L;
    int32_t l_368 = 1L;
    struct S1 l_393 = {0x496F539C1A3CEE7ELL,2UL,{0x29E1L,1L},0xDF465272L,0x1AE2821CL,0x9D9CL};
    int64_t l_424 = 1L;
    int32_t l_455 = 0L;
    int32_t l_458 = (-7L);
    for (p_3 = 0; (p_3 <= 0); p_3 += 1)
    { 
        uint32_t l_278[3][4] = {{0xE4ACED05L,0x66983E46L,0xE4ACED05L,6UL},{0xE4ACED05L,6UL,6UL,0xE4ACED05L},{4294967295UL,6UL,0UL,6UL}};
        int8_t l_316[3][4] = {{0xFAL,0xFAL,0xFAL,0xFAL},{0xFAL,0xFAL,0xFAL,0xFAL},{0xFAL,0xFAL,0xFAL,0xFAL}};
        int32_t l_335 = 8L;
        struct S0 l_338 = {65531UL,0x8FL};
        struct S1 l_340 = {18446744073709551610UL,2UL,{0x4F2EL,0x83L},0x223C0CD5L,0L,0x3F4CL};
        const int32_t l_342 = (-2L);
        int32_t l_392 = (-7L);
        int i, j;
        if (func_6(g_10, (~0xFBL), p_3))
        { 
            int64_t l_302[3];
            int32_t l_303 = 5L;
            int32_t l_304[5];
            int i;
            for (i = 0; i < 3; i++)
                l_302[i] = (-5L);
            for (i = 0; i < 5; i++)
                l_304[i] = 0x1D079F7FL;
            l_278[0][0] = (g_277 = 0x1DF3346AL);
            for (g_24.f1 = 0; (g_24.f1 <= 0); g_24.f1 += 1)
            { 
                int64_t l_283 = 0L;
                int i, j;
                if (g_75[p_3][g_24.f1])
                    break;
                g_277 = (g_75[0][1] & (p_3 | (safe_div_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u(l_283, (safe_lshift_func_int8_t_s_u((p_3 < 0xD00B6C39L), 2)))) & g_76), g_253))));
            }
            l_304[4] ^= ((+(((l_303 = ((safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s((g_233[2] = 0xB498L), (safe_rshift_func_uint16_t_u_u((l_301 = ((((l_302[2] = (safe_sub_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(0xEBF4L, (safe_div_func_uint16_t_u_u(65535UL, ((((+0x07574140B304A777LL) , g_300[3]) || (-1L)) && l_301))))), g_24.f1))) > 0x3C702A619F6E66C4LL) < g_134) != 1UL)), 10)))), 1)) ^ p_3)) | 0x82B510A8L) && 250UL)) || 0x9AL);
        }
        else
        { 
            uint64_t l_313[1][5][2];
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 5; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_313[i][j][k] = 0x80906F8543DD3E11LL;
                }
            }
            for (g_24.f0 = 0; (g_24.f0 <= 0); g_24.f0 += 1)
            { 
                uint64_t l_309 = 0xA91CA6C46E65E6F2LL;
                l_309 ^= (safe_sub_func_int64_t_s_s((g_5[4][0][2] = (g_253 = (safe_rshift_func_uint16_t_u_s(g_143[2], 3)))), (0x37C5L & 0x1B14L)));
            }
            for (g_61 = 0; (g_61 <= 0); g_61 += 1)
            { 
                uint32_t l_310 = 0x7BBFC23EL;
                --l_310;
                --l_313[0][4][1];
            }
        }
        g_277 = l_316[2][3];
        for (g_24.f1 = 0; (g_24.f1 >= 0); g_24.f1 -= 1)
        { 
            int32_t l_325 = 1L;
            int32_t l_336 = 0x53C0D599L;
            l_325 = (safe_div_func_int64_t_s_s(((((safe_rshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((((l_325 >= ((g_195 ^ ((safe_add_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((l_336 = (!((safe_lshift_func_int16_t_s_u((safe_add_func_int32_t_s_s(l_325, (l_335 &= (g_300[3] > p_3)))), p_3)) || g_277))), g_233[1])), 0x2CL)) && l_335)) == 0xA3397DFDL)) | p_3) < 65535UL) < 0x42C9FB66L), g_277)), 0x0BL)), 0)) <= g_253) , g_337) , l_316[2][3]), l_325));
            for (g_61 = 0; (g_61 >= 0); g_61 -= 1)
            { 
                int i, j, k;
                g_339 = l_338;
                if (g_5[p_3][p_3][g_61])
                    break;
            }
        }
        for (l_301 = 0; (l_301 <= 0); l_301 += 1)
        { 
            struct S1 l_341 = {0x051C18D602D29949LL,0x73L,{0xE502L,0x36L},18446744073709551607UL,0xC583052FL,1UL};
            int16_t l_350 = (-1L);
            int32_t l_362 = (-1L);
            uint32_t l_365 = 0x3A2BF0E4L;
            for (g_61 = 0; (g_61 >= 0); g_61 -= 1)
            { 
                l_341 = l_340;
            }
            if (l_342)
            { 
                int32_t l_357 = 8L;
                int32_t l_361 = 1L;
                int32_t l_363 = 1L;
                l_340.f4 &= ((g_10 , (((safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((+(safe_lshift_func_uint16_t_u_s(1UL, 12))), (p_3 || p_3))), 0xE0EEL)) || l_350) && 18446744073709551606UL)) || p_3);
                g_277 = (safe_mul_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((l_340.f4 = 1UL), l_357)), (++g_24.f0))), p_3));
                l_365--;
            }
            else
            { 
                ++g_369;
                l_368 = (1UL < (safe_rshift_func_int8_t_s_u(((((g_133 |= (((g_209 = (safe_sub_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(((g_75[1][1] = ((l_341.f4 <= (safe_div_func_int16_t_s_s(((g_337 , g_337) , g_300[3]), 65535UL))) > (-3L))) > 65535UL), g_64[0])), g_300[3]))) | 0x95L) , 0xDAL)) & 4UL) | p_3) >= l_368), 6)));
                l_368 |= (l_362 , (safe_sub_func_int64_t_s_s((safe_mod_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(0x01L, (safe_div_func_uint64_t_u_u((((safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((g_360[2] || 0x57914F4BL), 10)), (-3L))) == 0L) , g_233[2]), g_209)))), p_3)), l_301)));
            }
            l_392 |= (((p_3 >= ((l_340.f4 = 0xF3L) < (l_368 = p_3))) != 0xCDC1L) <= 0x9702L);
            for (l_341.f3 = 0; (l_341.f3 <= 0); l_341.f3 += 1)
            { 
                g_394 = l_393;
                l_393.f2 = g_24;
            }
        }
    }
    g_394 = g_394;
    for (g_24.f0 = 0; (g_24.f0 >= 10); ++g_24.f0)
    { 
        uint32_t l_425 = 18446744073709551607UL;
        int32_t l_431 = 0xB1D3B259L;
        int32_t l_459 = 0L;
        int32_t l_460 = 1L;
        int32_t l_461 = 0x1C93ACC4L;
        if ((l_393.f1 & (l_368 || (safe_mod_func_uint16_t_u_u(((safe_add_func_uint64_t_u_u(((safe_mod_func_uint16_t_u_u((l_368 = g_5[3][0][3]), ((p_3 > 0xB9L) && l_393.f5))) != 0x432309C3L), 0x7EC06545ED4EA07CLL)) & 0x40L), 8L)))))
        { 
            int64_t l_423 = 0xF2AB1E9F3B934A44LL;
            int32_t l_434 = 8L;
            int32_t l_436 = (-1L);
            int32_t l_437 = 1L;
            if (((p_3 | 0x6409956FL) , (safe_rshift_func_uint8_t_u_s(((-1L) & ((((((((g_143[3] = (safe_mul_func_int16_t_s_s((((safe_mul_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s(((safe_rshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((((((safe_add_func_int32_t_s_s((l_423 >= l_424), g_249)) || g_64[0]) < p_3) > 0xE03B84FF0BCE5FE1LL) ^ g_76), p_3)), l_393.f0)), p_3)), 0xD33EL)), 5)) | 0UL), g_300[4])) > 0x1A3DL), g_76)) >= p_3) >= g_22), l_425))) == l_393.f2.f1) & g_360[1]) ^ 65535UL) == g_233[1]) , l_423) != 0xAED6L) & l_425)), 2))))
            { 
                uint32_t l_426 = 18446744073709551608UL;
                g_394.f4 = g_300[3];
                g_432 |= (((((l_431 = (l_426 & ((safe_add_func_int32_t_s_s((g_277 = (g_394.f4 = ((l_425 != g_277) | (((safe_lshift_func_int8_t_s_s((g_61 == 7L), g_143[3])) & g_143[3]) <= (-5L))))), g_22)) < p_3))) || g_209) & 0x2BD50ED8817E3DA0LL) && 0x169BL) < 0x915692EB870A253DLL);
            }
            else
            { 
                int16_t l_433 = 0x0EEFL;
                int32_t l_438 = 0x43443872L;
                if (l_433)
                    break;
                g_439--;
            }
            for (p_3 = (-10); (p_3 >= 1); p_3 = safe_add_func_uint8_t_u_u(p_3, 6))
            { 
                int16_t l_444 = 0xA98FL;
                l_444 &= ((-6L) && 1L);
            }
            ++g_445;
        }
        else
        { 
            uint32_t l_450[5];
            int i;
            for (i = 0; i < 5; i++)
                l_450[i] = 0x5C3173CBL;
            g_394.f4 |= ((0xD55B524CCC43AD8DLL != (g_277 && ((4294967287UL >= (((g_439 <= p_3) >= l_393.f3) < l_450[4])) , 0x5734L))) || 0L);
        }
        for (l_424 = (-24); (l_424 != 18); l_424 = safe_add_func_uint16_t_u_u(l_424, 2))
        { 
            int16_t l_453 = 0xD937L;
            int32_t l_454 = 1L;
            int32_t l_464 = 0L;
            struct S1 l_470 = {18446744073709551611UL,0xD0L,{0xCA26L,-10L},0x977FF7BDL,0x1439523CL,0xD49AL};
            g_394 = g_394;
            g_465++;
            for (l_455 = 0; (l_455 >= 14); l_455++)
            { 
                l_393 = l_470;
            }
        }
        return g_300[2];
    }
    return g_277;
}



static int32_t  func_6(const union U3  p_7, uint16_t  p_8, uint64_t  p_9)
{ 
    int32_t l_16[2];
    const struct S1 l_21[1] = {{0UL,0xE2L,{65530UL,1L},0x4B6046E7L,-1L,0UL}};
    int32_t l_23[4][3];
    int8_t l_208[3][5][2] = {{{0x27L,0xBCL},{0x9FL,0xBCL},{0x27L,0x9FL},{(-2L),(-2L)},{(-2L),0x9FL}},{{0x27L,0xBCL},{0x9FL,0xBCL},{0x27L,0x9FL},{(-2L),(-2L)},{(-2L),0x9FL}},{{0x27L,0xBCL},{0x9FL,0xBCL},{0x27L,0x9FL},{(-2L),(-2L)},{(-2L),0x9FL}}};
    const union U3 l_248 = {0x286FB300L};
    uint32_t l_250 = 18446744073709551614UL;
    int32_t l_276[5];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_16[i] = 0xBAE0FC36L;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
            l_23[i][j] = 4L;
    }
    for (i = 0; i < 5; i++)
        l_276[i] = 0xC4DDB9A7L;
    if ((0x75A592C6L & func_12(l_16[0], (l_16[0] , (safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s((((l_23[2][0] = (g_22 ^= (l_21[0] , l_21[0].f4))) > 247UL) < g_5[4][0][4]), g_5[4][0][2])), g_10.f0))), p_8)))
    { 
        int8_t l_101[3];
        struct S0 l_116 = {0xFA3AL,0xC1L};
        int16_t l_117[2][5] = {{1L,1L,1L,1L,1L},{0x0F08L,0x0F08L,0x0F08L,0x0F08L,0x0F08L}};
        struct S1 l_120 = {0x96163BBE5BF61D40LL,0xCBL,{0UL,0L},6UL,1L,0xC4CAL};
        struct S2 l_121[3][1][1] = {{{{18446744073709551607UL,18446744073709551614UL,1L}}},{{{18446744073709551607UL,18446744073709551614UL,1L}}},{{{18446744073709551607UL,18446744073709551614UL,1L}}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_101[i] = (-1L);
        l_101[0] = (((safe_mul_func_uint16_t_u_u((1UL && (7L ^ (1L < 0x1D9B9EA2L))), 0xDFB2L)) < 0x3100L) || p_9);
        for (p_9 = 0; (p_9 <= 2); p_9 += 1)
        { 
            uint16_t l_114 = 0x69CEL;
            int32_t l_115 = 0x7E3BC08CL;
            int32_t l_118[5];
            int32_t l_119 = 0xC06C7073L;
            int i;
            for (i = 0; i < 5; i++)
                l_118[i] = (-1L);
            if (p_7.f0)
                break;
            l_119 = (safe_add_func_uint32_t_u_u(g_61, ((g_24.f1 = (safe_lshift_func_int16_t_s_u(((safe_mod_func_int16_t_s_s((g_22 = (((safe_sub_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u(((l_114 |= g_5[3][0][3]) , l_115), 1)), (l_118[0] = ((l_116 = l_21[0].f2) , l_117[0][3])))), l_101[0])) | 9L) , p_9)), g_76)) > (-2L)), 9))) , (-1L))));
            l_120 = l_120;
            for (l_116.f0 = 0; (l_116.f0 <= 0); l_116.f0 += 1)
            { 
                l_23[0][0] = 0xA71D37E9L;
            }
        }
        l_120.f4 |= ((l_121[0][0][0] , (g_130[2][0] = (0x07L < (safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((g_22 = ((safe_sub_func_uint64_t_u_u(((((safe_rshift_func_uint8_t_u_s((g_75[1][1] & ((p_7.f0 , 0x51L) > 1UL)), 5)) & g_24.f0) <= g_75[2][0]) != p_7.f0), p_7.f0)) <= g_10.f0)), 0)), g_24.f1))))) | 0x3BD94EE2L);
    }
    else
    { 
        int64_t l_132[3][4][3] = {{{0x2F0D76A68AF11E84LL,0xFDC46FE8B5CC303BLL,0x2F0D76A68AF11E84LL},{0x2F0D76A68AF11E84LL,0xFDC46FE8B5CC303BLL,0x2F0D76A68AF11E84LL},{0x2F0D76A68AF11E84LL,0xFDC46FE8B5CC303BLL,0x2F0D76A68AF11E84LL},{0x2F0D76A68AF11E84LL,0xFDC46FE8B5CC303BLL,0x2F0D76A68AF11E84LL}},{{0x2F0D76A68AF11E84LL,0xFDC46FE8B5CC303BLL,0x2F0D76A68AF11E84LL},{0x2F0D76A68AF11E84LL,0xFDC46FE8B5CC303BLL,0x2F0D76A68AF11E84LL},{0x2F0D76A68AF11E84LL,0xFDC46FE8B5CC303BLL,0x2F0D76A68AF11E84LL},{0x2F0D76A68AF11E84LL,0xFDC46FE8B5CC303BLL,0x2F0D76A68AF11E84LL}},{{0x2F0D76A68AF11E84LL,0xFDC46FE8B5CC303BLL,0x2F0D76A68AF11E84LL},{0x2F0D76A68AF11E84LL,0xFDC46FE8B5CC303BLL,0x2F0D76A68AF11E84LL},{0x2F0D76A68AF11E84LL,0xFDC46FE8B5CC303BLL,0x2F0D76A68AF11E84LL},{0x2F0D76A68AF11E84LL,0xFDC46FE8B5CC303BLL,0x2F0D76A68AF11E84LL}}};
        int32_t l_184 = 0x8B06D998L;
        int32_t l_216[3];
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_216[i] = 0x71FBBC29L;
        if ((0L != g_24.f1))
        { 
            int64_t l_131 = 1L;
            g_134 &= (g_133 = (l_23[2][0] ^= ((((l_131 = g_24.f0) < p_8) <= g_61) > (l_132[1][1][1] & g_130[2][0]))));
        }
        else
        { 
            int32_t l_142 = 0L;
            int32_t l_183 = 0xB94AA32DL;
            uint64_t l_194 = 8UL;
            if ((((((l_23[2][0] &= g_130[2][0]) && ((safe_div_func_int64_t_s_s((l_21[0].f1 > g_64[0]), (+(l_23[3][0] ^= (safe_mod_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((((0x8DF10AD9L | 0UL) >= 0xE26CL) < l_142), 2)), l_132[1][1][1])))))) < p_7.f0)) == 0x4016F25517FA6E5FLL) != l_21[0].f5) < p_8))
            { 
                int64_t l_182[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_182[i] = 1L;
                g_143[3] = 0x6FC58967L;
                l_184 |= (safe_lshift_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u((safe_div_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u(((safe_div_func_uint8_t_u_u((((safe_add_func_int16_t_s_s(((safe_unary_minus_func_uint64_t_u((safe_add_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((~l_21[0].f0) , (safe_mul_func_int8_t_s_s(((l_183 ^= (safe_mul_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((((((safe_sub_func_int8_t_s_s(((l_21[0].f0 == (safe_add_func_int64_t_s_s(g_143[4], (safe_mod_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(g_133, p_7.f0)), l_142)), l_132[1][1][1])), 0UL)), 0x42B6L))))) >= l_142), l_132[1][1][1])) <= l_132[1][1][1]) == l_182[0]) == p_8) || p_9), p_8)), 255UL))) && 0x281CL), g_22))), 0x6BA3L)), p_7.f0)))) && p_8), p_8)) || g_130[2][0]) <= l_182[0]), l_182[0])) && 0UL), 0xCA9CL)), 0xE1FFC80131C0FDE1LL)), 0xB3L)) & 6UL), 3));
            }
            else
            { 
                g_195 = ((safe_sub_func_int32_t_s_s((l_142 = (p_8 | ((safe_rshift_func_int8_t_s_s((+(safe_sub_func_int8_t_s_s((safe_sub_func_int64_t_s_s((-10L), (p_9 = 0x210D50EA70157660LL))), ((p_7.f0 < l_194) | p_7.f0)))), g_130[2][0])) <= 0L))), g_75[1][1])) <= g_143[3]);
            }
        }
        g_209 = ((safe_mod_func_int8_t_s_s((((safe_add_func_int16_t_s_s((safe_add_func_int64_t_s_s(p_9, (safe_mul_func_int16_t_s_s(((l_184 ^ g_24.f0) , (safe_sub_func_int32_t_s_s((safe_mod_func_int64_t_s_s(1L, 18446744073709551606UL)), g_22))), 0x3108L)))), p_8)) != g_75[1][1]) | l_21[0].f3), l_208[0][3][1])) | l_21[0].f2.f1);
        if (((safe_lshift_func_uint16_t_u_s(((1L || (((safe_rshift_func_int8_t_s_s(7L, 4)) > 0xCBA6210CL) >= (safe_mod_func_uint16_t_u_u(((l_216[0] = ((l_184 = g_133) != 1UL)) | 1UL), 0x7795L)))) , 65528UL), l_132[1][1][2])) , p_9))
        { 
            int8_t l_230 = 0x1EL;
            if ((safe_add_func_uint32_t_u_u((p_7.f0 == (safe_add_func_uint8_t_u_u(p_9, (safe_rshift_func_int8_t_s_s(0x68L, 4))))), ((safe_unary_minus_func_uint16_t_u((safe_lshift_func_uint16_t_u_u((g_24.f0++), ((safe_mul_func_int8_t_s_s((g_61 &= 6L), l_132[1][1][1])) > g_75[3][1]))))) | l_230))))
            { 
                g_233[2] ^= (p_7.f0 & ((-2L) > ((p_9 = 0xD33CF774277A122FLL) > 0xF3D68D9240F40E80LL)));
            }
            else
            { 
                const uint32_t l_246 = 0x8C39424FL;
                struct S2 l_247 = {0x1AC020D4C6C70B23LL,0x7802F3114D939EB3LL,0xAEL};
                g_249 = (safe_div_func_int8_t_s_s((((safe_div_func_uint64_t_u_u((p_9 = (safe_mod_func_int32_t_s_s(((~(((((~(safe_sub_func_int32_t_s_s(p_7.f0, (safe_add_func_uint16_t_u_u(l_246, p_7.f0))))) || ((((l_23[2][0] = ((l_247 , p_7.f0) == p_8)) < p_9) < 0x4A69L) < l_246)) , l_216[1]) ^ l_230) != 0x69C1L)) ^ g_24.f1), g_24.f0))), l_247.f2)) , l_248) , 0x12L), p_8));
                l_250 = l_21[0].f0;
            }
            return l_21[0].f3;
        }
        else
        { 
            uint64_t l_255 = 18446744073709551613UL;
            int32_t l_273 = 0x1ADBBAD3L;
            int32_t l_274[3];
            int32_t l_275 = (-10L);
            int i;
            for (i = 0; i < 3; i++)
                l_274[i] = (-7L);
            for (g_249 = 21; (g_249 < 16); g_249 = safe_sub_func_uint16_t_u_u(g_249, 3))
            { 
                int16_t l_254 = 0xE379L;
                g_253 ^= g_130[2][0];
                l_255--;
            }
            g_260 |= ((p_7 , ((18446744073709551613UL == ((((l_216[0] = ((safe_sub_func_int32_t_s_s((p_7.f0 && 0x6FDC2CA2L), p_9)) && p_9)) < g_233[2]) || 1UL) , l_255)) , l_21[0].f0)) & g_253);
            for (g_134 = 0; (g_134 <= 2); g_134 += 1)
            { 
                struct S1 l_272 = {0xB901C74AD158495DLL,0x08L,{0x94ABL,0L},0xE56E5C89L,0x5CB69C61L,0x202BL};
                int i;
                if (g_233[(g_134 + 1)])
                    break;
                l_276[3] &= (l_275 = (l_216[g_134] | ((l_274[1] = (g_5[4][0][3] = (safe_div_func_int8_t_s_s((((((safe_unary_minus_func_int64_t_s((safe_lshift_func_uint8_t_u_u(255UL, p_9)))) == (l_273 = (safe_mul_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((((safe_add_func_uint32_t_u_u(((l_272 , (-5L)) <= l_23[2][0]), 0L)) & 0x9FL) || 4294967295UL), p_7.f0)), g_76)))) != p_9) || p_8) >= 0x3B2CL), l_216[2])))) == p_8)));
                if (l_216[0])
                    break;
            }
        }
    }
    return g_75[0][1];
}



static int32_t  func_12(uint32_t  p_13, int32_t  p_14, uint64_t  p_15)
{ 
    uint64_t l_29 = 18446744073709551615UL;
    int32_t l_62 = (-2L);
    int32_t l_63[2][5];
    const struct S0 l_67 = {65534UL,-2L};
    union U3 l_72 = {0x947B41CFL};
    int8_t l_81[2];
    int32_t l_97[1][4][1];
    int32_t l_98 = 0x2A9C28C3L;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
            l_63[i][j] = 4L;
    }
    for (i = 0; i < 2; i++)
        l_81[i] = 0x26L;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
                l_97[i][j][k] = 2L;
        }
    }
    if ((g_24 , (safe_rshift_func_uint8_t_u_u((((safe_mul_func_uint8_t_u_u(l_29, p_13)) > (((safe_lshift_func_uint16_t_u_s(0xE20EL, p_15)) ^ g_22) | g_24.f1)) || 0x7FL), 4))))
    { 
        struct S1 l_32 = {1UL,253UL,{7UL,-2L},18446744073709551607UL,0x4575F7F7L,0x771FL};
        int32_t l_70 = 1L;
        for (g_22 = 0; (g_22 <= 0); g_22 += 1)
        { 
            const int32_t l_57 = 0x2CF37692L;
            struct S1 l_69 = {0UL,0xB8L,{65526UL,0L},1UL,0xDCAA3977L,0x87E1L};
            for (g_24.f1 = 0; (g_24.f1 >= 0); g_24.f1 -= 1)
            { 
                l_32 = l_32;
                if (g_5[2][0][0])
                    continue;
            }
            if (((safe_sub_func_uint16_t_u_u((safe_sub_func_int64_t_s_s(0L, ((0x40L != (l_32.f5 , (g_5[2][0][4] >= g_10.f0))) | 0x0C09C4F4FCF42757LL))), 1UL)) == g_10.f0))
            { 
                return l_32.f3;
            }
            else
            { 
                uint64_t l_59 = 0x3F56F60D197A07E0LL;
                int32_t l_60 = 0xFA70DAEEL;
                l_60 ^= (safe_sub_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((((safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u(0x0A95A2E2L, (safe_sub_func_uint32_t_u_u(0x70C30F14L, ((((safe_sub_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s(l_57, (safe_unary_minus_func_int32_t_s(p_15)))) | 0x6B0CL), p_13)) > l_32.f5) | l_29) || g_22))))), g_22)), l_29)) <= 0UL) ^ l_59), p_13)), 0x4EL)) || g_5[4][0][4]), 0x48L)), 0x10L));
            }
            g_64[0]--;
            for (l_32.f2.f0 = 0; (l_32.f2.f0 <= 0); l_32.f2.f0 += 1)
            { 
                struct S1 l_68[3][5][4] = {{{{5UL,0UL,{6UL,0x6EL},18446744073709551611UL,-10L,65535UL},{0x381D8479822E7BB9LL,0x15L,{0x6CE7L,0xF2L},0UL,0x4AF12927L,65535UL},{0x2DECA365B034E2D8LL,0x86L,{0x2FECL,0xB6L},18446744073709551609UL,0x6AA55A69L,0x5E7BL},{18446744073709551613UL,255UL,{0x8441L,0x72L},0xF4091208L,0L,1UL}},{{18446744073709551608UL,0UL,{1UL,0L},0x76A8768DL,0x0F05760DL,0x0548L},{18446744073709551614UL,0xB3L,{1UL,0xF0L},1UL,1L,0x88C1L},{0x31193F7395214660LL,0x08L,{0x6D82L,1L},0xE181CB01L,-9L,65535UL},{18446744073709551615UL,0UL,{0x69E1L,0xF7L},18446744073709551610UL,0x6A5961B9L,0UL}},{{0x2DECA365B034E2D8LL,0x86L,{0x2FECL,0xB6L},18446744073709551609UL,0x6AA55A69L,0x5E7BL},{5UL,0UL,{6UL,0x6EL},18446744073709551611UL,-10L,65535UL},{0UL,255UL,{0xADB8L,0xC6L},0x6DF6EF7DL,0L,0x6E20L},{0UL,255UL,{0xADB8L,0xC6L},0x6DF6EF7DL,0L,0x6E20L}},{{0x2DECA365B034E2D8LL,0x86L,{0x2FECL,0xB6L},18446744073709551609UL,0x6AA55A69L,0x5E7BL},{0x2DECA365B034E2D8LL,0x86L,{0x2FECL,0xB6L},18446744073709551609UL,0x6AA55A69L,0x5E7BL},{0x31193F7395214660LL,0x08L,{0x6D82L,1L},0xE181CB01L,-9L,65535UL},{0x96B8AE43225DEAEDLL,0xB1L,{65535UL,-1L},7UL,0x8F0ABFABL,0x748EL}},{{18446744073709551608UL,0UL,{1UL,0L},0x76A8768DL,0x0F05760DL,0x0548L},{0UL,255UL,{0xADB8L,0xC6L},0x6DF6EF7DL,0L,0x6E20L},{0x2DECA365B034E2D8LL,0x86L,{0x2FECL,0xB6L},18446744073709551609UL,0x6AA55A69L,0x5E7BL},{18446744073709551614UL,0xB3L,{1UL,0xF0L},1UL,1L,0x88C1L}}},{{{5UL,0UL,{6UL,0x6EL},18446744073709551611UL,-10L,65535UL},{1UL,0xDDL,{0xDE95L,1L},8UL,1L,65535UL},{0xD623911DF381B91FLL,0x0AL,{0x15C2L,9L},18446744073709551615UL,-2L,65535UL},{0x2DECA365B034E2D8LL,0x86L,{0x2FECL,0xB6L},18446744073709551609UL,0x6AA55A69L,0x5E7BL}},{{18446744073709551613UL,255UL,{0x8441L,0x72L},0xF4091208L,0L,1UL},{1UL,0xDDL,{0xDE95L,1L},8UL,1L,65535UL},{18446744073709551613UL,255UL,{0x8441L,0x72L},0xF4091208L,0L,1UL},{18446744073709551614UL,0xB3L,{1UL,0xF0L},1UL,1L,0x88C1L}},{{1UL,0xDDL,{0xDE95L,1L},8UL,1L,65535UL},{0UL,255UL,{0xADB8L,0xC6L},0x6DF6EF7DL,0L,0x6E20L},{5UL,254UL,{0x7E04L,0xE0L},0xDECC76B5L,3L,65535UL},{0x96B8AE43225DEAEDLL,0xB1L,{65535UL,-1L},7UL,0x8F0ABFABL,0x748EL}},{{0x96B8AE43225DEAEDLL,0xB1L,{65535UL,-1L},7UL,0x8F0ABFABL,0x748EL},{0x2DECA365B034E2D8LL,0x86L,{0x2FECL,0xB6L},18446744073709551609UL,0x6AA55A69L,0x5E7BL},{5UL,0UL,{6UL,0x6EL},18446744073709551611UL,-10L,65535UL},{0UL,255UL,{0xADB8L,0xC6L},0x6DF6EF7DL,0L,0x6E20L}},{{18446744073709551615UL,0UL,{0x69E1L,0xF7L},18446744073709551610UL,0x6A5961B9L,0UL},{5UL,0UL,{6UL,0x6EL},18446744073709551611UL,-10L,65535UL},{5UL,0UL,{6UL,0x6EL},18446744073709551611UL,-10L,65535UL},{18446744073709551615UL,0UL,{0x69E1L,0xF7L},18446744073709551610UL,0x6A5961B9L,0UL}}},{{{0x96B8AE43225DEAEDLL,0xB1L,{65535UL,-1L},7UL,0x8F0ABFABL,0x748EL},{18446744073709551614UL,0xB3L,{1UL,0xF0L},1UL,1L,0x88C1L},{5UL,254UL,{0x7E04L,0xE0L},0xDECC76B5L,3L,65535UL},{18446744073709551613UL,255UL,{0x8441L,0x72L},0xF4091208L,0L,1UL}},{{1UL,0xDDL,{0xDE95L,1L},8UL,1L,65535UL},{0x381D8479822E7BB9LL,0x15L,{0x6CE7L,0xF2L},0UL,0x4AF12927L,65535UL},{18446744073709551613UL,255UL,{0x8441L,0x72L},0xF4091208L,0L,1UL},{0x31193F7395214660LL,0x08L,{0x6D82L,1L},0xE181CB01L,-9L,65535UL}},{{18446744073709551613UL,255UL,{0x8441L,0x72L},0xF4091208L,0L,1UL},{0x31193F7395214660LL,0x08L,{0x6D82L,1L},0xE181CB01L,-9L,65535UL},{0xD623911DF381B91FLL,0x0AL,{0x15C2L,9L},18446744073709551615UL,-2L,65535UL},{0x31193F7395214660LL,0x08L,{0x6D82L,1L},0xE181CB01L,-9L,65535UL}},{{5UL,0UL,{6UL,0x6EL},18446744073709551611UL,-10L,65535UL},{0x381D8479822E7BB9LL,0x15L,{0x6CE7L,0xF2L},0UL,0x4AF12927L,65535UL},{0x2DECA365B034E2D8LL,0x86L,{0x2FECL,0xB6L},18446744073709551609UL,0x6AA55A69L,0x5E7BL},{18446744073709551613UL,255UL,{0x8441L,0x72L},0xF4091208L,0L,1UL}},{{18446744073709551608UL,0UL,{1UL,0L},0x76A8768DL,0x0F05760DL,0x0548L},{18446744073709551614UL,0xB3L,{1UL,0xF0L},1UL,1L,0x88C1L},{0x31193F7395214660LL,0x08L,{0x6D82L,1L},0xE181CB01L,-9L,65535UL},{18446744073709551615UL,0UL,{0x69E1L,0xF7L},18446744073709551610UL,0x6A5961B9L,0UL}}}};
                int i, j, k;
                g_24 = l_67;
                l_69 = l_68[0][1][0];
                l_70 ^= (((g_24.f0 > (((l_62 = ((((l_32.f4 |= (l_69.f5 <= p_14)) , l_69.f5) <= 1L) > 0x8A5E38B9L)) && l_68[0][1][0].f5) && l_69.f2.f1)) , g_61) <= p_15);
            }
        }
    }
    else
    { 
        struct S2 l_71 = {0x9F0B4AB819B16196LL,4UL,0x5DL};
        int32_t l_79 = 0x53715829L;
        int32_t l_80 = 0x0ECED6D9L;
        l_63[1][2] |= (l_71 , g_64[1]);
        p_14 ^= (((l_80 = ((l_72 , ((g_24.f0 <= l_29) < ((((safe_mul_func_int8_t_s_s((l_79 &= ((--g_76) || (p_13 & 0x64L))), g_64[1])) & g_64[0]) != g_64[0]) | 18446744073709551606UL))) && p_15)) ^ l_62) && l_81[0]);
    }
    l_97[0][2][0] = (safe_sub_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_s((~(((safe_add_func_int8_t_s_s(g_5[4][0][1], (l_63[1][2] = (l_62 = (safe_sub_func_int32_t_s_s((safe_div_func_int32_t_s_s((p_14 &= (safe_sub_func_int8_t_s_s(0x1FL, (((safe_mul_func_int16_t_s_s((-2L), (0x5306L != l_67.f0))) , p_15) <= p_13)))), l_29)), g_75[0][1])))))) & p_13) , 0x4E592539712D87D7LL)), 7)), p_13));
    return l_98;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_5[i][j][k], "g_5[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_10.f0, "g_10.f0", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_24.f0, "g_24.f0", print_hash_value);
    transparent_crc(g_24.f1, "g_24.f1", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_64[i], "g_64[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_75[i][j], "g_75[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_76, "g_76", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_130[i][j], "g_130[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_143[i], "g_143[i]", print_hash_value);

    }
    transparent_crc(g_195, "g_195", print_hash_value);
    transparent_crc(g_209, "g_209", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_233[i], "g_233[i]", print_hash_value);

    }
    transparent_crc(g_249, "g_249", print_hash_value);
    transparent_crc(g_253, "g_253", print_hash_value);
    transparent_crc(g_260, "g_260", print_hash_value);
    transparent_crc(g_277, "g_277", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_300[i], "g_300[i]", print_hash_value);

    }
    transparent_crc(g_337.f0, "g_337.f0", print_hash_value);
    transparent_crc(g_337.f1, "g_337.f1", print_hash_value);
    transparent_crc(g_337.f2, "g_337.f2", print_hash_value);
    transparent_crc(g_339.f0, "g_339.f0", print_hash_value);
    transparent_crc(g_339.f1, "g_339.f1", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_360[i], "g_360[i]", print_hash_value);

    }
    transparent_crc(g_364, "g_364", print_hash_value);
    transparent_crc(g_369, "g_369", print_hash_value);
    transparent_crc(g_394.f0, "g_394.f0", print_hash_value);
    transparent_crc(g_394.f1, "g_394.f1", print_hash_value);
    transparent_crc(g_394.f2.f0, "g_394.f2.f0", print_hash_value);
    transparent_crc(g_394.f2.f1, "g_394.f2.f1", print_hash_value);
    transparent_crc(g_394.f3, "g_394.f3", print_hash_value);
    transparent_crc(g_394.f4, "g_394.f4", print_hash_value);
    transparent_crc(g_394.f5, "g_394.f5", print_hash_value);
    transparent_crc(g_432, "g_432", print_hash_value);
    transparent_crc(g_435, "g_435", print_hash_value);
    transparent_crc(g_439, "g_439", print_hash_value);
    transparent_crc(g_445, "g_445", print_hash_value);
    transparent_crc(g_456, "g_456", print_hash_value);
    transparent_crc(g_457, "g_457", print_hash_value);
    transparent_crc(g_462, "g_462", print_hash_value);
    transparent_crc(g_463, "g_463", print_hash_value);
    transparent_crc(g_465, "g_465", print_hash_value);
    transparent_crc(g_472, "g_472", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
