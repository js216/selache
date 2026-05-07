// SPDX-License-Identifier: MIT
// cctest_csmith_9772cc79.c --- cctest case csmith_9772cc79 (csmith seed 2540883065)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x1012c6b5 */

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

// Options:   -s 2540883065 -o /tmp/csmith_gen__aqk87zu/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint8_t  f0;
   const uint32_t  f1;
};
#pragma pack(pop)

struct S1 {
   int16_t  f0;
   int8_t  f1;
   uint8_t  f2;
   uint64_t  f3;
   int32_t  f4;
};

#pragma pack(push)
#pragma pack(1)
struct S2 {
   int32_t  f0;
   uint64_t  f1;
   uint64_t  f2;
   struct S0  f3;
   uint8_t  f4;
   signed f5 : 21;
   const uint16_t  f6;
};
#pragma pack(pop)

union U3 {
   uint8_t  f0;
   const int32_t  f1;
   int8_t * f2;
};


static int32_t g_3 = 0L;
static uint32_t g_4 = 8UL;
static int8_t g_19 = 0xBDL;
static int8_t *g_18[7] = {&g_19,&g_19,&g_19,&g_19,&g_19,&g_19,&g_19};
static struct S2 g_27[6] = {{0x5E04A276L,0xC116E074F0E4F200LL,0x7FEFB659BAAA4F69LL,{0UL,1UL},0x0CL,616,65533UL},{0x5E04A276L,0xC116E074F0E4F200LL,0x7FEFB659BAAA4F69LL,{0UL,1UL},0x0CL,616,65533UL},{-3L,0x4FEF5379A1D127A4LL,1UL,{0xDDL,0xC75B167DL},0xD8L,1190,0xE43CL},{0x5E04A276L,0xC116E074F0E4F200LL,0x7FEFB659BAAA4F69LL,{0UL,1UL},0x0CL,616,65533UL},{0x5E04A276L,0xC116E074F0E4F200LL,0x7FEFB659BAAA4F69LL,{0UL,1UL},0x0CL,616,65533UL},{-3L,0x4FEF5379A1D127A4LL,1UL,{0xDDL,0xC75B167DL},0xD8L,1190,0xE43CL}};
static const int32_t *g_49 = &g_27[0].f0;
static uint32_t g_63 = 0x0BBFB6FEL;
static uint32_t *g_68 = &g_63;
static uint32_t * const *g_67 = &g_68;
static uint64_t g_88 = 0x57991EE5052BDF33LL;
static uint32_t **g_98 = (void*)0;
static uint32_t ***g_97[7][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_98,&g_98,&g_98,&g_98,&g_98},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_98,&g_98,&g_98,&g_98,&g_98},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_98,&g_98,&g_98,&g_98,&g_98},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
static struct S1 g_103 = {0x366EL,0xC4L,0UL,1UL,1L};
static struct S1 *g_102[4][7][2] = {{{&g_103,(void*)0},{&g_103,&g_103},{&g_103,&g_103},{(void*)0,(void*)0},{(void*)0,&g_103},{&g_103,&g_103},{&g_103,&g_103}},{{&g_103,&g_103},{&g_103,&g_103},{&g_103,&g_103},{&g_103,&g_103},{&g_103,&g_103},{&g_103,&g_103},{&g_103,&g_103}},{{&g_103,&g_103},{&g_103,&g_103},{(void*)0,(void*)0},{(void*)0,&g_103},{&g_103,&g_103},{&g_103,(void*)0},{&g_103,&g_103}},{{&g_103,&g_103},{&g_103,&g_103},{&g_103,(void*)0},{&g_103,&g_103},{&g_103,&g_103},{(void*)0,(void*)0},{(void*)0,&g_103}}};
static struct S0 *g_123 = &g_27[0].f3;
static struct S0 **g_122 = &g_123;
static struct S2 g_139 = {1L,2UL,18446744073709551615UL,{0x2BL,4294967295UL},0x38L,-683,0xA272L};
static uint64_t *g_186 = &g_27[0].f1;
static int32_t *g_268 = &g_103.f4;
static int32_t **g_267 = &g_268;
static union U3 g_278 = {0x38L};
static struct S2 *g_289 = &g_139;
static struct S2 **g_288 = &g_289;
static int32_t g_293 = (-3L);
static int64_t g_314[4][4][7] = {{{0x25AE429D6BD1B4FFLL,(-4L),(-4L),0x25AE429D6BD1B4FFLL,(-4L),(-4L),0x25AE429D6BD1B4FFLL},{0x0F185E36411CF429LL,(-1L),0x0F185E36411CF429LL,1L,2L,1L,0x0F185E36411CF429LL},{0x25AE429D6BD1B4FFLL,0x25AE429D6BD1B4FFLL,(-8L),0x25AE429D6BD1B4FFLL,0x25AE429D6BD1B4FFLL,(-8L),0x25AE429D6BD1B4FFLL},{2L,1L,0x0F185E36411CF429LL,(-1L),0x0F185E36411CF429LL,1L,2L}},{{(-4L),0x25AE429D6BD1B4FFLL,(-4L),(-4L),0x25AE429D6BD1B4FFLL,(-4L),(-4L)},{2L,(-1L),1L,(-1L),2L,(-1L),2L},{0x25AE429D6BD1B4FFLL,(-4L),(-4L),0x25AE429D6BD1B4FFLL,(-4L),(-4L),0x25AE429D6BD1B4FFLL},{0x0F185E36411CF429LL,(-1L),0x0F185E36411CF429LL,1L,2L,1L,0x0F185E36411CF429LL}},{{0x25AE429D6BD1B4FFLL,0x25AE429D6BD1B4FFLL,(-8L),0x25AE429D6BD1B4FFLL,0x25AE429D6BD1B4FFLL,(-8L),0x25AE429D6BD1B4FFLL},{2L,1L,0x0F185E36411CF429LL,(-1L),0x0F185E36411CF429LL,1L,2L},{(-4L),0x25AE429D6BD1B4FFLL,(-4L),(-4L),0x25AE429D6BD1B4FFLL,(-4L),(-4L)},{2L,(-1L),1L,(-1L),2L,(-1L),2L}},{{0x25AE429D6BD1B4FFLL,(-4L),(-4L),0x25AE429D6BD1B4FFLL,(-4L),(-4L),0x25AE429D6BD1B4FFLL},{0x0F185E36411CF429LL,(-1L),0x0F185E36411CF429LL,1L,2L,1L,0x0F185E36411CF429LL},{0x25AE429D6BD1B4FFLL,0x25AE429D6BD1B4FFLL,(-8L),0x25AE429D6BD1B4FFLL,0x25AE429D6BD1B4FFLL,(-8L),0x25AE429D6BD1B4FFLL},{2L,1L,0x0F185E36411CF429LL,(-1L),0x0F185E36411CF429LL,1L,2L}}};
static uint16_t g_318 = 65535UL;
static int32_t g_329 = 1L;
static uint8_t g_330[1][7][1] = {{{253UL},{253UL},{253UL},{253UL},{253UL},{253UL},{253UL}}};
static uint64_t g_375 = 0x9FB1D648DD55F3FALL;
static int64_t g_381[4] = {0xBB463BC3F93BFE93LL,0xBB463BC3F93BFE93LL,0xBB463BC3F93BFE93LL,0xBB463BC3F93BFE93LL};
static uint16_t g_465[2][3] = {{0xF600L,0xF600L,0xF600L},{0xF600L,0xF600L,0xF600L}};
static int32_t *g_508 = &g_293;
static int32_t **g_507 = &g_508;
static int32_t ** const *g_506 = &g_507;
static int32_t ** const ** const g_505 = &g_506;
static struct S0 g_574 = {2UL,0x8A917BC4L};
static union U3 g_589 = {5UL};
static int64_t g_610 = 2L;
static int32_t g_611 = 4L;
static int32_t g_614 = (-1L);
static int32_t g_623[3] = {0xCF563961L,0xCF563961L,0xCF563961L};
static int64_t g_624[2][4] = {{0x621CEBDC75DA4818LL,(-1L),(-1L),7L},{(-1L),7L,(-1L),(-1L)}};
static uint64_t g_625 = 1UL;
static const uint16_t g_633 = 65535UL;
static int32_t g_725 = (-8L);
static int64_t g_726 = 1L;
static uint32_t g_727 = 4294967294UL;
static const uint32_t g_747 = 1UL;
static int32_t g_750[4] = {0x65209325L,0x65209325L,0x65209325L,0x65209325L};
static int16_t g_808 = 0xE248L;
static int32_t ***g_885 = &g_267;
static int16_t *g_946 = &g_808;
static int16_t **g_945 = &g_946;
static int16_t ***g_944 = &g_945;
static struct S2 g_1055[6][4] = {{{0x86510E02L,0x9EC97946A9B05196LL,0UL,{0x4BL,4294967287UL},255UL,601,0x511AL},{0L,1UL,0x9F8B56EF01F10FB6LL,{0x55L,0xCBFA7145L},0x02L,79,65535UL},{0L,0UL,0xFF5D32FA0E475980LL,{0xFBL,4294967292UL},0x87L,-436,6UL},{-1L,0UL,18446744073709551615UL,{0x6AL,4294967295UL},0x0CL,-766,65529UL}},{{0L,1UL,3UL,{0x72L,0x8104EB28L},0xD5L,-973,0x535EL},{0L,1UL,0x9F8B56EF01F10FB6LL,{0x55L,0xCBFA7145L},0x02L,79,65535UL},{0L,1UL,0x9F8B56EF01F10FB6LL,{0x55L,0xCBFA7145L},0x02L,79,65535UL},{0L,1UL,3UL,{0x72L,0x8104EB28L},0xD5L,-973,0x535EL}},{{0L,1UL,0x9F8B56EF01F10FB6LL,{0x55L,0xCBFA7145L},0x02L,79,65535UL},{0L,1UL,3UL,{0x72L,0x8104EB28L},0xD5L,-973,0x535EL},{0x86510E02L,0x9EC97946A9B05196LL,0UL,{0x4BL,4294967287UL},255UL,601,0x511AL},{0x8E4E7501L,1UL,0x291627FCD4156F4ALL,{254UL,4294967295UL},1UL,-1441,7UL}},{{0L,1UL,0x9F8B56EF01F10FB6LL,{0x55L,0xCBFA7145L},0x02L,79,65535UL},{0x86510E02L,0x9EC97946A9B05196LL,0UL,{0x4BL,4294967287UL},255UL,601,0x511AL},{0L,1UL,0x9F8B56EF01F10FB6LL,{0x55L,0xCBFA7145L},0x02L,79,65535UL},{0L,0UL,0xFF5D32FA0E475980LL,{0xFBL,4294967292UL},0x87L,-436,6UL}},{{0L,1UL,3UL,{0x72L,0x8104EB28L},0xD5L,-973,0x535EL},{0x8E4E7501L,1UL,0x291627FCD4156F4ALL,{254UL,4294967295UL},1UL,-1441,7UL},{0L,0UL,0xFF5D32FA0E475980LL,{0xFBL,4294967292UL},0x87L,-436,6UL},{0L,0UL,0xFF5D32FA0E475980LL,{0xFBL,4294967292UL},0x87L,-436,6UL}},{{0x86510E02L,0x9EC97946A9B05196LL,0UL,{0x4BL,4294967287UL},255UL,601,0x511AL},{0x86510E02L,0x9EC97946A9B05196LL,0UL,{0x4BL,4294967287UL},255UL,601,0x511AL},{-1L,0UL,18446744073709551615UL,{0x6AL,4294967295UL},0x0CL,-766,65529UL},{0x8E4E7501L,1UL,0x291627FCD4156F4ALL,{254UL,4294967295UL},1UL,-1441,7UL}}};
static uint8_t g_1115 = 8UL;
static uint32_t g_1151[2] = {0x0927FAB8L,0x0927FAB8L};
static struct S1 **g_1184 = &g_102[1][5][0];
static int16_t ****g_1296 = &g_944;
static int16_t *****g_1295 = &g_1296;
static int32_t ****g_1325 = &g_885;
static int32_t **** const *g_1324[1] = {&g_1325};
static const struct S1 *g_1345[7][2][4] = {{{&g_103,&g_103,&g_103,&g_103},{&g_103,&g_103,&g_103,&g_103}},{{&g_103,&g_103,&g_103,&g_103},{&g_103,&g_103,&g_103,&g_103}},{{&g_103,&g_103,&g_103,&g_103},{&g_103,&g_103,&g_103,&g_103}},{{&g_103,&g_103,&g_103,&g_103},{&g_103,&g_103,&g_103,&g_103}},{{&g_103,&g_103,&g_103,&g_103},{&g_103,&g_103,&g_103,&g_103}},{{&g_103,&g_103,&g_103,&g_103},{&g_103,&g_103,&g_103,&g_103}},{{&g_103,&g_103,&g_103,&g_103},{&g_103,&g_103,&g_103,&g_103}}};
static int32_t g_1399 = 4L;
static struct S2 g_1442[2] = {{0x5CB9B140L,0xCACA4F790FD3E226LL,0xE1959D3FC6752BA7LL,{0x64L,0UL},0xF5L,1033,1UL},{0x5CB9B140L,0xCACA4F790FD3E226LL,0xE1959D3FC6752BA7LL,{0x64L,0UL},0xF5L,1033,1UL}};
static struct S2 g_1445 = {0L,0xBFFB482D6449C53BLL,0xF11F08369708DA61LL,{0UL,0xD710FAB1L},0xABL,-1091,0x3174L};
static uint32_t g_1498 = 0x4A390D8AL;
static const int32_t *g_1515 = (void*)0;
static int8_t **g_1564 = &g_18[2];
static int8_t ***g_1563 = &g_1564;
static int16_t g_1664[5][7][3] = {{{1L,4L,0L},{0x0DD6L,0xD5D0L,0L},{0xD5D0L,4L,0x43ABL},{9L,(-7L),9L},{4L,0L,9L},{0x8719L,(-9L),0x43ABL},{0x43ABL,9L,0L}},{{0L,0x3B5EL,0L},{0x43ABL,(-7L),0x0DD6L},{0x8719L,0x8719L,(-7L)},{4L,0x8719L,(-9L)},{9L,(-7L),0x8719L},{0xD5D0L,0x3B5EL,0x96CCL},{0x0DD6L,9L,0x8719L}},{{1L,(-9L),(-9L)},{(-1L),0L,(-7L)},{(-1L),(-7L),0x0DD6L},{1L,4L,0L},{0x0DD6L,0xD5D0L,0L},{0xD5D0L,4L,0x43ABL},{9L,(-7L),9L}},{{4L,0L,9L},{0x8719L,(-9L),0x43ABL},{0x43ABL,9L,0L},{0L,0x3B5EL,0L},{0x43ABL,(-7L),0x0DD6L},{0x8719L,0x8719L,(-7L)},{4L,0x8719L,(-9L)}},{{9L,(-7L),0x8719L},{0xD5D0L,0x3B5EL,0x96CCL},{0x0DD6L,9L,0x8719L},{1L,0L,0L},{0L,1L,0x3B5EL},{0L,0x3B5EL,0L},{(-1L),(-9L),4L}}};
static int8_t g_1751[1][3] = {{0xD6L,0xD6L,0xD6L}};
static uint32_t ****g_1792 = &g_97[0][0];
static uint32_t ***** const g_1791 = &g_1792;
static uint64_t g_1917 = 0x2A54DFBE4A4C4CC0LL;
static struct S1 ***g_1930 = (void*)0;
static struct S1 ****g_1929[3] = {&g_1930,&g_1930,&g_1930};
static int16_t g_1933 = 0xE2E1L;
static struct S2 g_2043[1] = {{0x45FBC767L,18446744073709551615UL,18446744073709551615UL,{250UL,0x6CC6A74BL},0x80L,1013,6UL}};
static int64_t g_2056 = 0x0506A0E89977EC95LL;
static struct S2 **g_2075 = &g_289;
static const uint64_t *g_2096 = (void*)0;
static uint8_t *g_2217 = &g_139.f4;
static uint8_t **g_2216 = &g_2217;



static struct S2  func_1(void);
static uint32_t  func_9(uint16_t  p_10, int16_t  p_11, uint8_t  p_12);
static uint16_t  func_13(int32_t * p_14, int8_t * p_15, uint64_t  p_16, int8_t * p_17);
static uint64_t  func_20(const int32_t  p_21, const int32_t * p_22, int32_t * p_23);
static int32_t  func_24(struct S2  p_25, int64_t  p_26);
static uint64_t  func_30(int32_t * p_31, int32_t * p_32);
static struct S2 * func_34(int32_t  p_35, int32_t  p_36, int32_t * p_37);
static int8_t  func_39(const struct S0  p_40, int8_t * p_41, uint32_t  p_42, int8_t * p_43);




static struct S2  func_1(void)
{ 
    int32_t *l_2[3][4][5] = {{{&g_3,&g_3,&g_3,&g_3,&g_3},{(void*)0,(void*)0,&g_3,&g_3,(void*)0},{(void*)0,&g_3,&g_3,&g_3,&g_3},{&g_3,&g_3,(void*)0,(void*)0,&g_3}},{{&g_3,&g_3,(void*)0,(void*)0,&g_3},{&g_3,(void*)0,&g_3,(void*)0,&g_3},{&g_3,&g_3,&g_3,&g_3,&g_3},{&g_3,&g_3,(void*)0,&g_3,(void*)0}},{{&g_3,&g_3,&g_3,&g_3,&g_3},{&g_3,&g_3,&g_3,&g_3,(void*)0},{(void*)0,&g_3,(void*)0,&g_3,&g_3},{(void*)0,&g_3,(void*)0,&g_3,&g_3}}};
    int8_t *l_1539 = &g_103.f1;
    uint16_t *l_1934[1];
    uint8_t l_1935 = 255UL;
    uint16_t l_1936 = 5UL;
    const int32_t l_1937 = 0x7A8756F5L;
    int32_t l_1938 = (-8L);
    uint32_t l_1997 = 0xA3B150ACL;
    struct S0 l_2019 = {246UL,0xFD55249FL};
    struct S2 *l_2041 = (void*)0;
    uint32_t l_2072[4];
    uint32_t l_2078 = 0xEDC799D2L;
    const int8_t *l_2091 = &g_19;
    const int8_t **l_2090 = &l_2091;
    const int8_t ***l_2089 = &l_2090;
    const int8_t ****l_2088 = &l_2089;
    uint32_t *l_2118 = &g_63;
    struct S1 l_2120[6][5][7] = {{{{-3L,0xA1L,0xF8L,18446744073709551615UL,-6L},{9L,0x72L,0x67L,0x296DF18469046CB5LL,6L},{-8L,0x4BL,255UL,18446744073709551611UL,0L},{-7L,-1L,0x68L,5UL,4L},{9L,0x72L,0x67L,0x296DF18469046CB5LL,6L},{0xD04FL,1L,255UL,0xA4739B3B3BDE9180LL,4L},{9L,0x72L,0x67L,0x296DF18469046CB5LL,6L}},{{-1L,0xC6L,0UL,0UL,0xC99BE022L},{6L,0xABL,0x21L,0UL,0L},{6L,0xABL,0x21L,0UL,0L},{-1L,0xC6L,0UL,0UL,0xC99BE022L},{9L,0xE8L,0x2EL,1UL,-10L},{-2L,0x52L,255UL,0xC48ADCFC1A852159LL,0L},{0L,0x7BL,0x94L,0x329EF51B6B7B1DE1LL,-1L}},{{7L,1L,251UL,1UL,0x1C4CB55AL},{0xF81FL,-10L,0xF5L,0x35CBC54A1D544C25LL,0x4F2CD3A6L},{0x6F2DL,0x6AL,2UL,0UL,0xB7EC57E4L},{0L,1L,0x9DL,1UL,0xA1C2E729L},{-3L,0xA1L,0xF8L,18446744073709551615UL,-6L},{7L,1L,251UL,1UL,0x1C4CB55AL},{7L,1L,251UL,1UL,0x1C4CB55AL}},{{0x82ECL,0x46L,247UL,1UL,-4L},{0L,0x7BL,0x94L,0x329EF51B6B7B1DE1LL,-1L},{0x124FL,2L,4UL,18446744073709551610UL,1L},{0L,0x7BL,0x94L,0x329EF51B6B7B1DE1LL,-1L},{0x82ECL,0x46L,247UL,1UL,-4L},{0x9F58L,0xFEL,0xEAL,1UL,0x347B7448L},{0L,0x7BL,0x94L,0x329EF51B6B7B1DE1LL,-1L}},{{0x7C4CL,7L,0xA4L,0xC86F6BEF05596C9FLL,0xA69F01EDL},{-1L,0x6FL,0xAFL,0x104CF87FCBAC9A51LL,0L},{1L,1L,1UL,5UL,4L},{-3L,0xA1L,0xF8L,18446744073709551615UL,-6L},{0x6F2DL,0x6AL,2UL,0UL,0xB7EC57E4L},{1L,1L,1UL,5UL,4L},{9L,0x72L,0x67L,0x296DF18469046CB5LL,6L}}},{{{6L,0xABL,0x21L,0UL,0L},{-3L,0x9DL,5UL,0x75D8581EC702C2E7LL,0xCB3A7DE0L},{1L,0xC5L,253UL,1UL,0x27BD3461L},{1L,0xC5L,253UL,1UL,0x27BD3461L},{-3L,0x9DL,5UL,0x75D8581EC702C2E7LL,0xCB3A7DE0L},{6L,0xABL,0x21L,0UL,0L},{9L,0xE8L,0x2EL,1UL,-10L}},{{0x7C4CL,7L,0xA4L,0xC86F6BEF05596C9FLL,0xA69F01EDL},{-3L,0xA1L,0xF8L,18446744073709551615UL,-6L},{0xD04FL,1L,255UL,0xA4739B3B3BDE9180LL,4L},{0x7C4CL,7L,0xA4L,0xC86F6BEF05596C9FLL,0xA69F01EDL},{9L,0x72L,0x67L,0x296DF18469046CB5LL,6L},{0x89BFL,-8L,0x2CL,0UL,4L},{-3L,0xA1L,0xF8L,18446744073709551615UL,-6L}},{{0x82ECL,0x46L,247UL,1UL,-4L},{-1L,0x98L,246UL,0x72C45B591A1C7A65LL,0L},{6L,0xABL,0x21L,0UL,0L},{-5L,1L,0x06L,0x61F1517133EBCAB9LL,7L},{6L,0xABL,0x21L,0UL,0L},{-1L,0x98L,246UL,0x72C45B591A1C7A65LL,0L},{0x82ECL,0x46L,247UL,1UL,-4L}},{{7L,1L,251UL,1UL,0x1C4CB55AL},{-3L,0xA1L,0xF8L,18446744073709551615UL,-6L},{0L,1L,0x9DL,1UL,0xA1C2E729L},{0x6F2DL,0x6AL,2UL,0UL,0xB7EC57E4L},{0xF81FL,-10L,0xF5L,0x35CBC54A1D544C25LL,0x4F2CD3A6L},{7L,1L,251UL,1UL,0x1C4CB55AL},{0x6F2DL,0x6AL,2UL,0UL,0xB7EC57E4L}},{{-1L,0xC6L,0UL,0UL,0xC99BE022L},{-3L,0x9DL,5UL,0x75D8581EC702C2E7LL,0xCB3A7DE0L},{7L,0x8AL,0UL,0xEA7163BDAD1B10D6LL,0xE178AE60L},{0L,0x7BL,0x94L,0x329EF51B6B7B1DE1LL,-1L},{0L,0x7BL,0x94L,0x329EF51B6B7B1DE1LL,-1L},{7L,0x8AL,0UL,0xEA7163BDAD1B10D6LL,0xE178AE60L},{-3L,0x9DL,5UL,0x75D8581EC702C2E7LL,0xCB3A7DE0L}}},{{{-3L,0xA1L,0xF8L,18446744073709551615UL,-6L},{-1L,0x6FL,0xAFL,0x104CF87FCBAC9A51LL,0L},{0L,1L,0x9DL,1UL,0xA1C2E729L},{-7L,-1L,0x68L,5UL,4L},{-1L,0x6FL,0xAFL,0x104CF87FCBAC9A51LL,0L},{0x6F2DL,0x6AL,2UL,0UL,0xB7EC57E4L},{9L,0x72L,0x67L,0x296DF18469046CB5LL,6L}},{{-2L,0x52L,255UL,0xC48ADCFC1A852159LL,0L},{0L,0x7BL,0x94L,0x329EF51B6B7B1DE1LL,-1L},{6L,0xABL,0x21L,0UL,0L},{-2L,0x52L,255UL,0xC48ADCFC1A852159LL,0L},{-3L,0x9DL,5UL,0x75D8581EC702C2E7LL,0xCB3A7DE0L},{-2L,0x52L,255UL,0xC48ADCFC1A852159LL,0L},{6L,0xABL,0x21L,0UL,0L}},{{0xF81FL,-10L,0xF5L,0x35CBC54A1D544C25LL,0x4F2CD3A6L},{0xF81FL,-10L,0xF5L,0x35CBC54A1D544C25LL,0x4F2CD3A6L},{0xD04FL,1L,255UL,0xA4739B3B3BDE9180LL,4L},{-7L,-1L,0x68L,5UL,4L},{-3L,0xA1L,0xF8L,18446744073709551615UL,-6L},{1L,0L,0x94L,3UL,2L},{0xF81FL,-10L,0xF5L,0x35CBC54A1D544C25LL,0x4F2CD3A6L}},{{0x82ECL,0x46L,247UL,1UL,-4L},{6L,0xABL,0x21L,0UL,0L},{1L,0xC5L,253UL,1UL,0x27BD3461L},{0L,0x7BL,0x94L,0x329EF51B6B7B1DE1LL,-1L},{-1L,0x98L,246UL,0x72C45B591A1C7A65LL,0L},{-1L,0x98L,246UL,0x72C45B591A1C7A65LL,0L},{0L,0x7BL,0x94L,0x329EF51B6B7B1DE1LL,-1L}},{{1L,1L,1UL,5UL,4L},{9L,0x72L,0x67L,0x296DF18469046CB5LL,6L},{1L,1L,1UL,5UL,4L},{0x6F2DL,0x6AL,2UL,0UL,0xB7EC57E4L},{-3L,0xA1L,0xF8L,18446744073709551615UL,-6L},{1L,1L,1UL,5UL,4L},{-1L,0x6FL,0xAFL,0x104CF87FCBAC9A51LL,0L}}},{{{0L,0x7BL,0x94L,0x329EF51B6B7B1DE1LL,-1L},{-3L,0x9DL,5UL,0x75D8581EC702C2E7LL,0xCB3A7DE0L},{0x124FL,2L,4UL,18446744073709551610UL,1L},{-5L,1L,0x06L,0x61F1517133EBCAB9LL,7L},{-3L,0x9DL,5UL,0x75D8581EC702C2E7LL,0xCB3A7DE0L},{-1L,2L,0xC0L,0xC46B695940E0AD43LL,0L},{-3L,0x9DL,5UL,0x75D8581EC702C2E7LL,0xCB3A7DE0L}},{{0x7C4CL,7L,0xA4L,0xC86F6BEF05596C9FLL,0xA69F01EDL},{0x89BFL,-8L,0x2CL,0UL,4L},{0x89BFL,-8L,0x2CL,0UL,4L},{0L,1L,0x9DL,1UL,0xA1C2E729L},{1L,0L,0x94L,3UL,2L},{-8L,0x4BL,255UL,18446744073709551611UL,0L},{1L,1L,1UL,5UL,4L}},{{-1L,2L,0xC0L,0xC46B695940E0AD43LL,0L},{6L,0xABL,0x21L,0UL,0L},{7L,0x8AL,0UL,0xEA7163BDAD1B10D6LL,0xE178AE60L},{0x2A4DL,1L,1UL,6UL,0x971DC8FBL},{-2L,0x52L,255UL,0xC48ADCFC1A852159LL,0L},{-1L,2L,0xC0L,0xC46B695940E0AD43LL,0L},{-1L,2L,0xC0L,0xC46B695940E0AD43LL,0L}},{{0x6F2DL,0x6AL,2UL,0UL,0xB7EC57E4L},{1L,1L,1UL,5UL,4L},{9L,0x72L,0x67L,0x296DF18469046CB5LL,6L},{1L,1L,1UL,5UL,4L},{0x6F2DL,0x6AL,2UL,0UL,0xB7EC57E4L},{-3L,0xA1L,0xF8L,18446744073709551615UL,-6L},{1L,1L,1UL,5UL,4L}},{{1L,0xC5L,253UL,1UL,0x27BD3461L},{0x9F58L,0xFEL,0xEAL,1UL,0x347B7448L},{0x124FL,2L,4UL,18446744073709551610UL,1L},{-2L,0x52L,255UL,0xC48ADCFC1A852159LL,0L},{7L,0x8AL,0UL,0xEA7163BDAD1B10D6LL,0xE178AE60L},{0x124FL,2L,4UL,18446744073709551610UL,1L},{-1L,0x98L,246UL,0x72C45B591A1C7A65LL,0L}}},{{{0x89BFL,-8L,0x2CL,0UL,4L},{7L,1L,251UL,1UL,0x1C4CB55AL},{0x927CL,0xB6L,0xCDL,1UL,0x4B381A1CL},{0x927CL,0xB6L,0xCDL,1UL,0x4B381A1CL},{7L,1L,251UL,1UL,0x1C4CB55AL},{0x89BFL,-8L,0x2CL,0UL,4L},{1L,0L,0x94L,3UL,2L}},{{1L,0xC5L,253UL,1UL,0x27BD3461L},{-2L,0x52L,255UL,0xC48ADCFC1A852159LL,0L},{-1L,0xC6L,0UL,0UL,0xC99BE022L},{1L,0xC5L,253UL,1UL,0x27BD3461L},{-1L,0x98L,246UL,0x72C45B591A1C7A65LL,0L},{-5L,1L,0x06L,0x61F1517133EBCAB9LL,7L},{-2L,0x52L,255UL,0xC48ADCFC1A852159LL,0L}},{{0x6F2DL,0x6AL,2UL,0UL,0xB7EC57E4L},{0xD04FL,1L,255UL,0xA4739B3B3BDE9180LL,4L},{0x89BFL,-8L,0x2CL,0UL,4L},{-1L,0x6FL,0xAFL,0x104CF87FCBAC9A51LL,0L},{0x89BFL,-8L,0x2CL,0UL,4L},{0xD04FL,1L,255UL,0xA4739B3B3BDE9180LL,4L},{0x6F2DL,0x6AL,2UL,0UL,0xB7EC57E4L}},{{-1L,2L,0xC0L,0xC46B695940E0AD43LL,0L},{-2L,0x52L,255UL,0xC48ADCFC1A852159LL,0L},{0x2A4DL,1L,1UL,6UL,0x971DC8FBL},{7L,0x8AL,0UL,0xEA7163BDAD1B10D6LL,0xE178AE60L},{6L,0xABL,0x21L,0UL,0L},{-1L,2L,0xC0L,0xC46B695940E0AD43LL,0L},{7L,0x8AL,0UL,0xEA7163BDAD1B10D6LL,0xE178AE60L}},{{0L,1L,0x9DL,1UL,0xA1C2E729L},{7L,1L,251UL,1UL,0x1C4CB55AL},{-7L,-1L,0x68L,5UL,4L},{1L,1L,1UL,5UL,4L},{1L,1L,1UL,5UL,4L},{-7L,-1L,0x68L,5UL,4L},{7L,1L,251UL,1UL,0x1C4CB55AL}}},{{{-2L,0x52L,255UL,0xC48ADCFC1A852159LL,0L},{0x9F58L,0xFEL,0xEAL,1UL,0x347B7448L},{0x2A4DL,1L,1UL,6UL,0x971DC8FBL},{9L,0xE8L,0x2EL,1UL,-10L},{0x9F58L,0xFEL,0xEAL,1UL,0x347B7448L},{7L,0x8AL,0UL,0xEA7163BDAD1B10D6LL,0xE178AE60L},{-1L,0x98L,246UL,0x72C45B591A1C7A65LL,0L}},{{-8L,0x4BL,255UL,18446744073709551611UL,0L},{1L,1L,1UL,5UL,4L},{0x89BFL,-8L,0x2CL,0UL,4L},{-8L,0x4BL,255UL,18446744073709551611UL,0L},{7L,1L,251UL,1UL,0x1C4CB55AL},{-8L,0x4BL,255UL,18446744073709551611UL,0L},{0x89BFL,-8L,0x2CL,0UL,4L}},{{6L,0xABL,0x21L,0UL,0L},{6L,0xABL,0x21L,0UL,0L},{-1L,0xC6L,0UL,0UL,0xC99BE022L},{9L,0xE8L,0x2EL,1UL,-10L},{-2L,0x52L,255UL,0xC48ADCFC1A852159LL,0L},{0L,0x7BL,0x94L,0x329EF51B6B7B1DE1LL,-1L},{6L,0xABL,0x21L,0UL,0L}},{{0x6F2DL,0x6AL,2UL,0UL,0xB7EC57E4L},{0x89BFL,-8L,0x2CL,0UL,4L},{0x927CL,0xB6L,0xCDL,1UL,0x4B381A1CL},{1L,1L,1UL,5UL,4L},{0xD04FL,1L,255UL,0xA4739B3B3BDE9180LL,4L},{0xD04FL,1L,255UL,0xA4739B3B3BDE9180LL,4L},{1L,1L,1UL,5UL,4L}},{{0x124FL,2L,4UL,18446744073709551610UL,1L},{-1L,0x98L,246UL,0x72C45B591A1C7A65LL,0L},{0x124FL,2L,4UL,18446744073709551610UL,1L},{7L,0x8AL,0UL,0xEA7163BDAD1B10D6LL,0xE178AE60L},{-2L,0x52L,255UL,0xC48ADCFC1A852159LL,0L},{0x124FL,2L,4UL,18446744073709551610UL,1L},{0x9F58L,0xFEL,0xEAL,1UL,0x347B7448L}}}};
    struct S1 ** const l_2141 = &g_102[1][5][0];
    uint8_t **l_2146[2];
    uint16_t l_2214 = 0x2B02L;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1934[i] = &g_465[0][0];
    for (i = 0; i < 4; i++)
        l_2072[i] = 8UL;
    for (i = 0; i < 2; i++)
        l_2146[i] = (void*)0;
    g_4--;
    return (**g_288);
}



static uint32_t  func_9(uint16_t  p_10, int16_t  p_11, uint8_t  p_12)
{ 
    uint32_t l_1548 = 4UL;
    uint16_t *l_1555[1][3];
    int8_t ***l_1561 = (void*)0;
    int32_t ** const l_1569[2] = {(void*)0,(void*)0};
    uint8_t l_1570[3][6] = {{253UL,248UL,0UL,0x86L,0x86L,0UL},{253UL,253UL,0x86L,0x16L,0UL,0x16L},{248UL,253UL,248UL,0UL,0x86L,0x86L}};
    int8_t * const *l_1583 = &g_18[3];
    int32_t ****l_1601 = &g_885;
    struct S1 l_1608 = {-1L,0x0DL,252UL,0UL,0L};
    int32_t l_1610 = 0x57FB73A6L;
    int8_t l_1623 = 0x98L;
    uint8_t l_1632[5][4];
    struct S1 l_1636 = {0x9176L,0L,254UL,0x27A5C8559E42C811LL,0x90B1D942L};
    int32_t l_1666 = 0x3877A61DL;
    int32_t l_1672[5][5] = {{0xEC5B72B5L,0x3829C645L,0L,(-9L),1L},{0x38BC846AL,(-9L),(-9L),0x38BC846AL,1L},{6L,0x38BC846AL,0L,1L,0x3829C645L},{6L,0L,1L,0L,6L},{0x38BC846AL,(-9L),0xEC5B72B5L,1L,(-9L)}};
    struct S1 **l_1722 = &g_102[3][0][1];
    uint32_t l_1752 = 0x600B351BL;
    uint32_t l_1832 = 0xD5120C09L;
    uint32_t *****l_1888 = &g_1792;
    uint8_t *l_1931 = &g_330[0][6][0];
    int32_t *l_1932 = &g_1055[4][2].f0;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_1555[i][j] = (void*)0;
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
            l_1632[i][j] = 0x7CL;
    }
    for (g_808 = 0; (g_808 <= 1); g_808 += 1)
    { 
        struct S0 *l_1542 = &g_1055[4][2].f3;
        int32_t l_1543 = (-4L);
        int32_t *l_1544 = (void*)0;
        int32_t *l_1545 = (void*)0;
        int32_t *l_1546 = (void*)0;
        int32_t *l_1547 = &g_750[0];
        int8_t ****l_1562[5][1] = {{&l_1561},{&l_1561},{&l_1561},{&l_1561},{&l_1561}};
        uint8_t *l_1571 = &g_27[0].f3.f0;
        int32_t *l_1572 = &l_1543;
        struct S1 ***l_1586[7][3] = {{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}};
        uint32_t l_1631 = 0x7D8F3177L;
        int32_t l_1658 = 0xB15E64C4L;
        int32_t l_1659 = (-9L);
        int32_t l_1660 = 0x50E4125BL;
        int32_t l_1661 = 1L;
        int32_t l_1663 = 0x4FC38C59L;
        int32_t l_1665 = 0xE3A20C15L;
        int32_t l_1667 = 0x40759DFDL;
        int32_t l_1668 = (-9L);
        int32_t l_1669 = 0xAB9C6131L;
        int32_t l_1670 = 0x8E715C25L;
        int32_t l_1673 = 0xE0A0C556L;
        int8_t l_1687 = 0L;
        int8_t *****l_1692 = (void*)0;
        struct S1 l_1731 = {0x4A23L,0xB3L,0x95L,1UL,-1L};
        int32_t l_1736 = 0xA89F52A0L;
        int32_t l_1737 = 0xFCE1DF40L;
        int32_t l_1738 = (-6L);
        int32_t l_1739 = (-6L);
        uint64_t l_1740 = 18446744073709551615UL;
        uint32_t *****l_1907 = &g_1792;
        int i, j;
        (*g_122) = l_1542;
        --l_1548;
        if (((safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((&p_10 == l_1555[0][1]), 4)), (safe_div_func_uint64_t_u_u((((((*l_1572) = ((*l_1547) = (((*l_1571) ^= (safe_add_func_int32_t_s_s(((***g_885) &= (~(((g_1563 = l_1561) != l_1561) != ((((**g_67) = ((0UL | (safe_add_func_uint32_t_u_u((safe_mod_func_int64_t_s_s(((**g_505) != l_1569[0]), g_1151[g_808])), p_12))) , p_11)) | (*l_1547)) , 0UL)))), l_1570[1][4]))) ^ p_12))) <= 0xEFD364A3L) || (*l_1547)) < (*g_186)), (*g_186))))) != p_12))
        { 
            union U3 l_1582 = {255UL};
            struct S1 ***l_1585 = &g_1184;
            struct S1 ****l_1584 = &l_1585;
            for (g_318 = 7; (g_318 <= 52); g_318 = safe_add_func_int32_t_s_s(g_318, 6))
            { 
                uint32_t l_1575 = 0xDB7EF166L;
                (*l_1547) = (1UL ^ l_1575);
            }
            (*l_1547) &= (safe_div_func_uint32_t_u_u((p_11 | (safe_sub_func_int64_t_s_s((safe_sub_func_int64_t_s_s(((l_1582 , &g_18[5]) != l_1583), ((l_1570[0][4] & ((((*l_1584) = (((***g_944) == l_1582.f0) , (void*)0)) != l_1586[2][2]) | (*g_186))) < (**g_267)))), p_10))), p_10));
            if ((*g_49))
                continue;
        }
        else
        { 
            int32_t *****l_1602 = &g_1325;
            int64_t *l_1609 = &g_624[0][0];
            int32_t l_1630[1];
            struct S0 ***l_1654[6] = {&g_122,&g_122,&g_122,&g_122,&g_122,&g_122};
            int16_t l_1671[3][4][5] = {{{0x9441L,0xA1F0L,0x9441L,0xA1CEL,4L},{0x055AL,0x9E00L,(-4L),0x9E00L,0x055AL},{0x9441L,0L,0xA1F0L,0xA6CCL,0xA1F0L},{2L,2L,2L,1L,0x9E00L}},{{0x9441L,0xA6CCL,0xA6CCL,0x9441L,0xF14CL},{0x76A8L,1L,(-4L),(-4L),1L},{0xF14CL,0xA6CCL,4L,0xA1F0L,0xA1F0L},{0x055AL,0xECC8L,0x055AL,(-4L),2L}},{{0xA1CEL,0x9441L,0xA1F0L,0x9441L,0xA1CEL},{0x055AL,0x76A8L,0xECC8L,1L,0xECC8L},{0xF14CL,0xF14CL,0xA1F0L,0xA1CEL,0L},{0x76A8L,0x055AL,0x055AL,0x76A8L,0xECC8L}}};
            int8_t **l_1677 = &g_18[5];
            int8_t **l_1678[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int8_t *****l_1691 = (void*)0;
            uint64_t l_1711 = 0UL;
            uint16_t l_1717 = 65535UL;
            uint32_t ****l_1724[3];
            struct S1 l_1728 = {0x1D3CL,0xF6L,248UL,1UL,0L};
            int16_t *l_1732 = &l_1671[0][2][0];
            int16_t *l_1733 = &l_1636.f0;
            int32_t *l_1734 = &l_1610;
            int32_t *l_1735[7];
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_1630[i] = 0xC0965162L;
            for (i = 0; i < 3; i++)
                l_1724[i] = &g_97[0][0];
            for (i = 0; i < 7; i++)
                l_1735[i] = &l_1731.f4;
            (*g_268) = ((safe_mul_func_int16_t_s_s((safe_mod_func_int64_t_s_s((((*g_123) , ((((--(*g_68)) != ((*l_1547) &= (!(safe_mul_func_int8_t_s_s((p_11 <= (+((safe_mul_func_int8_t_s_s((((*l_1602) = l_1601) != (void*)0), (safe_div_func_int64_t_s_s((g_330[0][3][0] == ((*l_1609) = (((~p_12) & ((safe_div_func_uint16_t_u_u(((l_1608 , p_11) | g_103.f2), (****l_1601))) != p_12)) != p_12))), g_318)))) != (****l_1601)))), 0x98L))))) & (-8L)) != l_1610)) != (-1L)), g_318)), g_3)) <= 0L);
            if (((((safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((((safe_mul_func_uint8_t_u_u(((*l_1572) == ((((((safe_rshift_func_uint16_t_u_s(((((g_1445.f5 ^ ((((*l_1572) || p_11) ^ ((((**g_122) , (((****l_1601) | ((safe_sub_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u((((l_1608.f4 = (2L | (*****l_1602))) || (-1L)) != (*****l_1602)), 0x7DL)), l_1623)) || (****l_1601))) <= 247UL)) & 0xB8L) , (****l_1601))) == p_11)) && (*g_186)) == 0x904711BDL) <= p_12), 2)) != 248UL) && p_10) == 0xE1L) != p_10) < 0L)), 0xEFL)) <= (****l_1601)) >= 0L), 6)), 4UL)) & 0x6E03L) , (void*)0) == &l_1545))
            { 
                int32_t *l_1627 = &l_1610;
                struct S1 l_1637[7] = {{0x2B1AL,-2L,0x47L,0x60B9F62DE2BEC557LL,0x57415DEDL},{-4L,0x5DL,246UL,0xC78C11B2FC0D72DCLL,1L},{0x2B1AL,-2L,0x47L,0x60B9F62DE2BEC557LL,0x57415DEDL},{0x2B1AL,-2L,0x47L,0x60B9F62DE2BEC557LL,0x57415DEDL},{-4L,0x5DL,246UL,0xC78C11B2FC0D72DCLL,1L},{0x2B1AL,-2L,0x47L,0x60B9F62DE2BEC557LL,0x57415DEDL},{0x2B1AL,-2L,0x47L,0x60B9F62DE2BEC557LL,0x57415DEDL}};
                int32_t l_1662[4][1][5] = {{{0x8A04FC4BL,0x754C04A9L,0x8A04FC4BL,0x754C04A9L,0x8A04FC4BL}},{{1L,1L,0x76252083L,0x76252083L,1L}},{{0xACF240D0L,0x754C04A9L,0xACF240D0L,0x754C04A9L,0xACF240D0L}},{{1L,0x76252083L,0x76252083L,1L,1L}}};
                int i, j, k;
                (*l_1547) &= ((0UL <= (l_1631 = (((+(safe_mul_func_uint8_t_u_u(((l_1630[0] ^= (((((****l_1601) = p_10) , l_1627) != (*g_267)) , (0x24L <= (safe_div_func_int16_t_s_s(((void*)0 != (***g_505)), (*l_1627)))))) > 6L), (*l_1572)))) != (*l_1572)) != p_11))) ^ p_10);
                if (l_1632[3][1])
                { 
                    uint16_t * const l_1635 = &g_465[0][0];
                    if (p_10)
                        break;
                    (*l_1627) ^= (4294967295UL & (safe_div_func_uint64_t_u_u(((****l_1601) = (((*g_186) >= (((((l_1635 != (g_381[1] , &g_465[0][0])) >= 0xA8L) , 0xE93A58BEL) , 0x95L) ^ p_12)) >= 0x507A58B8F8960531LL)), (-1L))));
                    (*****l_1602) |= (g_318 > 0xD5AE3A331A104FA8LL);
                    l_1637[3] = l_1636;
                }
                else
                { 
                    (****l_1602) = (****l_1602);
                }
                for (g_726 = 0; (g_726 <= 9); g_726++)
                { 
                    uint32_t l_1649 = 0x2357F1BAL;
                    int32_t l_1655 = 0x9BF70663L;
                    int32_t *l_1656 = &g_329;
                    int32_t *l_1657[7][3][6] = {{{&g_3,&l_1636.f4,&g_611,&g_1055[4][2].f0,&l_1630[0],&g_1442[0].f0},{&g_3,&g_3,&l_1630[0],(void*)0,&g_611,(void*)0},{&l_1543,&g_3,&l_1543,&g_1442[0].f0,&l_1630[0],&g_1055[4][2].f0}},{{&l_1636.f4,&l_1636.f4,&l_1543,&l_1630[0],&g_3,(void*)0},{&l_1610,&l_1630[0],&l_1630[0],&l_1630[0],&l_1610,&g_1442[0].f0},{&l_1636.f4,(void*)0,&g_611,&g_1442[0].f0,&l_1610,&l_1630[0]}},{{&l_1543,&l_1630[0],&g_3,(void*)0,&g_3,&l_1630[0]},{&g_3,&l_1636.f4,&g_611,&g_1055[4][2].f0,&l_1630[0],&g_1442[0].f0},{&g_3,&g_3,&l_1630[0],(void*)0,&g_611,(void*)0}},{{&l_1543,&g_3,&l_1543,&g_1442[0].f0,&l_1630[0],&g_1055[4][2].f0},{&l_1636.f4,&l_1636.f4,&l_1543,&l_1630[0],&g_3,(void*)0},{&l_1610,&l_1630[0],&l_1630[0],&l_1630[0],&l_1610,&g_1442[0].f0}},{{&l_1636.f4,(void*)0,&g_611,&g_1442[0].f0,&l_1610,&l_1630[0]},{&l_1543,&l_1630[0],&g_3,(void*)0,&g_3,&l_1630[0]},{&g_3,&l_1636.f4,&g_611,&g_1055[4][2].f0,&l_1630[0],&g_1442[0].f0}},{{&g_3,&g_3,&l_1630[0],(void*)0,&g_611,(void*)0},{&l_1543,&g_3,&l_1543,&g_1442[0].f0,&l_1630[0],&g_1055[4][2].f0},{&l_1636.f4,&l_1636.f4,&l_1543,&l_1630[0],&g_3,(void*)0}},{{&l_1610,&l_1630[0],&l_1630[0],&l_1630[0],&l_1610,&g_1442[0].f0},{&l_1636.f4,&g_1442[0].f0,&l_1630[0],&g_1055[4][2].f0,&g_611,&l_1636.f4},{&l_1610,&l_1636.f4,&g_611,&g_1442[0].f0,&g_611,&l_1636.f4}}};
                    uint16_t l_1674 = 65532UL;
                    int i, j, k;
                    (*****l_1602) = p_12;
                    l_1655 = (safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(((safe_lshift_func_int16_t_s_s(p_10, 9)) | (~1L)), 10)), ((l_1649 , p_12) > 0x669D4EC882103C37LL))), ((*****l_1602) ^= ((p_11 <= ((*g_68)++)) < (((safe_sub_func_int16_t_s_s((((void*)0 == l_1654[1]) > p_11), p_12)) | 0x7D80L) >= 9L)))));
                    l_1674--;
                }
            }
            else
            { 
                int64_t l_1679 = 0x6DD02CE2670438D3LL;
                int32_t l_1697 = 0L;
                int32_t l_1708 = 0xC5A9684FL;
                int32_t l_1709 = 0xA6144ACFL;
                int32_t l_1710 = (-4L);
                int32_t *l_1714 = (void*)0;
                int32_t *l_1715 = &g_329;
                int32_t *l_1716[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_1716[i] = &l_1630[0];
                if (((1L && g_19) >= ((l_1678[1] = l_1677) == (void*)0)))
                { 
                    return (*g_68);
                }
                else
                { 
                    int32_t *l_1680 = &g_1442[0].f0;
                    int32_t *l_1681 = &l_1660;
                    int32_t *l_1682 = &g_750[0];
                    int32_t *l_1683 = (void*)0;
                    int32_t *l_1684 = (void*)0;
                    int32_t *l_1685 = &g_103.f4;
                    int32_t *l_1686[3];
                    uint32_t l_1688 = 0UL;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1686[i] = &g_1055[4][2].f0;
                    --l_1688;
                }
                l_1692 = l_1691;
                for (l_1666 = (-1); (l_1666 == (-15)); l_1666 = safe_sub_func_int32_t_s_s(l_1666, 4))
                { 
                    struct S1 ****l_1695 = (void*)0;
                    struct S1 ****l_1696 = &l_1586[4][0];
                    int32_t l_1698 = (-1L);
                    int32_t *l_1699 = &g_27[0].f0;
                    int32_t *l_1700 = &g_1445.f0;
                    int32_t *l_1701 = &l_1672[2][4];
                    int32_t *l_1702 = &l_1658;
                    int32_t *l_1703 = &l_1630[0];
                    int32_t *l_1704 = &g_750[0];
                    int32_t *l_1705 = &l_1670;
                    int32_t *l_1706 = (void*)0;
                    int32_t *l_1707[3][1];
                    int i, j;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_1707[i][j] = (void*)0;
                    }
                    l_1697 = (((*l_1696) = &g_1184) == &g_1184);
                    --l_1711;
                }
                l_1717++;
                if ((safe_add_func_uint8_t_u_u(((p_12 >= 0xC409253F3A1A9778LL) == ((*g_186) = ((((*l_1715) &= ((0L != (((void*)0 == l_1722) | ((p_11 || (!g_63)) > 1UL))) & g_103.f0)) || p_10) | 0UL))), (****l_1601))))
                { 
                    (****l_1601) |= (*l_1715);
                }
                else
                { 
                    uint32_t *****l_1725 = &l_1724[0];
                    (*l_1725) = l_1724[0];
                    (**g_267) = 0xB73212EEL;
                }
            }
            (****l_1602) = (****l_1602);
            l_1630[0] = (safe_mul_func_int16_t_s_s(((*l_1733) = ((**g_122) , (l_1728 , ((*l_1732) &= ((((****l_1601) = (safe_rshift_func_int16_t_s_s((((*g_289) , 1L) == (((*l_1547) = (0xB57ED3A5A539396DLL == 0x27C6FE4C05D38EB4LL)) , (((l_1728 = l_1731) , 0x200DL) , (*****l_1602)))), 5))) < p_10) > (*l_1572)))))), (****g_1296)));
            ++l_1740;
        }
        for (g_726 = (-18); (g_726 != (-4)); g_726++)
        { 
            int32_t *l_1745 = (void*)0;
            int32_t *l_1746 = &l_1669;
            int32_t *l_1747 = &g_725;
            int32_t *l_1748 = &l_1660;
            int32_t *l_1749 = &l_1543;
            int32_t *l_1750[1][4][4] = {{{&l_1660,&l_1660,&l_1660,&l_1660},{&l_1660,&l_1660,&l_1660,&l_1660},{&l_1660,&l_1660,&l_1660,&l_1660},{&l_1660,&l_1660,&l_1660,&l_1660}}};
            int64_t *l_1777 = &g_381[1];
            int i, j, k;
            (*g_267) = (***g_1325);
            --l_1752;
            (*l_1748) ^= (safe_sub_func_uint64_t_u_u((((*l_1777) = (((safe_mod_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u((safe_div_func_int64_t_s_s((safe_sub_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_s((-8L), p_11)) ^ (safe_sub_func_int32_t_s_s((((*l_1749) = g_589.f0) || (safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_s(((safe_rshift_func_int8_t_s_s(0xD7L, 2)) , 0UL), 12)), 4))), (((*l_1746) = ((((****l_1601) = (l_1636 , (safe_mod_func_uint32_t_u_u((((p_11 , 0x3E66C9FFL) , (****g_1325)) >= p_12), (*g_268))))) == 0x454D48DFL) < p_10)) > 0x5DF122A5615E9CDALL)))), 4294967295UL)), l_1672[1][0])), g_103.f0)) || p_10), p_11)) || g_139.f4) | 8UL)) ^ (-1L)), g_293));
        }
        for (l_1608.f4 = 0; (l_1608.f4 <= 0); l_1608.f4 += 1)
        { 
            struct S1 *l_1778 = &l_1608;
            uint64_t l_1780 = 0x695B6B3C9AE25F62LL;
            struct S0 l_1843[3] = {{0UL,6UL},{0UL,6UL},{0UL,6UL}};
            int32_t l_1881 = 0L;
            int32_t l_1883[5];
            struct S1 l_1900 = {-3L,-1L,0x06L,18446744073709551609UL,-5L};
            uint32_t ***** const l_1909 = &g_1792;
            int i;
            for (i = 0; i < 5; i++)
                l_1883[i] = 1L;
            for (g_88 = 1; (g_88 <= 4); g_88 += 1)
            { 
                uint8_t l_1796 = 1UL;
                const int8_t *l_1814[5][2][2] = {{{&g_1751[0][0],&g_1751[0][0]},{&g_1751[0][0],&g_103.f1}},{{&g_1751[0][0],&g_1751[0][0]},{&g_1751[0][0],&g_103.f1}},{{&g_1751[0][0],&g_1751[0][0]},{&g_1751[0][0],&g_103.f1}},{{&g_1751[0][0],&g_1751[0][0]},{&g_1751[0][0],&g_103.f1}},{{&g_1751[0][0],&g_1751[0][0]},{&g_1751[0][0],&g_103.f1}}};
                int64_t l_1831 = 0xDE3AAF0064150ACELL;
                int i, j, k;
                for (l_1623 = 0; (l_1623 <= 4); l_1623 += 1)
                { 
                    return p_11;
                }
                for (g_625 = 0; (g_625 <= 0); g_625 += 1)
                { 
                    int i;
                    (**g_267) = (***g_885);
                }
                for (g_103.f3 = 0; (g_103.f3 <= 4); g_103.f3 += 1)
                { 
                    return p_10;
                }
                for (g_329 = 0; (g_329 <= 4); g_329 += 1)
                { 
                    (*g_1184) = (l_1778 = l_1778);
                    (*g_267) = (***g_1325);
                }
                for (l_1731.f0 = 0; (l_1731.f0 >= 0); l_1731.f0 -= 1)
                { 
                    int32_t *l_1779 = (void*)0;
                    int16_t *l_1795 = &g_1664[0][1][1];
                    int16_t *l_1801 = &l_1636.f0;
                    int i, j;
                    (**g_267) &= ((*l_1572) |= p_10);
                    l_1780--;
                    (***g_885) = ((safe_mul_func_int16_t_s_s((****l_1601), (safe_sub_func_uint16_t_u_u(((safe_add_func_int64_t_s_s(((safe_rshift_func_int16_t_s_u(((void*)0 != g_1791), 7)) | (((safe_div_func_int16_t_s_s((l_1796 = ((*l_1795) = p_11)), (safe_mul_func_int16_t_s_s(((*l_1801) &= (safe_div_func_uint8_t_u_u(g_139.f5, (****l_1601)))), (p_12 || 0x2185L))))) <= l_1780) , p_10)), l_1780)) ^ g_88), g_1055[4][2].f3.f0)))) || 0x4B6FCD9153A4F3ACLL);
                    (***g_885) &= l_1796;
                    (***g_885) = (safe_mod_func_uint64_t_u_u((safe_mod_func_uint64_t_u_u((safe_sub_func_int16_t_s_s((**g_945), (safe_add_func_uint16_t_u_u((g_278 , (safe_rshift_func_int8_t_s_s((((safe_mod_func_uint64_t_u_u((l_1814[2][0][0] != (void*)0), (****l_1601))) >= p_10) ^ ((((*l_1795) ^= ((safe_add_func_int64_t_s_s((safe_add_func_int32_t_s_s((((safe_mod_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((safe_div_func_uint8_t_u_u((((safe_sub_func_int32_t_s_s(p_10, l_1831)) <= l_1796) ^ p_12), p_12)), l_1780)), 1)) == 7L), l_1780)), (-6L))) != (*g_49)) | g_1151[1]), p_11)), 0UL)) & 65526UL)) & l_1832) >= (*g_186))), 7))), g_633)))), 0x8CFDCD840DCC670CLL)), l_1796));
                }
            }
            (*l_1547) = p_11;
            for (p_11 = 4; (p_11 >= 0); p_11 -= 1)
            { 
                uint32_t l_1833 = 0UL;
                const int64_t l_1844 = 0xE736F5D65FC00C0ALL;
                struct S1 l_1845 = {0x75BCL,-2L,248UL,6UL,0L};
                struct S2 *l_1882 = &g_1055[4][2];
                uint64_t *l_1908 = &l_1608.f3;
                int32_t l_1915 = 0x2C512B5BL;
                int32_t l_1916[6];
                int i, j;
                for (i = 0; i < 6; i++)
                    l_1916[i] = 0x4AE08978L;
                l_1547 = &l_1739;
                l_1833--;
            }
        }
    }
    (*l_1932) ^= (l_1608 , (safe_sub_func_int64_t_s_s(((((*l_1931) = ((safe_rshift_func_int16_t_s_s(((((~((0UL != (p_11 <= (((safe_div_func_uint32_t_u_u(p_10, ((-1L) && (safe_mul_func_uint8_t_u_u(g_330[0][6][0], (-9L)))))) , (void*)0) != g_1929[0]))) , (****l_1601))) || g_19) & 0x22L) | (****l_1601)), 10)) & 4L)) > p_12) | g_1151[1]), p_10)));
    return p_11;
}



static uint16_t  func_13(int32_t * p_14, int8_t * p_15, uint64_t  p_16, int8_t * p_17)
{ 
    struct S1 *l_1540 = (void*)0;
    int32_t l_1541 = 0x2038CFF7L;
    (*g_1184) = l_1540;
    (**g_885) = ((**g_288) , (***g_1325));
    return l_1541;
}



static uint64_t  func_20(const int32_t  p_21, const int32_t * p_22, int32_t * p_23)
{ 
    int16_t ****l_1516 = (void*)0;
    int16_t l_1523 = 2L;
    int8_t l_1530[6] = {(-2L),1L,(-2L),(-2L),1L,(-2L)};
    uint16_t l_1531[5] = {0x2725L,0x2725L,0x2725L,0x2725L,0x2725L};
    uint8_t l_1532 = 0x5FL;
    uint16_t *l_1533[5][2];
    int32_t l_1534 = (-7L);
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
            l_1533[i][j] = (void*)0;
    }
    (****g_1325) = (l_1516 == (((safe_rshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(l_1523, ((l_1534 = (((((void*)0 != &g_102[1][5][0]) == ((safe_add_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_u(l_1530[5], ((((0x42L > ((4294967295UL < (*g_268)) , g_4)) & p_21) >= 0x94L) , l_1531[1]))) || l_1532), 0x84D68F2AL)) && (*****g_1295))) < 0x75L) & (-1L))) < 0UL))), p_21)), 0)) , g_750[0]) , l_1516));
    (****g_1325) ^= 0x5794F0DEL;
    (*p_23) = ((safe_lshift_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u(g_139.f4, (g_624[1][0] || 1L))) , p_21), 15)) | (*p_23));
    return p_21;
}



static int32_t  func_24(struct S2  p_25, int64_t  p_26)
{ 
    int32_t *l_33 = &g_3;
    int32_t l_788 = 0xC7287C65L;
    int32_t l_789 = 0xF7F3A759L;
    int32_t l_790 = 0xC8E1109CL;
    int32_t l_791[6][7][4] = {{{1L,0L,0x63807504L,(-3L)},{(-8L),0x4BDA6B7DL,1L,0xCE592800L},{0x63807504L,0x4BDA6B7DL,0x9652126AL,(-3L)},{0x17858C43L,0L,0x17858C43L,0xFF1DA59FL},{0xE15E45CEL,(-1L),0L,0xB6F72105L},{0xE2DE4D52L,0x7EFE565AL,0x6C881E9AL,(-1L)},{1L,1L,0x6C881E9AL,0xC60BABB1L}},{{0xE2DE4D52L,0L,0L,0x66EB00BBL},{0xE15E45CEL,(-3L),0x17858C43L,0xBD272950L},{0x17858C43L,0xBD272950L,0x9652126AL,1L},{0x63807504L,1L,1L,1L},{(-8L),0xBD272950L,0x63807504L,0xBD272950L},{1L,(-3L),0x9DD9FA77L,0x66EB00BBL},{0x9652126AL,0L,(-8L),0xC60BABB1L}},{{0x570199D0L,1L,(-4L),(-1L)},{0x570199D0L,0x7EFE565AL,(-8L),0xB6F72105L},{0x9652126AL,(-1L),0x9DD9FA77L,0xFF1DA59FL},{1L,0L,0x63807504L,(-3L)},{(-8L),0x4BDA6B7DL,1L,0xCE592800L},{0x63807504L,0x4BDA6B7DL,0x9652126AL,(-3L)},{0x17858C43L,0L,0x17858C43L,0xFF1DA59FL}},{{0xE15E45CEL,(-1L),0L,0xB6F72105L},{0xE2DE4D52L,0x7EFE565AL,0x6C881E9AL,(-1L)},{1L,1L,0x6C881E9AL,0xC60BABB1L},{0xE2DE4D52L,0L,0L,0x66EB00BBL},{0xE15E45CEL,(-3L),0x17858C43L,0xBD272950L},{0x17858C43L,0xBD272950L,0x9652126AL,1L},{0x63807504L,1L,1L,1L}},{{(-8L),0xBD272950L,0x63807504L,0xBD272950L},{1L,(-3L),0x9DD9FA77L,0x66EB00BBL},{0x9652126AL,0L,(-8L),0xC60BABB1L},{0x570199D0L,1L,(-4L),(-1L)},{0x570199D0L,0L,0x17858C43L,0x4BDA6B7DL},{0x63807504L,0xCE592800L,(-3L),0x7EFE565AL},{0x6C881E9AL,1L,1L,0x66EB00BBL}},{{0x17858C43L,0x0D0AAC3FL,(-4L),(-3L)},{1L,0x0D0AAC3FL,0x63807504L,0x66EB00BBL},{0x9D6DFAA5L,1L,0x9D6DFAA5L,0x7EFE565AL},{0L,0xCE592800L,1L,0x4BDA6B7DL},{1L,0L,0xE15E45CEL,0xCE592800L},{0xE2DE4D52L,1L,0xE15E45CEL,0xB6F72105L},{1L,1L,1L,(-3L)}}};
    int8_t l_856 = 1L;
    uint16_t l_865[3][1][7] = {{{1UL,0x1C88L,0x1C88L,1UL,0x1C88L,0x1C88L,1UL}},{{0x1C88L,1UL,0x1C88L,0x1C88L,1UL,0x1C88L,0x1C88L}},{{1UL,1UL,65530UL,1UL,1UL,65530UL,1UL}}};
    int32_t l_888 = (-1L);
    uint32_t l_905[6];
    int8_t l_973 = (-4L);
    int64_t l_976 = 4L;
    int64_t *l_992 = (void*)0;
    int64_t *l_993 = &g_381[2];
    union U3 *l_994[2][4];
    union U3 *l_995 = &g_278;
    struct S2 **l_1039 = (void*)0;
    uint16_t l_1042 = 65535UL;
    int8_t l_1087 = 1L;
    uint8_t *l_1105 = &g_1055[4][2].f3.f0;
    const struct S0 ****l_1125[3];
    int16_t **** const l_1230 = &g_944;
    int32_t l_1245[4] = {1L,1L,1L,1L};
    struct S1 l_1267 = {9L,0x3BL,0x2CL,0x96939A7E8E905505LL,-1L};
    int32_t ****l_1357 = (void*)0;
    int8_t **l_1369 = &g_18[5];
    int8_t *l_1372[5];
    int8_t **l_1371 = &l_1372[2];
    uint64_t l_1490 = 5UL;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_905[i] = 0UL;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
            l_994[i][j] = &g_278;
    }
    for (i = 0; i < 3; i++)
        l_1125[i] = (void*)0;
    for (i = 0; i < 5; i++)
        l_1372[i] = &l_856;
    return (****g_505);
}



static uint64_t  func_30(int32_t * p_31, int32_t * p_32)
{ 
    uint16_t l_38 = 1UL;
    int8_t *l_44[1];
    struct S2 l_291 = {0x2A8EAFBAL,1UL,0x18E5C58E840700B3LL,{255UL,0x1A23D4C6L},0x66L,132,0x4EE8L};
    int32_t *l_292 = &g_293;
    const uint16_t *l_632[6] = {&g_633,&g_633,&g_633,&g_633,&g_633,&g_633};
    uint32_t **l_636 = (void*)0;
    uint32_t ***l_637 = &l_636;
    uint32_t **l_638 = &g_68;
    uint8_t *l_641 = (void*)0;
    uint8_t *l_642[3];
    int16_t l_643[4] = {(-7L),(-7L),(-7L),(-7L)};
    int32_t *l_644 = (void*)0;
    int i;
    for (i = 0; i < 1; i++)
        l_44[i] = &g_19;
    for (i = 0; i < 3; i++)
        l_642[i] = (void*)0;
    (*g_288) = func_34(((*l_292) = (l_38 == (((func_39(g_27[0].f3, l_44[0], l_38, l_44[0]) && 9UL) , l_291) , l_291.f3.f0))), l_291.f4, l_292);
    if ((safe_mod_func_int16_t_s_s((g_610 & ((+(((((((l_632[0] = &l_38) == (void*)0) , (safe_mul_func_uint16_t_u_u((((*l_637) = l_636) != l_638), ((safe_div_func_int32_t_s_s(((((g_27[0].f4 &= l_291.f0) ^ (-4L)) , l_643[3]) > 2UL), (*g_68))) | l_291.f6)))) >= l_291.f3.f0) < l_643[3]) , l_291.f1) | 0xABL)) >= l_643[3])), l_291.f6)))
    { 
        uint8_t *l_654 = &g_589.f0;
        int32_t l_659 = 0xD598307FL;
        int16_t l_660 = 0x55CAL;
        int32_t l_691 = 2L;
        int8_t l_715[4][1];
        int8_t l_722 = 0L;
        int32_t l_724 = 0L;
        struct S0 * const l_752 = (void*)0;
        union U3 l_781 = {4UL};
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 1; j++)
                l_715[i][j] = 0L;
        }
        for (g_329 = 0; (g_329 <= 2); g_329 += 1)
        { 
            int32_t l_655[2];
            int16_t *l_658 = &l_643[3];
            uint16_t *l_661 = &g_465[0][0];
            uint64_t l_662 = 0x9751DD36BF726C46LL;
            int32_t *l_663 = &g_139.f0;
            int32_t *l_664 = (void*)0;
            int32_t *l_665 = &l_291.f0;
            int16_t l_683 = 0x8B27L;
            uint8_t *l_694 = &g_330[0][0][0];
            struct S1 l_736 = {0xBA05L,1L,0x88L,0x24DB87E6C294011BLL,0x59440F66L};
            union U3 l_769 = {250UL};
            int i;
            for (i = 0; i < 2; i++)
                l_655[i] = (-9L);
            l_644 = p_32;
            (*l_665) |= ((*l_663) = ((safe_lshift_func_uint16_t_u_s(((safe_lshift_func_int16_t_s_u(g_623[g_329], 7)) , ((*l_661) ^= (~(l_660 = (safe_lshift_func_uint8_t_u_s(((**g_67) && (safe_mul_func_uint8_t_u_u((l_654 == &g_330[0][6][0]), ((((l_655[0] = (l_291.f5 = ((*l_644) |= 0x9BL))) , g_589) , (safe_lshift_func_int16_t_s_s(((*l_658) = 7L), l_659))) && g_623[g_329])))), g_623[g_329])))))), l_662)) != l_659));
            g_268 = l_292;
            (*p_32) = (((safe_lshift_func_int8_t_s_u((((~(safe_div_func_int32_t_s_s(((l_683 = (safe_rshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((l_654 == (l_291.f3 , &g_330[0][1][0])), g_139.f3.f1)), (*l_663))), (safe_add_func_uint32_t_u_u(0xED455109L, ((safe_add_func_int64_t_s_s((-1L), (*l_665))) || (*l_663)))))), g_314[2][2][3]))) < 254UL), (*g_268)))) < (*l_644)) != (-3L)), 0)) & 0x6941A0F0B88D4948LL) <= 0x1D8AL);
            for (l_662 = 0; (l_662 <= 3); l_662 += 1)
            { 
                int32_t ***l_703 = &g_507;
                int32_t l_723[1];
                struct S1 *l_737 = &g_103;
                int64_t *l_738 = &g_726;
                uint16_t l_751 = 0UL;
                int32_t **l_782 = &g_268;
                int i;
                for (i = 0; i < 1; i++)
                    l_723[i] = 0x26E06D45L;
                for (l_659 = 3; (l_659 >= 0); l_659 -= 1)
                { 
                    int32_t l_688[1];
                    const struct S0 *l_709 = &g_27[0].f3;
                    const struct S0 **l_708[5];
                    int64_t *l_716 = (void*)0;
                    int64_t *l_717 = &g_624[0][0];
                    uint16_t l_718[1][7];
                    struct S1 **l_719 = &g_102[1][5][0];
                    int32_t *l_720 = &g_103.f4;
                    int32_t *l_721[6][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_688[i] = 3L;
                    for (i = 0; i < 5; i++)
                        l_708[i] = &l_709;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 7; j++)
                            l_718[i][j] = 5UL;
                    }
                    (*p_32) = (safe_lshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((g_314[l_659][l_659][(l_659 + 1)] & (l_688[0] = g_314[l_659][g_329][g_329])), (safe_sub_func_uint8_t_u_u((++g_27[0].f3.f0), (((g_278 , &g_330[0][3][0]) == l_694) < (0xF1L ^ 0xEEL)))))), 2));
                    (*l_665) ^= ((*p_32) = (safe_mod_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((((g_623[g_329] = ((safe_div_func_uint64_t_u_u(0xC537C6F004609280LL, (safe_mod_func_int64_t_s_s(((*l_717) |= ((((((void*)0 != l_703) == (safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(((*l_654) = (&g_123 != l_708[3])), 4)), 0x91L))) , (safe_mod_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((+(*l_663)) , (*g_268)), g_314[l_659][g_329][g_329])), (-1L)))) , 0xF8L) >= l_715[3][0])), 0x03A411DE1272CE4ALL)))) || l_718[0][0])) , 0L) < (*g_49)), g_614)), 0xCD97L)));
                    (*l_719) = &g_103;
                    (*g_268) |= (*l_665);
                    --g_727;
                }
                for (l_291.f3.f0 = 0; (l_291.f3.f0 <= 3); l_291.f3.f0 += 1)
                { 
                    int i;
                    if (g_381[l_291.f3.f0])
                        break;
                }
                if (((safe_lshift_func_uint16_t_u_s((safe_mod_func_uint8_t_u_u(((((safe_sub_func_int8_t_s_s((((*l_737) = l_736) , (((((((*l_738) = l_715[1][0]) < (safe_add_func_int64_t_s_s((safe_add_func_int32_t_s_s(((safe_sub_func_int64_t_s_s(((safe_mod_func_uint8_t_u_u(g_747, (safe_mod_func_uint64_t_u_u(((((((*p_31) = (*l_644)) > ((1UL & ((void*)0 != &g_625)) < g_750[0])) > l_724) || 0x1DA6459C89A60667LL) || (*g_49)), 0x8185DD9BDD25CCA6LL)))) | g_330[0][1][0]), 6L)) <= l_643[3]), (*l_663))), g_27[0].f6))) , l_723[0]) == 0xC7L) > l_724) < 1L)), l_715[3][0])) != 0x6302L) , g_103.f0) > l_38), 0x50L)), 4)) == l_751))
                { 
                    struct S0 **l_753 = &g_123;
                    struct S0 **l_754 = (void*)0;
                    struct S0 *l_756 = &g_27[0].f3;
                    struct S0 **l_755 = &l_756;
                    int32_t l_764 = 0x9769FF54L;
                    int32_t l_770[7][2][7] = {{{0xE560C646L,0xE560C646L,4L,0x290F062FL,0L,0x290F062FL,4L},{0xA1F1FBA5L,0x01F1F06AL,0x12BEFED0L,0x4DD5D494L,0xBCC356E0L,0x4DD5D494L,0x12BEFED0L}},{{0xE560C646L,0xE560C646L,4L,0x290F062FL,0L,0x290F062FL,4L},{0xA1F1FBA5L,0x01F1F06AL,0x12BEFED0L,0x4DD5D494L,0xBCC356E0L,0x4DD5D494L,0x12BEFED0L}},{{0xE560C646L,0xE560C646L,4L,0x290F062FL,0L,0x290F062FL,4L},{0xA1F1FBA5L,0x01F1F06AL,0x12BEFED0L,0x4DD5D494L,0xBCC356E0L,0x4DD5D494L,0x12BEFED0L}},{{0xE560C646L,0xE560C646L,4L,0x290F062FL,0L,0x290F062FL,4L},{0xA1F1FBA5L,0x01F1F06AL,0x12BEFED0L,0x4DD5D494L,0xBCC356E0L,0x4DD5D494L,0x12BEFED0L}},{{0xE560C646L,0xE560C646L,4L,0x290F062FL,0L,0x290F062FL,4L},{0xA1F1FBA5L,0x01F1F06AL,0x12BEFED0L,0x4DD5D494L,0xBCC356E0L,0x4DD5D494L,0x12BEFED0L}},{{0xE560C646L,0xE560C646L,4L,0x290F062FL,0L,0x290F062FL,4L},{0xA1F1FBA5L,0x01F1F06AL,0x12BEFED0L,0x4DD5D494L,0xBCC356E0L,0x4DD5D494L,0x12BEFED0L}},{{0xE560C646L,0xE560C646L,4L,0x290F062FL,0L,0x290F062FL,4L},{0xA1F1FBA5L,0x01F1F06AL,0x12BEFED0L,0x4DD5D494L,0xBCC356E0L,0x4DD5D494L,0x12BEFED0L}}};
                    int i, j, k;
                    (*l_753) = l_752;
                    (*l_755) = ((*l_753) = (*g_122));
                    l_655[0] |= (safe_lshift_func_uint8_t_u_u((l_722 <= (safe_sub_func_int16_t_s_s(((safe_div_func_uint16_t_u_u((+(l_764 <= ((safe_mul_func_uint16_t_u_u((2UL <= (((l_770[5][0][5] &= (safe_rshift_func_int16_t_s_u(((**g_288) , (((**g_288) , l_769) , (((*g_68) | (*l_665)) && 0UL))), g_139.f0))) , l_751) , l_770[5][0][5])), (*l_644))) == 0x8463F0DDL))), l_723[0])) < 4294967287UL), l_722))), g_625));
                    if ((*p_31))
                        continue;
                }
                else
                { 
                    (*l_737) = l_736;
                    (*l_665) &= (safe_lshift_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((p_32 != (void*)0), (*l_663))), (safe_sub_func_uint32_t_u_u(1UL, (safe_mul_func_uint8_t_u_u(0x5DL, (0x189F12A10014B66FLL >= (((*l_694) &= 0x87L) < 0xE0L))))))));
                }
                (*l_782) = (l_781 , p_32);
            }
        }
        (*p_31) = (*p_32);
        return (*g_186);
    }
    else
    { 
        uint32_t l_783 = 5UL;
        return l_783;
    }
}



static struct S2 * func_34(int32_t  p_35, int32_t  p_36, int32_t * p_37)
{ 
    const struct S1 l_294 = {-1L,0xE4L,0UL,18446744073709551615UL,0xCA742B9BL};
    struct S1 l_295 = {2L,0x12L,0xA7L,18446744073709551615UL,0x1C68F026L};
    struct S0 *l_296[7] = {&g_139.f3,&g_139.f3,&g_139.f3,&g_139.f3,&g_139.f3,&g_139.f3,&g_139.f3};
    int32_t *l_302 = &g_293;
    int32_t **l_303 = &l_302;
    uint8_t *l_307 = &g_139.f3.f0;
    int64_t *l_312 = (void*)0;
    int64_t *l_313 = &g_314[0][1][5];
    uint16_t *l_317 = &g_318;
    int32_t l_324 = (-10L);
    int32_t l_325 = 3L;
    int16_t l_326 = (-4L);
    int32_t l_327[5][5];
    int8_t l_328 = 0xF5L;
    struct S1 *l_354 = &g_103;
    int16_t l_355 = 1L;
    struct S2 *l_356 = &g_27[0];
    int32_t l_420 = 1L;
    int32_t l_466 = 0L;
    int16_t *l_548 = (void*)0;
    int16_t ** const l_547[3] = {&l_548,&l_548,&l_548};
    uint32_t l_563 = 0xA4021DC2L;
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
            l_327[i][j] = (-10L);
    }
lbl_439:
    l_295 = l_294;
    (*g_268) &= ((((void*)0 != l_296[4]) , (((safe_lshift_func_uint16_t_u_s((((l_295 , (safe_sub_func_int32_t_s_s((((((0xE109F48CL | (~((((&g_293 == ((*l_303) = l_302)) , (((~0xA3ABB0B635D1684ELL) <= 255UL) , 0x9E1F5F1FL)) >= 0xE9F4AFBBL) || l_295.f0))) > (*g_186)) , 0xC1L) || 0x03L) == 0x65AFA37F3704DF30LL), (*g_68)))) != 2L) || g_27[0].f0), 12)) , &g_267) != &g_267)) | l_295.f0);
    if (((safe_mul_func_int8_t_s_s((p_36 > ((*l_307) |= ((void*)0 != (*l_303)))), (safe_mul_func_int8_t_s_s(((safe_mul_func_int8_t_s_s((p_36 > (((*l_313) = g_278.f0) != l_295.f3)), (safe_sub_func_uint16_t_u_u(((*l_317) = (l_295.f4 && (*g_186))), 65535UL)))) , l_294.f3), l_295.f1)))) & l_294.f1))
    { 
        int32_t *l_319 = &g_27[0].f0;
        int32_t l_320[3];
        int32_t *l_321 = &g_27[0].f0;
        int32_t *l_322 = &g_27[0].f0;
        int32_t *l_323[2];
        struct S0 l_337 = {0x00L,1UL};
        uint64_t *l_344[4] = {&g_103.f3,&g_103.f3,&g_103.f3,&g_103.f3};
        uint32_t **l_349[1];
        uint8_t *l_360 = &g_27[0].f4;
        struct S2 l_389[3] = {{0x154BB3CDL,18446744073709551608UL,7UL,{0x2FL,0UL},0x09L,685,0UL},{0x154BB3CDL,18446744073709551608UL,7UL,{0x2FL,0UL},0x09L,685,0UL},{0x154BB3CDL,18446744073709551608UL,7UL,{0x2FL,0UL},0x09L,685,0UL}};
        struct S1 l_429 = {-6L,3L,251UL,0xBE08426D6A88F2D5LL,0xBC0CF6C1L};
        uint64_t l_509 = 18446744073709551615UL;
        int i;
        for (i = 0; i < 3; i++)
            l_320[i] = 0xBE0B242CL;
        for (i = 0; i < 2; i++)
            l_323[i] = &g_139.f0;
        for (i = 0; i < 1; i++)
            l_349[i] = &g_68;
lbl_434:
        g_330[0][6][0]++;
        if ((safe_rshift_func_int8_t_s_u((safe_div_func_uint64_t_u_u(18446744073709551615UL, (l_337 , (safe_div_func_uint8_t_u_u(255UL, (safe_sub_func_int16_t_s_s(g_27[0].f1, (safe_rshift_func_int16_t_s_s(((g_27[0].f2 |= 0x030214510060A83ELL) != ((*l_321) = ((safe_add_func_uint8_t_u_u(((*l_307)++), ((l_349[0] == ((safe_rshift_func_uint8_t_u_u(((l_295.f4 = (safe_sub_func_int32_t_s_s((((l_354 = &g_103) != &g_103) <= p_35), l_327[2][2]))) >= p_35), l_355)) , (void*)0)) > 4294967288UL))) | 4L))), 1))))))))), g_103.f1)))
        { 
lbl_543:
            (*l_319) &= 0L;
        }
        else
        { 
            uint64_t l_382[6] = {0xDE6F619C15D4301BLL,0x6831ED015881643CLL,0x6831ED015881643CLL,0xDE6F619C15D4301BLL,0x6831ED015881643CLL,0x6831ED015881643CLL};
            int32_t l_421 = (-4L);
            uint8_t l_428 = 0x6CL;
            int32_t ***l_451 = &l_303;
            struct S0 **l_456 = &g_123;
            int16_t l_489[1][6] = {{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}};
            int8_t *l_490 = &g_103.f1;
            int32_t *l_493 = &l_327[2][2];
            struct S1 l_538[4] = {{0x9FFDL,0L,0x73L,0x4D9CF9B139378CF5LL,0L},{0x9FFDL,0L,0x73L,0x4D9CF9B139378CF5LL,0L},{0x9FFDL,0L,0x73L,0x4D9CF9B139378CF5LL,0L},{0x9FFDL,0L,0x73L,0x4D9CF9B139378CF5LL,0L}};
            struct S1 *l_542 = &l_538[3];
            int16_t **l_550 = &l_548;
            int16_t ***l_549 = &l_550;
            int i, j;
            for (p_35 = 0; (p_35 <= 1); p_35 += 1)
            { 
                return l_356;
            }
            if ((*p_37))
            { 
                uint16_t l_368 = 65533UL;
                struct S1 l_371[6] = {{0xE1BDL,-1L,1UL,0x1FF06CB067467436LL,1L},{0xE1BDL,-1L,1UL,0x1FF06CB067467436LL,1L},{0xE1BDL,-1L,1UL,0x1FF06CB067467436LL,1L},{0xE1BDL,-1L,1UL,0x1FF06CB067467436LL,1L},{0xE1BDL,-1L,1UL,0x1FF06CB067467436LL,1L},{0xE1BDL,-1L,1UL,0x1FF06CB067467436LL,1L}};
                int i;
                (*p_37) = (((+(((((-1L) < g_27[0].f5) | 0L) > (((-1L) | (l_360 == l_307)) < (((safe_rshift_func_int8_t_s_u(((~(safe_div_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((l_324 || l_368) <= l_324), p_36)), 0x6A53L))) ^ 0x5867767C07444D8ALL), g_139.f6)) & p_35) >= (*g_186)))) == p_36)) | 0xF6ABFE57L) | g_27[0].f0);
                if ((((**g_67)++) , (*g_49)))
                { 
                    (*l_354) = l_371[5];
                }
                else
                { 
                    struct S1 **l_377 = &g_102[0][3][0];
                    int64_t *l_380 = &g_381[2];
                    g_375 = (+((**g_67)++));
                    (*p_37) = ((p_35 & (l_344[2] == &g_88)) && (safe_unary_minus_func_int64_t_s(((*l_380) = ((*l_313) &= ((((l_377 != (g_278 , &l_354)) && (safe_mod_func_uint64_t_u_u(p_35, (*g_186)))) ^ p_35) > l_371[5].f0))))));
                    return (*g_288);
                }
            }
            else
            { 
                int16_t *l_402 = &l_326;
                int32_t l_403 = 1L;
                int16_t *l_404 = &l_295.f0;
                (*l_319) = l_382[3];
                if ((safe_sub_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(((*l_404) = (safe_mod_func_int8_t_s_s((((l_389[0] , &p_35) == (void*)0) > (-1L)), (safe_div_func_uint8_t_u_u((((safe_mul_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((0x1DCEL == (safe_rshift_func_uint8_t_u_s(((safe_lshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_s(((*l_402) = (((0x87227AD08F7D0F96LL < (*g_186)) | l_382[3]) , 0x04E5L)), p_35)), l_295.f1)) && (*g_49)), 1))), g_139.f6)), g_139.f1)) >= l_403) , p_36), p_36))))), p_35)) & 0x55L), 0x9EA7L)))
                { 
                    (*p_37) |= 2L;
                }
                else
                { 
                    const uint32_t l_419 = 1UL;
                    (*l_319) = 0x5CD6EF15L;
                    l_421 = ((65532UL >= ((safe_div_func_int16_t_s_s((((((*l_317) = (safe_rshift_func_uint16_t_u_s(((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_s((((safe_mul_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u(p_36, p_36)) && (p_35 & 0x30DF9483L)), ((((safe_div_func_uint8_t_u_u(((((*l_313) = (l_356 == ((*g_288) = l_356))) || p_35) < p_35), l_403)) >= l_294.f3) | (*p_37)) , 0x58D7L))) || l_419) & 0x88D66BC7413135EFLL), l_420)), p_35)) != (*g_186)), 5))) , (*g_186)) & g_27[0].f2) > l_382[4]), (-1L))) & 1L)) & 0xD2L);
                    (*g_288) = (*g_288);
                    (*p_37) = ((((((*l_402) = ((*l_404) ^= (safe_rshift_func_uint16_t_u_s(((*l_317) ^= l_382[3]), 13)))) != ((safe_rshift_func_uint16_t_u_u(l_428, 4)) && (l_429 , (l_337 , ((safe_mod_func_int16_t_s_s(p_35, 0xB6C7L)) > (*g_268)))))) ^ g_27[0].f1) & g_139.f3.f1) == p_36);
                }
                for (l_429.f2 = 0; (l_429.f2 > 47); l_429.f2 = safe_add_func_int32_t_s_s(l_429.f2, 2))
                { 
                    int32_t ***l_436[2][3] = {{&l_303,&l_303,&l_303},{(void*)0,(void*)0,(void*)0}};
                    int32_t ****l_435 = &l_436[1][1];
                    int32_t ***l_438 = &l_303;
                    int32_t ****l_437 = &l_438;
                    int i, j;
                    if (l_429.f2)
                        goto lbl_434;
                    (*l_437) = ((*l_435) = &l_303);
                    if (l_429.f1)
                        goto lbl_439;
                    l_421 |= (((safe_add_func_int64_t_s_s((safe_add_func_uint8_t_u_u((((safe_div_func_int32_t_s_s((p_35 > ((+((safe_lshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(0x66E9D613L, ((((l_451 == (((*l_317) = ((*p_37) && ((void*)0 != &l_354))) , ((((*l_313) ^= (safe_add_func_uint64_t_u_u((l_456 == &g_123), 0x7A100F9E8D903F11LL))) , 0x87C3L) , (void*)0))) , l_403) < 9L) > 0xDB1EL))), g_139.f4)) > l_403)) || p_35)), (*p_37))) & (*g_268)) <= 4UL), p_35)), 0L)) == g_27[0].f3.f0) , 0x242C987BL);
                }
            }
            for (l_295.f2 = 0; (l_295.f2 != 30); l_295.f2++)
            { 
                (*l_322) = (safe_add_func_int8_t_s_s((1UL | ((*g_68) = ((safe_mul_func_uint8_t_u_u(((l_382[2] == ((((safe_mul_func_uint16_t_u_u(g_465[0][0], (l_466 & 1UL))) , (((0x35F0L & (((((0x4EE96FCDL > 1L) && 0x643CFA673B5942FBLL) && g_3) < g_4) <= (-1L))) ^ p_35) > p_35)) != (-1L)) <= (*g_186))) >= g_139.f4), l_295.f1)) | g_139.f4))), 0x15L));
                if ((*p_37))
                    break;
                return (*g_288);
            }
            if ((safe_add_func_uint16_t_u_u((l_421 & (safe_sub_func_uint64_t_u_u((((p_36 , p_35) || p_36) <= (safe_sub_func_int8_t_s_s(((*l_490) = (((((safe_add_func_uint8_t_u_u(((((safe_div_func_uint8_t_u_u(((l_295.f0 , (safe_add_func_int16_t_s_s((((*l_354) , ((safe_mul_func_int8_t_s_s((safe_sub_func_int16_t_s_s((((safe_div_func_int32_t_s_s(((*g_268) = (((((**g_67)++) , &l_428) != l_307) || 0x6BL)), (-1L))) && 0x8AL) ^ g_318), p_36)), p_36)) || g_63)) , l_489[0][2]), g_27[0].f3.f1))) , g_139.f6), p_35)) , 18446744073709551615UL) & 0UL) == (*g_186)), l_489[0][0])) && (*g_268)) || g_329) != (*l_322)) != p_35)), 0x2FL))), g_375))), (-10L))))
            { 
                uint16_t l_494 = 65535UL;
                uint32_t ****l_527 = &g_97[0][3];
                if ((safe_div_func_uint64_t_u_u(18446744073709551606UL, ((&l_302 != (*l_451)) || 1UL))))
                { 
                    uint16_t l_497[1][1][5] = {{{3UL,3UL,3UL,3UL,3UL}}};
                    struct S2 *l_510 = &g_139;
                    int i, j, k;
                    l_493 = &l_320[1];
                    (*l_322) = l_494;
                    (*l_319) = ((safe_div_func_int16_t_s_s(l_497[0][0][3], ((*g_186) , (~(safe_div_func_int64_t_s_s(((safe_add_func_uint16_t_u_u(0UL, (-1L))) && (((*l_321) & (((*g_186) >= (safe_add_func_uint16_t_u_u(((p_35 , (void*)0) != g_505), l_497[0][0][1]))) || l_509)) | 0x77L)), p_35)))))) <= p_36);
                    l_323[0] = &g_329;
                    return l_510;
                }
                else
                { 
                    int32_t **l_513 = &l_319;
                    (*l_319) |= (safe_mul_func_int8_t_s_s(l_294.f2, (l_327[3][4] , (&g_186 == &g_186))));
                    (*g_268) |= 0xDE83774FL;
                    (*l_451) = (*g_506);
                    (*l_513) = p_37;
                }
                for (g_329 = (-17); (g_329 < 22); g_329++)
                { 
                    uint16_t l_534 = 0xC67AL;
                    (*l_322) = (safe_div_func_uint64_t_u_u((safe_div_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((safe_unary_minus_func_uint8_t_u((safe_rshift_func_uint16_t_u_s((((*p_37) = ((*l_493) , (p_36 || (1L <= (++(*g_68)))))) != (*g_49)), 15)))), (l_527 == &g_97[5][0]))), (safe_add_func_uint8_t_u_u((safe_div_func_int8_t_s_s(((safe_div_func_uint32_t_u_u((l_534 == g_27[0].f6), 1L)) & p_36), p_35)), p_36)))), 0x8D99A13CDD8DD236LL));
                    return l_356;
                }
                for (l_466 = 0; (l_466 >= 1); l_466++)
                { 
                    int32_t *l_537 = &l_421;
                    l_537 = &l_320[0];
                }
            }
            else
            { 
                uint64_t l_544 = 0xC6D8AA2BEF531857LL;
                (*l_319) |= (*p_37);
                (*l_354) = l_538[3];
                for (l_337.f0 = 0; (l_337.f0 == 38); ++l_337.f0)
                { 
                    struct S1 **l_541[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_541[i] = &g_102[2][4][1];
                    l_542 = &l_429;
                }
                if (l_324)
                    goto lbl_543;
                --l_544;
            }
            (*l_549) = l_547[2];
        }
    }
    else
    { 
        const uint64_t l_566[2][7][7] = {{{0x554FD4947CE3DAF9LL,18446744073709551615UL,1UL,1UL,18446744073709551615UL,0x554FD4947CE3DAF9LL,1UL},{0x3A2A8B329836500BLL,1UL,18446744073709551615UL,18446744073709551615UL,0x85AC3EFE719F67FBLL,18446744073709551615UL,0UL},{3UL,0xD55EDA3CF38AF548LL,0xC20C8677582B9D65LL,1UL,0x3A2A8B329836500BLL,0xE142AC313E8B507CLL,1UL},{18446744073709551610UL,1UL,0UL,0x50B9992710E804B1LL,1UL,1UL,18446744073709551615UL},{1UL,18446744073709551615UL,0x3A2A8B329836500BLL,18446744073709551615UL,0x1C083A121046994ALL,18446744073709551615UL,0x1F1B8AAB57AD4680LL},{0xD5FE87C122F0C061LL,18446744073709551615UL,18446744073709551610UL,0x094427D57D716232LL,0x1C083A121046994ALL,18446744073709551615UL,18446744073709551615UL},{1UL,0UL,0x094427D57D716232LL,0UL,1UL,3UL,0xC2F25FC601EAB6F3LL}},{{1UL,0x1C083A121046994ALL,0xF78092B907D71E67LL,6UL,0x3A2A8B329836500BLL,1UL,0xC5A0F89E9E98AA75LL},{1UL,0x37E9F206D8EBC6DFLL,0x99634F65733EB8F7LL,0UL,0x85AC3EFE719F67FBLL,0x50B9992710E804B1LL,0xF78092B907D71E67LL},{1UL,6UL,0UL,1UL,18446744073709551615UL,0x3A2A8B329836500BLL,18446744073709551615UL},{1UL,1UL,18446744073709551615UL,0x85AC3EFE719F67FBLL,0x61F89F00264FF5EBLL,0x9BDE7EF8DF2C5EFFLL,0x3A2A8B329836500BLL},{0xD5FE87C122F0C061LL,18446744073709551615UL,0xA5AA9901AA018A7BLL,0x85AC3EFE719F67FBLL,0x094427D57D716232LL,0x37E9F206D8EBC6DFLL,0x094427D57D716232LL},{1UL,3UL,3UL,1UL,18446744073709551615UL,0x1F1B8AAB57AD4680LL,1UL},{18446744073709551610UL,1UL,18446744073709551615UL,0UL,0xE142AC313E8B507CLL,6UL,0xAF048799DB570239LL}}};
        int16_t **l_568 = (void*)0;
        int16_t ***l_567[5][1][7] = {{{&l_568,&l_568,(void*)0,&l_568,&l_568,(void*)0,&l_568}},{{&l_568,&l_568,(void*)0,&l_568,&l_568,(void*)0,&l_568}},{{&l_568,&l_568,(void*)0,&l_568,&l_568,(void*)0,&l_568}},{{&l_568,&l_568,(void*)0,&l_568,&l_568,(void*)0,&l_568}},{{&l_568,&l_568,(void*)0,&l_568,&l_568,(void*)0,&l_568}}};
        struct S0 *l_580[2][3] = {{&g_139.f3,&g_139.f3,&g_139.f3},{&g_139.f3,&g_139.f3,&g_139.f3}};
        int32_t l_607[7][1][3];
        uint32_t l_615 = 6UL;
        struct S2 *l_621 = &g_27[3];
        int32_t l_628 = 7L;
        int i, j, k;
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 3; k++)
                    l_607[i][j][k] = 0L;
            }
        }
        for (g_103.f2 = 2; (g_103.f2 == 54); g_103.f2 = safe_add_func_uint16_t_u_u(g_103.f2, 5))
        { 
            union U3 l_562 = {0x58L};
            struct S2 *l_570 = &g_27[0];
            union U3 *l_588 = &g_589;
            for (l_466 = 16; (l_466 >= (-23)); --l_466)
            { 
                int8_t l_592 = 0xB0L;
                for (l_295.f1 = 12; (l_295.f1 < (-12)); l_295.f1--)
                { 
                    int32_t **l_557[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_557[i] = &g_268;
                    p_37 = &g_329;
                    l_563 |= ((*g_186) <= (0xF79390E1L <= (((**g_288) , 0xDFCA1418L) == (p_35 == (safe_mul_func_int8_t_s_s(((*p_37) & (safe_add_func_int32_t_s_s((l_562 , l_327[0][0]), 0x0D80BF19L))), g_27[0].f3.f1))))));
                }
                for (l_563 = 0; (l_563 != 39); l_563 = safe_add_func_uint16_t_u_u(l_563, 3))
                { 
                    int16_t ****l_569 = &l_567[0][0][6];
                    if (l_566[1][1][5])
                        break;
                    (*l_569) = l_567[0][0][6];
                    return l_570;
                }
                (*g_122) = (*g_122);
                for (l_295.f2 = 23; (l_295.f2 != 56); ++l_295.f2)
                { 
                    struct S0 *l_573 = &g_574;
                    int32_t l_586[5] = {0L,0L,0L,0L,0L};
                    uint64_t *l_587 = &g_375;
                    int8_t *l_597 = &g_19;
                    int i;
                    l_573 = (*g_122);
                    l_588 = ((((*l_317)--) || ((((g_314[0][1][5] & ((*l_587) &= (safe_unary_minus_func_uint64_t_u(((*g_186) |= (safe_add_func_uint32_t_u_u(l_566[1][5][0], ((*p_37) = (((l_580[0][1] == l_580[0][1]) >= (safe_lshift_func_uint8_t_u_s((!l_562.f0), (safe_add_func_uint16_t_u_u(((p_35 , ((0x4C2F5547L == p_35) <= l_586[1])) == (*p_37)), g_139.f0))))) > g_293))))))))) > l_324) || l_355) == 0x5EB6B4B1917BDC2ALL)) , (void*)0);
                    (*p_37) = (((((safe_div_func_int8_t_s_s((l_592 <= (((-1L) || (((0x9CL | (p_35 || 4UL)) == (((*l_597) = (safe_mod_func_int32_t_s_s(((*g_123) , (safe_div_func_uint32_t_u_u(l_566[1][1][5], l_294.f2))), l_562.f0))) > l_420)) | (*g_186))) , p_35)), 0x6CL)) & p_36) , 0x58287F48L) ^ p_36) | 1UL);
                }
                (*p_37) = (safe_add_func_uint16_t_u_u(p_35, ((**g_122) , l_566[1][1][4])));
            }
        }
        for (l_295.f1 = 0; (l_295.f1 <= 0); l_295.f1 += 1)
        { 
            int16_t l_603 = 1L;
            int32_t l_604 = 0x11C8984EL;
            int32_t l_605 = 0x4C5D0B16L;
            int32_t l_606 = 0x0A282B2FL;
            int32_t l_608 = (-4L);
            int32_t l_609 = 0xBC854430L;
            int32_t l_612 = 1L;
            int32_t l_613 = 0L;
            for (g_375 = 0; (g_375 <= 0); g_375 += 1)
            { 
                int32_t *l_600 = &l_295.f4;
                int32_t *l_601 = &l_327[2][3];
                int32_t *l_602[1][7];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 7; j++)
                        l_602[i][j] = &l_295.f4;
                }
                (*p_37) = g_465[g_375][(l_295.f1 + 1)];
                (*g_268) = (0xE273L == (p_36 <= 0UL));
                (*g_268) = (p_36 >= 0x1ADB1D3F37E45825LL);
                l_615--;
                for (g_574.f0 = 0; (g_574.f0 <= 0); g_574.f0 += 1)
                { 
                    uint16_t l_618[7][4][7] = {{{0x9190L,0x9C69L,0UL,0UL,65526UL,65527UL,0x0FC2L},{65535UL,0x8C06L,65534UL,2UL,0UL,0xB645L,0UL},{0x9190L,65527UL,65527UL,0x9190L,0UL,0x0FC2L,0x9C69L},{0UL,9UL,65535UL,0xB645L,1UL,0xD174L,0UL}},{{0x9C69L,1UL,0x0FC2L,0UL,0x0FC2L,1UL,0x9C69L},{0x63EBL,0UL,0UL,0x09EFL,0UL,0xE30EL,0UL},{0x62C9L,0x090CL,65535UL,0x0FC2L,0x160BL,0x160BL,0x0FC2L},{0UL,0x94EDL,0UL,0x348FL,0UL,65535UL,2UL}},{{1UL,9UL,0x0FC2L,0x090CL,65527UL,0x0A18L,0x62C9L},{0x2BC2L,1UL,65535UL,0x698CL,0x63EBL,65535UL,0UL},{65526UL,0x0FC2L,65527UL,0x9022L,65535UL,0x160BL,0UL},{7UL,65535UL,65534UL,0xE30EL,0UL,0xE30EL,65534UL}},{{0x0FC2L,0x0FC2L,0x0A18L,65527UL,0x9022L,1UL,0xBE56L},{0UL,1UL,0UL,6UL,65534UL,0xD174L,0UL},{0x9022L,9UL,0x9C69L,9UL,0x9022L,0x0FC2L,0x9190L},{1UL,0x94EDL,7UL,0UL,0UL,0xB645L,0x2BC2L}},{{0UL,0x090CL,65527UL,65535UL,65535UL,65527UL,0x090CL},{1UL,0UL,65535UL,0xE054L,0x63EBL,0x348FL,0UL},{0x9022L,1UL,0xBE56L,0x9C69L,65527UL,65535UL,65527UL},{0UL,9UL,0UL,0xE054L,0UL,6UL,7UL}},{{0x0FC2L,65527UL,0x9022L,65535UL,0x160BL,0UL,9UL},{7UL,0x8C06L,0UL,0UL,0UL,0x8C06L,7UL},{65526UL,0UL,1UL,9UL,0x0FC2L,0x090CL,65527UL},{0x2BC2L,0xE30EL,0xCDF4L,6UL,1UL,65530UL,0UL}},{{1UL,0x0A18L,1UL,65527UL,0UL,0x62C9L,0x090CL},{0UL,0x09EFL,0UL,0xE30EL,0UL,0x94EDL,0x2BC2L},{0x62C9L,65526UL,0x9022L,0x9022L,65526UL,0x62C9L,0x9190L},{0x63EBL,6UL,0UL,0x698CL,0xCDF4L,0x348FL,65535UL}}};
                    int i, j, k;
                    l_618[1][0][6]++;
                    return l_621;
                }
                for (g_139.f0 = 1; (g_139.f0 >= 0); g_139.f0 -= 1)
                { 
                    int32_t **l_622[2][2];
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_622[i][j] = &l_600;
                    }
                    p_37 = (g_268 = p_37);
                    --g_625;
                    (*l_600) ^= 0L;
                }
            }
            return l_356;
        }
        (*g_268) = (-9L);
        (*g_268) &= (4L & (l_628 = (l_607[3][0][0] = (((l_295.f4 , l_328) || 0x3650L) == g_314[0][1][5]))));
    }
    return l_356;
}



static int8_t  func_39(const struct S0  p_40, int8_t * p_41, uint32_t  p_42, int8_t * p_43)
{ 
    int8_t l_45[2];
    const int32_t *l_47 = &g_3;
    const int32_t **l_48[5][7];
    int32_t l_58 = 9L;
    int8_t *l_59 = &l_45[1];
    uint32_t * const *l_70[2];
    union U3 l_80 = {252UL};
    uint32_t *l_89 = &g_63;
    struct S0 **l_124 = (void*)0;
    struct S2 *l_135 = &g_27[3];
    uint64_t * const l_187 = &g_27[0].f2;
    uint32_t l_199 = 18446744073709551615UL;
    uint32_t l_211 = 0x152677F0L;
    int16_t l_222 = (-1L);
    uint64_t l_228 = 0xA5735E2F0389D981LL;
    int32_t l_270[3];
    struct S1 *l_275 = &g_103;
    int i, j;
    for (i = 0; i < 2; i++)
        l_45[i] = 4L;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
            l_48[i][j] = &l_47;
    }
    for (i = 0; i < 2; i++)
        l_70[i] = &g_68;
    for (i = 0; i < 3; i++)
        l_270[i] = 0xF9075CF2L;
lbl_140:
    g_3 = (p_43 == p_41);
    for (g_4 = 0; (g_4 <= 1); g_4 += 1)
    { 
        int32_t *l_46 = &g_27[0].f0;
        (*l_46) = 8L;
    }
lbl_190:
    g_49 = l_47;
    if ((p_42 ^ (0xDA4F1DFBA308D5B9LL > (((*l_59) ^= ((*p_43) = (safe_lshift_func_uint16_t_u_u((safe_add_func_int64_t_s_s((((safe_lshift_func_int8_t_s_u((-1L), g_4)) | g_4) < (l_58 = (safe_mul_func_uint16_t_u_u(((p_40.f1 >= ((&g_3 != (void*)0) >= g_27[0].f1)) ^ (*g_49)), p_42)))), p_40.f1)), p_42)))) && (*p_43)))))
    { 
        uint32_t *l_62 = &g_63;
        int32_t *l_66 = &l_58;
        uint32_t * const **l_69 = &g_67;
        uint64_t *l_75 = &g_27[0].f2;
        uint64_t *l_87 = &g_88;
        const struct S0 **l_90 = (void*)0;
        const struct S0 *l_92 = &g_27[0].f3;
        const struct S0 **l_91 = &l_92;
        (*l_66) |= ((safe_add_func_int32_t_s_s((*g_49), ((*l_62)++))) < 0UL);
        l_70[1] = ((*l_69) = g_67);
        (*l_66) = (((safe_add_func_uint32_t_u_u((*g_68), (((safe_sub_func_uint64_t_u_u(((*l_75) |= g_27[0].f1), (((safe_lshift_func_uint8_t_u_u(((safe_mod_func_int64_t_s_s((0xB2L || (((*l_87) &= (((l_80 , ((safe_mul_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(((**g_67) > p_40.f1), (safe_mul_func_uint8_t_u_u(g_27[0].f0, 255UL)))), p_40.f1)) && (*p_41))) , p_42) & p_40.f1)) < 0L)), p_40.f0)) == g_27[0].f6), p_40.f0)) == (*p_41)) < 0xE1E68A7DL))) || g_4) != 65535UL))) , (*g_67)) == l_89);
        (*l_91) = &p_40;
        for (p_42 = 0; (p_42 == 29); p_42 = safe_add_func_uint8_t_u_u(p_42, 7))
        { 
            return (*p_41);
        }
    }
    else
    { 
        uint8_t l_100[4][4][3] = {{{251UL,247UL,251UL},{251UL,0x94L,0xD7L},{247UL,4UL,1UL},{0xABL,0xD7L,1UL}},{{247UL,254UL,1UL},{251UL,251UL,251UL},{251UL,1UL,251UL},{6UL,0xABL,1UL}},{{0xC3L,6UL,1UL},{6UL,0UL,1UL},{0x78L,6UL,0xD7L},{4UL,0xABL,251UL}},{{1UL,1UL,6UL},{1UL,251UL,0x78L},{4UL,254UL,0xDCL},{0x78L,0xD7L,4UL}}};
        struct S2 *l_138 = &g_139;
        const int32_t l_175 = (-1L);
        int32_t l_176 = 0x20809C30L;
        uint64_t *l_184 = &g_88;
        uint32_t ****l_221 = &g_97[6][0];
        struct S1 *l_237 = &g_103;
        struct S0 l_255 = {0xDBL,0xDABB3FECL};
        int32_t *l_260 = &g_103.f4;
        int i, j, k;
        if ((*g_49))
        { 
            uint32_t ****l_99 = &g_97[0][0];
            int32_t *l_101 = &l_58;
            (*l_101) &= (((*p_41) ^= ((((safe_mod_func_int64_t_s_s(0xC63812DD28D514EFLL, p_42)) && (g_27[0] , 0x42722C044B22B5D7LL)) != (((*l_99) = g_97[0][0]) == (void*)0)) == l_100[1][3][1])) && (*p_43));
        }
        else
        { 
            int16_t l_144 = 0x4BCAL;
            uint32_t *l_145 = &g_63;
            int32_t l_148 = 0L;
            uint32_t l_166 = 0x93F5E3F8L;
            if ((*g_49))
            { 
                struct S1 **l_104 = &g_102[1][5][0];
                struct S1 l_109[6][7][1] = {{{{-9L,5L,1UL,0x406517A65E2B664DLL,3L}},{{0x9EDEL,0x37L,0x8BL,18446744073709551609UL,0xB384EBA5L}},{{-2L,-1L,1UL,0x557B45382869B1D0LL,0x37064110L}},{{1L,-3L,0x18L,0xA86B27BD0F622502LL,1L}},{{0L,1L,0x83L,0x1434A8DDDF175EBDLL,0x0E56CCD6L}},{{1L,-3L,0x18L,0xA86B27BD0F622502LL,1L}},{{-2L,-1L,1UL,0x557B45382869B1D0LL,0x37064110L}}},{{{0x9EDEL,0x37L,0x8BL,18446744073709551609UL,0xB384EBA5L}},{{-9L,5L,1UL,0x406517A65E2B664DLL,3L}},{{1L,-4L,0UL,0x3C997210B645EBEALL,0x1EDCFEE1L}},{{0x842CL,1L,0x14L,0x40822F143A8C46F0LL,1L}},{{-1L,0x70L,0x05L,0x716F66F7480E9666LL,0xBE2F8146L}},{{0x4766L,-1L,0x4CL,18446744073709551615UL,0xA37561D2L}},{{0x4766L,-1L,0x4CL,18446744073709551615UL,0xA37561D2L}}},{{{-1L,0x70L,0x05L,0x716F66F7480E9666LL,0xBE2F8146L}},{{0x842CL,1L,0x14L,0x40822F143A8C46F0LL,1L}},{{1L,-4L,0UL,0x3C997210B645EBEALL,0x1EDCFEE1L}},{{-9L,5L,1UL,0x406517A65E2B664DLL,3L}},{{0x9EDEL,0x37L,0x8BL,18446744073709551609UL,0xB384EBA5L}},{{-2L,-1L,1UL,0x557B45382869B1D0LL,0x37064110L}},{{1L,-3L,0x18L,0xA86B27BD0F622502LL,1L}}},{{{0L,1L,0x83L,0x1434A8DDDF175EBDLL,0x0E56CCD6L}},{{1L,-3L,0x18L,0xA86B27BD0F622502LL,1L}},{{-2L,-1L,1UL,0x557B45382869B1D0LL,0x37064110L}},{{0x9EDEL,0x37L,0x8BL,18446744073709551609UL,0xB384EBA5L}},{{-9L,5L,1UL,0x406517A65E2B664DLL,3L}},{{1L,-4L,0UL,0x3C997210B645EBEALL,0x1EDCFEE1L}},{{0x842CL,1L,0x14L,0x40822F143A8C46F0LL,1L}}},{{{-1L,0x70L,0x05L,0x716F66F7480E9666LL,0xBE2F8146L}},{{0x4766L,-1L,0x4CL,18446744073709551615UL,0xA37561D2L}},{{0x4766L,-1L,0x4CL,18446744073709551615UL,0xA37561D2L}},{{-1L,0x70L,0x05L,0x716F66F7480E9666LL,0xBE2F8146L}},{{0x842CL,1L,0x14L,0x40822F143A8C46F0LL,1L}},{{1L,-4L,0UL,0x3C997210B645EBEALL,0x1EDCFEE1L}},{{-9L,5L,1UL,0x406517A65E2B664DLL,3L}}},{{{0x9EDEL,0x37L,0x8BL,18446744073709551609UL,0xB384EBA5L}},{{-2L,-1L,1UL,0x557B45382869B1D0LL,0x37064110L}},{{1L,-3L,0x18L,0xA86B27BD0F622502LL,1L}},{{0L,1L,0x83L,0x1434A8DDDF175EBDLL,0x0E56CCD6L}},{{1L,-3L,0x18L,0xA86B27BD0F622502LL,1L}},{{-2L,-1L,1UL,0x557B45382869B1D0LL,0x37064110L}},{{0x9EDEL,0x37L,0x8BL,18446744073709551609UL,0xB384EBA5L}}}};
                struct S2 *l_137 = &g_27[3];
                struct S2 **l_136[3];
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_136[i] = &l_137;
                (*l_104) = g_102[1][5][0];
                for (g_88 = 0; (g_88 == 27); g_88++)
                { 
                    int32_t *l_125 = &g_27[0].f0;
                    int32_t *l_126 = &l_58;
                    int32_t *l_127 = &g_103.f4;
                    int32_t *l_128 = &g_103.f4;
                    int32_t *l_129 = &l_58;
                    int32_t *l_130 = &g_3;
                    int32_t *l_131 = (void*)0;
                    uint64_t l_132 = 0x6DD1E6761AD414D1LL;
                    (*l_127) = (safe_lshift_func_int16_t_s_s((((g_27[0].f3 , l_109[1][6][0]) , p_42) & ((safe_mul_func_uint8_t_u_u((((((((*p_41) >= (((*l_126) = ((*l_125) = (safe_sub_func_int16_t_s_s(0x43D5L, (safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u(((safe_add_func_int8_t_s_s(0xC8L, ((safe_rshift_func_int8_t_s_s((g_122 == l_124), 3)) >= 4L))) > 0UL), 11)) == (*g_49)), 0xA48CL)))))) ^ 0x0C0AA4C9L)) ^ g_27[0].f6) < 0x85D9A0FDL) | 0x36L) >= 0UL) , 0xB9L), p_42)) , 249UL)), 4));
                    if ((*g_49))
                        break;
                    l_132++;
                }
                l_138 = (l_135 = l_135);
                if (g_19)
                    goto lbl_140;
            }
            else
            { 
                uint32_t l_146 = 6UL;
                int32_t *l_147 = &g_139.f0;
                int32_t *l_149 = &g_3;
                (*l_149) = (((void*)0 == &g_3) | (safe_mul_func_int16_t_s_s(((((**g_67) ^ ((*l_147) = ((((p_40 , (l_144 = ((*p_41) = (~(p_40 , 0x0CL))))) , l_145) != l_145) , l_146))) ^ l_146) >= l_148), 0xDE68L)));
            }
            for (l_144 = 1; (l_144 <= 25); ++l_144)
            { 
                const uint16_t l_164 = 65529UL;
                int32_t *l_165 = (void*)0;
                struct S0 *l_183 = (void*)0;
                int32_t l_188 = 0x8B48D21FL;
                int32_t *l_189 = &l_188;
                l_166 = (safe_add_func_int32_t_s_s(l_148, (safe_mod_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s((l_164 <= 18446744073709551615UL), 0x0FL)), 6)) && g_103.f2) > ((((void*)0 != l_145) , &l_145) == (void*)0)), g_139.f4)) & p_40.f0), 6)), g_27[0].f4))));
                l_176 |= (((safe_add_func_uint16_t_u_u((((((safe_sub_func_uint32_t_u_u(((*g_68) = p_40.f1), (l_100[1][3][1] , p_40.f0))) & (p_42 & (l_166 != (safe_add_func_uint8_t_u_u(l_100[2][2][2], ((safe_add_func_int64_t_s_s((g_27[0].f3.f1 != g_27[0].f6), 2L)) , g_139.f3.f0)))))) >= p_40.f1) | l_175) | 0UL), g_19)) & 0x8E3F2653L) == g_27[0].f0);
                for (g_139.f3.f0 = 0; (g_139.f3.f0 == 55); g_139.f3.f0 = safe_add_func_uint16_t_u_u(g_139.f3.f0, 5))
                { 
                    if (p_42)
                        break;
                }
                for (g_3 = (-4); (g_3 == 17); g_3++)
                { 
                    uint64_t **l_185[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_185[i] = (void*)0;
                    l_188 = (safe_lshift_func_int8_t_s_s(((l_183 == ((*g_122) = (*g_122))) < ((g_186 = l_184) != l_187)), 7));
                }
                (*l_189) = 0x4A4FE813L;
            }
            if (g_139.f3.f0)
                goto lbl_190;
        }
        if (p_40.f0)
        { 
            struct S2 l_191 = {7L,0UL,18446744073709551615UL,{2UL,0x905D2FD9L},4UL,444,0x22BFL};
            const int32_t **l_198 = &g_49;
            int32_t l_208 = 0xB989850AL;
            int32_t l_210 = 0x62B7744FL;
            uint32_t l_218 = 0UL;
            const struct S1 *l_235 = &g_103;
            int32_t *l_248 = (void*)0;
            int32_t **l_247 = &l_248;
            int32_t *l_250[5][5][6] = {{{&l_58,&g_3,&l_208,&l_208,(void*)0,(void*)0},{&l_208,&l_191.f0,&l_208,&l_208,&l_191.f0,&l_208},{&l_58,&l_210,&l_191.f0,&g_3,&g_3,&g_27[0].f0},{&g_103.f4,(void*)0,&l_208,&l_176,&g_3,&g_103.f4},{&g_103.f4,&l_191.f0,&l_176,&g_3,&l_58,&g_103.f4}},{{&l_58,&g_3,&g_103.f4,&l_208,&l_210,&g_27[0].f0},{&l_208,&g_3,(void*)0,&l_208,&g_3,&g_103.f4},{&l_58,&l_58,&l_208,&g_3,&l_210,&l_58},{&g_103.f4,&l_210,&g_103.f4,&l_176,&l_208,&l_176},{&g_103.f4,&g_3,&g_103.f4,&g_3,(void*)0,&g_103.f4}},{{&l_58,&l_210,&g_3,&l_208,&l_58,&l_58},{&l_208,&l_208,&l_191.f0,&l_208,&l_208,&g_3},{&l_58,(void*)0,(void*)0,&g_3,&g_3,(void*)0},{&g_103.f4,&l_58,&g_3,&l_176,&l_191.f0,&g_103.f4},{&g_103.f4,&l_208,&g_103.f4,&g_3,&l_210,&l_176}},{{&l_58,&g_3,&l_208,&l_208,(void*)0,(void*)0},{&l_208,&l_191.f0,&l_208,(void*)0,&g_27[0].f0,(void*)0},{&g_3,&g_103.f4,&l_191.f0,&l_208,&l_208,&g_103.f4},{&g_139.f0,&g_103.f4,(void*)0,(void*)0,(void*)0,&l_208},{&g_139.f0,&g_27[0].f0,(void*)0,&l_208,&l_176,&g_139.f0}},{{&g_3,&l_208,(void*)0,(void*)0,&g_103.f4,&g_103.f4},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_3,&l_176,(void*)0,&l_208,&g_3,&g_3},{&g_139.f0,&g_103.f4,(void*)0,(void*)0,&l_58,(void*)0},{&g_139.f0,(void*)0,&g_139.f0,&l_208,&g_103.f4,&l_208}}};
            int32_t **l_249 = &l_250[1][0][4];
            int i, j, k;
            for (g_103.f0 = 0; (g_103.f0 <= 2); g_103.f0 += 1)
            { 
                int8_t l_196[3];
                const int32_t **l_197 = (void*)0;
                int32_t l_204 = 0xDC95DA57L;
                int32_t l_205 = 8L;
                int32_t l_206 = 0x4C8A0437L;
                int32_t l_207 = 0L;
                int32_t l_209 = 0x56F5496FL;
                uint64_t *l_246 = &l_191.f1;
                int i;
                for (i = 0; i < 3; i++)
                    l_196[i] = 0x5FL;
            }
            (*l_198) = ((*l_249) = ((*l_247) = &g_3));
            (*l_237) = (*l_235);
            if (g_63)
                goto lbl_261;
lbl_261:
            l_260 = ((((safe_div_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u((l_255 , (((p_42 && g_139.f3.f1) >= (safe_mod_func_int16_t_s_s((0x4EL || ((*g_49) < (g_27[0].f3.f0 , (&p_40 == (void*)0)))), 1UL))) , 0xD4L)), 4)), (-3L))) || (-8L)) != 7UL) , (void*)0);
            for (g_3 = 0; (g_3 >= (-2)); g_3 = safe_sub_func_uint16_t_u_u(g_3, 5))
            { 
                uint64_t l_271 = 2UL;
                struct S1 l_274[5][1][6] = {{{{0x5108L,0x9EL,0xDAL,0xBEE2F2DD593AB50BLL,0x8D6676D7L},{0x5108L,0x9EL,0xDAL,0xBEE2F2DD593AB50BLL,0x8D6676D7L},{0x5108L,0x9EL,0xDAL,0xBEE2F2DD593AB50BLL,0x8D6676D7L},{0x5108L,0x9EL,0xDAL,0xBEE2F2DD593AB50BLL,0x8D6676D7L},{0x5108L,0x9EL,0xDAL,0xBEE2F2DD593AB50BLL,0x8D6676D7L},{0x5108L,0x9EL,0xDAL,0xBEE2F2DD593AB50BLL,0x8D6676D7L}}},{{{0x5108L,0x9EL,0xDAL,0xBEE2F2DD593AB50BLL,0x8D6676D7L},{0x5108L,0x9EL,0xDAL,0xBEE2F2DD593AB50BLL,0x8D6676D7L},{0x5108L,0x9EL,0xDAL,0xBEE2F2DD593AB50BLL,0x8D6676D7L},{0x5108L,0x9EL,0xDAL,0xBEE2F2DD593AB50BLL,0x8D6676D7L},{0x5108L,0x9EL,0xDAL,0xBEE2F2DD593AB50BLL,0x8D6676D7L},{0x5108L,0x9EL,0xDAL,0xBEE2F2DD593AB50BLL,0x8D6676D7L}}},{{{0x5108L,0x9EL,0xDAL,0xBEE2F2DD593AB50BLL,0x8D6676D7L},{0x5108L,0x9EL,0xDAL,0xBEE2F2DD593AB50BLL,0x8D6676D7L},{0x5108L,0x9EL,0xDAL,0xBEE2F2DD593AB50BLL,0x8D6676D7L},{0x5108L,0x9EL,0xDAL,0xBEE2F2DD593AB50BLL,0x8D6676D7L},{0x5108L,0x9EL,0xDAL,0xBEE2F2DD593AB50BLL,0x8D6676D7L},{0x5108L,0x9EL,0xDAL,0xBEE2F2DD593AB50BLL,0x8D6676D7L}}},{{{0x5108L,0x9EL,0xDAL,0xBEE2F2DD593AB50BLL,0x8D6676D7L},{0x5108L,0x9EL,0xDAL,0xBEE2F2DD593AB50BLL,0x8D6676D7L},{0x5108L,0x9EL,0xDAL,0xBEE2F2DD593AB50BLL,0x8D6676D7L},{0x5108L,0x9EL,0xDAL,0xBEE2F2DD593AB50BLL,0x8D6676D7L},{0x5108L,0x9EL,0xDAL,0xBEE2F2DD593AB50BLL,0x8D6676D7L},{0x5108L,0x9EL,0xDAL,0xBEE2F2DD593AB50BLL,0x8D6676D7L}}},{{{0x5108L,0x9EL,0xDAL,0xBEE2F2DD593AB50BLL,0x8D6676D7L},{0x5108L,0x9EL,0xDAL,0xBEE2F2DD593AB50BLL,0x8D6676D7L},{0x5108L,0x9EL,0xDAL,0xBEE2F2DD593AB50BLL,0x8D6676D7L},{0x5108L,0x9EL,0xDAL,0xBEE2F2DD593AB50BLL,0x8D6676D7L},{0x5108L,0x9EL,0xDAL,0xBEE2F2DD593AB50BLL,0x8D6676D7L},{0x5108L,0x9EL,0xDAL,0xBEE2F2DD593AB50BLL,0x8D6676D7L}}}};
                int32_t l_290 = 0xE65349B8L;
                int i, j, k;
                if ((safe_mod_func_uint16_t_u_u((**l_198), p_40.f1)))
                { 
                    const int32_t ***l_266[5][3] = {{&l_48[1][3],&l_48[1][3],&l_48[1][3]},{&l_48[2][4],&l_48[2][4],&l_48[2][4]},{&l_48[1][3],&l_48[1][3],&l_48[1][3]},{&l_48[2][4],&l_48[2][4],&l_48[2][4]},{&l_48[1][3],&l_48[1][3],&l_48[1][3]}};
                    int i, j;
                    g_267 = (void*)0;
                }
                else
                { 
                    int32_t l_269 = (-4L);
                    struct S1 **l_276 = (void*)0;
                    struct S1 **l_277[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_277[i] = &l_275;
                    l_271++;
                    (*l_237) = l_274[3][0][5];
                    g_102[2][6][1] = l_275;
                }
                l_290 |= ((g_278 , 0x76C9A656L) | ((safe_mod_func_uint64_t_u_u((safe_add_func_int32_t_s_s((g_139 , ((*g_186) != (!(l_191 , (safe_sub_func_int8_t_s_s((g_27[0].f2 , ((((safe_mul_func_int8_t_s_s((((void*)0 == g_288) != 0x98L), (*p_41))) | 0xF70EDA4B804852DBLL) , l_274[3][0][5].f4) > (*g_49))), l_271)))))), (*g_268))), 0x90F8D50275CEDE9DLL)) > 0xA973819CL));
            }
        }
        else
        { 
            return (*p_41);
        }
    }
    return (*p_41);
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_27[i].f0, "g_27[i].f0", print_hash_value);
        transparent_crc(g_27[i].f1, "g_27[i].f1", print_hash_value);
        transparent_crc(g_27[i].f2, "g_27[i].f2", print_hash_value);
        transparent_crc(g_27[i].f3.f0, "g_27[i].f3.f0", print_hash_value);
        transparent_crc(g_27[i].f3.f1, "g_27[i].f3.f1", print_hash_value);
        transparent_crc(g_27[i].f4, "g_27[i].f4", print_hash_value);
        transparent_crc(g_27[i].f5, "g_27[i].f5", print_hash_value);
        transparent_crc(g_27[i].f6, "g_27[i].f6", print_hash_value);

    }
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_103.f0, "g_103.f0", print_hash_value);
    transparent_crc(g_103.f1, "g_103.f1", print_hash_value);
    transparent_crc(g_103.f2, "g_103.f2", print_hash_value);
    transparent_crc(g_103.f3, "g_103.f3", print_hash_value);
    transparent_crc(g_103.f4, "g_103.f4", print_hash_value);
    transparent_crc(g_139.f0, "g_139.f0", print_hash_value);
    transparent_crc(g_139.f1, "g_139.f1", print_hash_value);
    transparent_crc(g_139.f2, "g_139.f2", print_hash_value);
    transparent_crc(g_139.f3.f0, "g_139.f3.f0", print_hash_value);
    transparent_crc(g_139.f3.f1, "g_139.f3.f1", print_hash_value);
    transparent_crc(g_139.f4, "g_139.f4", print_hash_value);
    transparent_crc(g_139.f5, "g_139.f5", print_hash_value);
    transparent_crc(g_139.f6, "g_139.f6", print_hash_value);
    transparent_crc(g_278.f0, "g_278.f0", print_hash_value);
    transparent_crc(g_293, "g_293", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_314[i][j][k], "g_314[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_318, "g_318", print_hash_value);
    transparent_crc(g_329, "g_329", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_330[i][j][k], "g_330[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_375, "g_375", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_381[i], "g_381[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_465[i][j], "g_465[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_574.f0, "g_574.f0", print_hash_value);
    transparent_crc(g_574.f1, "g_574.f1", print_hash_value);
    transparent_crc(g_589.f0, "g_589.f0", print_hash_value);
    transparent_crc(g_610, "g_610", print_hash_value);
    transparent_crc(g_611, "g_611", print_hash_value);
    transparent_crc(g_614, "g_614", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_623[i], "g_623[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_624[i][j], "g_624[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_625, "g_625", print_hash_value);
    transparent_crc(g_633, "g_633", print_hash_value);
    transparent_crc(g_725, "g_725", print_hash_value);
    transparent_crc(g_726, "g_726", print_hash_value);
    transparent_crc(g_727, "g_727", print_hash_value);
    transparent_crc(g_747, "g_747", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_750[i], "g_750[i]", print_hash_value);

    }
    transparent_crc(g_808, "g_808", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_1055[i][j].f0, "g_1055[i][j].f0", print_hash_value);
            transparent_crc(g_1055[i][j].f1, "g_1055[i][j].f1", print_hash_value);
            transparent_crc(g_1055[i][j].f2, "g_1055[i][j].f2", print_hash_value);
            transparent_crc(g_1055[i][j].f3.f0, "g_1055[i][j].f3.f0", print_hash_value);
            transparent_crc(g_1055[i][j].f3.f1, "g_1055[i][j].f3.f1", print_hash_value);
            transparent_crc(g_1055[i][j].f4, "g_1055[i][j].f4", print_hash_value);
            transparent_crc(g_1055[i][j].f5, "g_1055[i][j].f5", print_hash_value);
            transparent_crc(g_1055[i][j].f6, "g_1055[i][j].f6", print_hash_value);

        }
    }
    transparent_crc(g_1115, "g_1115", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1151[i], "g_1151[i]", print_hash_value);

    }
    transparent_crc(g_1399, "g_1399", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1442[i].f0, "g_1442[i].f0", print_hash_value);
        transparent_crc(g_1442[i].f1, "g_1442[i].f1", print_hash_value);
        transparent_crc(g_1442[i].f2, "g_1442[i].f2", print_hash_value);
        transparent_crc(g_1442[i].f3.f0, "g_1442[i].f3.f0", print_hash_value);
        transparent_crc(g_1442[i].f3.f1, "g_1442[i].f3.f1", print_hash_value);
        transparent_crc(g_1442[i].f4, "g_1442[i].f4", print_hash_value);
        transparent_crc(g_1442[i].f5, "g_1442[i].f5", print_hash_value);
        transparent_crc(g_1442[i].f6, "g_1442[i].f6", print_hash_value);

    }
    transparent_crc(g_1445.f0, "g_1445.f0", print_hash_value);
    transparent_crc(g_1445.f1, "g_1445.f1", print_hash_value);
    transparent_crc(g_1445.f2, "g_1445.f2", print_hash_value);
    transparent_crc(g_1445.f3.f0, "g_1445.f3.f0", print_hash_value);
    transparent_crc(g_1445.f3.f1, "g_1445.f3.f1", print_hash_value);
    transparent_crc(g_1445.f4, "g_1445.f4", print_hash_value);
    transparent_crc(g_1445.f5, "g_1445.f5", print_hash_value);
    transparent_crc(g_1445.f6, "g_1445.f6", print_hash_value);
    transparent_crc(g_1498, "g_1498", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_1664[i][j][k], "g_1664[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_1751[i][j], "g_1751[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1917, "g_1917", print_hash_value);
    transparent_crc(g_1933, "g_1933", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_2043[i].f0, "g_2043[i].f0", print_hash_value);
        transparent_crc(g_2043[i].f1, "g_2043[i].f1", print_hash_value);
        transparent_crc(g_2043[i].f2, "g_2043[i].f2", print_hash_value);
        transparent_crc(g_2043[i].f3.f0, "g_2043[i].f3.f0", print_hash_value);
        transparent_crc(g_2043[i].f3.f1, "g_2043[i].f3.f1", print_hash_value);
        transparent_crc(g_2043[i].f4, "g_2043[i].f4", print_hash_value);
        transparent_crc(g_2043[i].f5, "g_2043[i].f5", print_hash_value);
        transparent_crc(g_2043[i].f6, "g_2043[i].f6", print_hash_value);

    }
    transparent_crc(g_2056, "g_2056", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
