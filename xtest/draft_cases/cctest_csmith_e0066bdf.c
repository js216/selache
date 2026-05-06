// SPDX-License-Identifier: MIT
// cctest_csmith_e0066bdf.c --- cctest case csmith_e0066bdf (csmith seed 3758517215)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xbecf60a8 */

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

// Options:   -s 3758517215 -o /tmp/csmith_gen_k68swtz_/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
};
#pragma pack(pop)

union U1 {
   signed f0 : 21;
   signed f1 : 3;
};


static uint16_t g_11 = 65535UL;
static union U1 g_23 = {0xF42C60EDL};
static struct S0 g_24 = {0x65F4E26CL};
static struct S0 g_63 = {18446744073709551615UL};
static int8_t g_71 = 0x8BL;
static int64_t g_72 = 0x819277EF9B05D12CLL;
static int16_t g_87 = 0x4274L;
static uint32_t g_116 = 0x9B249F0FL;
static uint32_t g_150 = 0UL;
static int64_t g_156 = 1L;
static uint32_t g_158 = 0x76364005L;
static int64_t g_179 = 0x1583130A6548F5A9LL;
static uint8_t g_216 = 7UL;
static int8_t g_233 = (-9L);
static int64_t g_234 = 0x95DE3CFF6BEFEFA7LL;
static uint32_t g_235 = 0x0AEB5C81L;
static uint8_t g_246 = 246UL;
static uint32_t g_250 = 0x4EB40037L;
static uint32_t g_307 = 0x960768D2L;



static int64_t  func_1(void);
static int32_t  func_2(int32_t  p_3);
static int16_t  func_12(int64_t  p_13, const int32_t  p_14, int32_t  p_15, struct S0  p_16);
static uint8_t  func_19(int16_t  p_20, union U1  p_21, struct S0  p_22);




static int64_t  func_1(void)
{ 
    uint16_t l_10 = 8UL;
    int32_t l_247 = 1L;
    int16_t l_249 = 0L;
    struct S0 l_258 = {0UL};
    int32_t l_267 = 0xC9BFAB43L;
    uint32_t l_272 = 18446744073709551606UL;
    if (func_2((g_72 = (safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_u((g_71 = (safe_mod_func_uint16_t_u_u((((l_10 , g_11) && func_12((((safe_mod_func_uint8_t_u_u((l_10 , func_19(g_11, g_23, g_24)), g_11)) , l_10) > 0L), g_23.f0, l_10, g_63)) ^ g_63.f0), g_63.f0))), 13)), g_63.f0)))))
    { 
        return g_11;
    }
    else
    { 
        int8_t l_248 = 1L;
        int64_t l_270 = 0xE0DADD7E3C66B9BCLL;
        uint64_t l_271 = 0x7EB90BE43CD95909LL;
        int32_t l_275[1];
        int i;
        for (i = 0; i < 1; i++)
            l_275[i] = 3L;
        g_246 = (g_23.f1 = (safe_unary_minus_func_int8_t_s(0L)));
        if (l_10)
        { 
            uint8_t l_255[5] = {0x61L,0x61L,0x61L,0x61L,0x61L};
            struct S0 l_287 = {0xAD904D1DL};
            int i;
            if (((g_11 = ((g_250--) , (l_248 >= (g_11 != 0xDD19L)))) & (safe_mul_func_int8_t_s_s(l_247, 255UL))))
            { 
                ++l_255[1];
                g_24 = g_63;
                l_258 = (g_63 = g_24);
            }
            else
            { 
                uint16_t l_265 = 0UL;
                l_267 &= (safe_add_func_int64_t_s_s((safe_lshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_u((l_265 , ((~0x8D6969EBL) ^ l_10)), 4)), (((((g_11 ^= l_247) | l_265) >= 1L) && l_265) & g_233))), l_248));
                g_24 = ((((((safe_sub_func_int8_t_s_s((g_216 | (l_270 >= (g_11 , g_216))), 0xEDL)) & g_23.f1) ^ l_247) != l_271) | l_10) , g_63);
                l_272 = g_156;
            }
            l_247 = ((0x17E8D0573393BE6BLL != g_234) || g_24.f0);
            for (g_246 = 15; (g_246 > 51); g_246 = safe_add_func_uint16_t_u_u(g_246, 9))
            { 
                const int32_t l_286 = 0L;
                l_275[0] = g_87;
                if (l_275[0])
                    break;
                l_287 = (((1L & g_246) == (safe_lshift_func_uint16_t_u_u((((((safe_sub_func_int16_t_s_s(((g_250 = (safe_lshift_func_int16_t_s_u((0xCF0FDF59L >= ((safe_add_func_int8_t_s_s(((((safe_lshift_func_uint16_t_u_u((g_23 , 65534UL), 0)) != l_255[2]) >= 1L) && g_233), g_233)) & l_286)), 11))) == g_71), 65535UL)) || g_116) <= l_270) , g_216) , l_247), 13))) , g_24);
            }
        }
        else
        { 
            struct S0 l_290 = {0x9FF9892BL};
            for (l_271 = (-13); (l_271 > 55); l_271 = safe_add_func_uint8_t_u_u(l_271, 3))
            { 
                l_275[0] = (g_23.f1 = ((l_290 , (-5L)) | ((safe_lshift_func_int16_t_s_u((l_258.f0 <= (((safe_mul_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(0x71DFFF88L, g_23.f1)), 0xEBL)) && 0xFE1DL) , l_258.f0)), g_216)) , 0x4DE35C321AE1D1D0LL)));
            }
            g_23.f0 = (safe_rshift_func_uint16_t_u_u(((((safe_lshift_func_int8_t_s_u(((l_290 , ((safe_add_func_uint16_t_u_u(0x7872L, (((((safe_mul_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u(l_290.f0, 4)) > ((l_258 , 0xAE938D7FD9BC95F9LL) && 0L)), 0x044DL)) | l_267) , g_233) <= l_249) , g_24.f0))) , l_271)) > l_258.f0), g_72)) >= 1UL) && l_290.f0) == g_87), g_116));
        }
        --g_307;
    }
    return l_249;
}



static int32_t  func_2(int32_t  p_3)
{ 
    uint64_t l_73[5] = {0x8BB411E181F3B01ALL,0x8BB411E181F3B01ALL,0x8BB411E181F3B01ALL,0x8BB411E181F3B01ALL,0x8BB411E181F3B01ALL};
    int32_t l_86 = 0x19AEFA9AL;
    const uint8_t l_88[2] = {0x8EL,0x8EL};
    uint32_t l_118 = 0x6106D1D5L;
    int64_t l_157 = 0x37D81659199FBBD7LL;
    int8_t l_188 = (-3L);
    struct S0 l_194[1] = {{18446744073709551606UL}};
    int8_t l_232 = 0L;
    int i;
    if ((l_73[0] || ((p_3 , (safe_sub_func_int8_t_s_s(((g_24.f0 && ((((safe_add_func_uint32_t_u_u((g_87 &= (safe_sub_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_u((((((~((((safe_div_func_uint8_t_u_u(((safe_unary_minus_func_uint8_t_u((l_86 ^= g_24.f0))) , p_3), 251UL)) != 0x5565L) ^ g_72) > p_3)) , l_73[0]) < p_3) && 1UL) != g_72), 7)) || p_3), 9L))), l_88[1])) && g_72) ^ l_88[1]) , p_3)) && 0xBC85F6474A040150LL), 0x6CL))) & l_73[2])))
    { 
        union U1 l_89 = {-10L};
        l_86 &= ((l_89 , ((safe_rshift_func_int16_t_s_u((l_89.f0 != 0xE860L), (safe_add_func_int8_t_s_s((safe_mul_func_int8_t_s_s(0xDEL, g_63.f0)), (-1L))))) , p_3)) , 1L);
        for (g_87 = 0; (g_87 <= 4); g_87 += 1)
        { 
            int i;
            l_86 = (g_23.f1 = l_73[g_87]);
        }
        for (g_63.f0 = (-30); (g_63.f0 <= 21); g_63.f0 = safe_add_func_uint32_t_u_u(g_63.f0, 1))
        { 
            uint64_t l_117 = 18446744073709551615UL;
            uint64_t l_139 = 0x9D15E5DEB8F547C4LL;
            if ((g_63.f0 , (safe_mod_func_uint32_t_u_u((((safe_mod_func_uint8_t_u_u(p_3, (((safe_rshift_func_int16_t_s_u((((safe_sub_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((l_89.f1 = (safe_sub_func_uint64_t_u_u((safe_sub_func_uint64_t_u_u((safe_sub_func_uint64_t_u_u(p_3, (g_116 ^= (safe_sub_func_int16_t_s_s((g_24 , p_3), l_88[1]))))), l_117)), (-6L)))), g_24.f0)), (-8L))) , l_89.f1) >= g_24.f0), 9)) , l_73[3]) & l_73[0]))) != p_3) ^ 1L), p_3))))
            { 
                return l_118;
            }
            else
            { 
                uint64_t l_125 = 0x7719BA6681F6C300LL;
                g_23.f0 = (((safe_lshift_func_uint16_t_u_u(p_3, 4)) == (g_87 ^ (safe_mul_func_int8_t_s_s(g_87, (safe_rshift_func_int16_t_s_u(2L, g_87)))))) || l_125);
                l_89.f0 = (((-1L) ^ (safe_unary_minus_func_uint32_t_u(((((((safe_add_func_uint8_t_u_u((((+(l_125 && ((8L <= (safe_div_func_int64_t_s_s((safe_div_func_uint16_t_u_u((((safe_mod_func_int32_t_s_s((65531UL != g_71), l_89.f1)) ^ g_11) > p_3), p_3)), l_125))) , 9L))) | l_125) >= g_87), p_3)) == l_86) >= 1UL) ^ 0xA8E33F41L) <= 0xBB3BL) & 0xB4C7169202534006LL)))) || 0xAC7FE344F0331C24LL);
            }
            l_86 = ((g_24 , ((0L & (0x36L <= ((!g_71) && 0L))) > p_3)) | g_24.f0);
            if (l_139)
                break;
        }
    }
    else
    { 
        uint32_t l_140 = 0UL;
        --l_140;
    }
    for (g_11 = 8; (g_11 <= 12); ++g_11)
    { 
        int32_t l_146 = 0xAA013516L;
        int32_t l_147 = 0L;
        int32_t l_148 = 0x8E88F9A2L;
        int32_t l_149[3][2] = {{0xFE436B37L,0xFE436B37L},{0xFE436B37L,0xFE436B37L},{0xFE436B37L,0xFE436B37L}};
        union U1 l_153 = {-1L};
        uint8_t l_161[5][3] = {{0x67L,0x84L,0x67L},{0x95L,0x95L,0x95L},{0x67L,0x84L,0x67L},{0x95L,0x95L,0x95L},{0x67L,0x84L,0x67L}};
        const struct S0 l_172 = {18446744073709551615UL};
        int i, j;
        if ((g_23.f1 = ((!(g_150--)) == (l_153 , (((safe_div_func_int64_t_s_s(0xA2C9E81EBBB35188LL, (((--g_158) || (l_161[1][2] , (((safe_add_func_int32_t_s_s((((safe_mul_func_uint16_t_u_u((l_153.f1 = (safe_rshift_func_uint16_t_u_u(65530UL, l_88[0]))), l_86)) || g_116) == p_3), g_11)) != 5UL) | 4294967291UL))) || l_149[0][1]))) && 1UL) , p_3)))))
        { 
            uint16_t l_178 = 0xC325L;
            uint8_t l_189 = 0UL;
            uint32_t l_217[4] = {4294967288UL,4294967288UL,4294967288UL,4294967288UL};
            int32_t l_218 = 0x9BE15843L;
            int i;
            g_179 &= (((((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((l_172 , g_63.f0), (safe_mod_func_int64_t_s_s(((!(safe_sub_func_uint32_t_u_u(((((l_149[0][1] ^ p_3) , g_23.f1) | 0xB806L) | l_149[1][0]), l_178))) || p_3), g_116)))), 6)) == 0xA084L) | 0xFFC2L) >= l_178) , 0xEC5635C9L);
            if ((g_23.f0 = (safe_mul_func_uint8_t_u_u((((g_23 , (l_188 = (safe_sub_func_int64_t_s_s((0xEBA8194CA43DC40BLL ^ (l_86 = (safe_rshift_func_int16_t_s_u(((safe_mul_func_uint16_t_u_u(65530UL, p_3)) <= g_150), p_3)))), g_11)))) > l_189) , 0UL), g_150))))
            { 
                uint32_t l_192 = 4294967294UL;
                int32_t l_193 = (-1L);
                l_147 |= ((0xF7CCL != ((g_23.f0 <= (((safe_rshift_func_uint16_t_u_s(p_3, ((((((l_193 ^= (l_192 = l_189)) != p_3) && p_3) | 0x38L) & g_150) || l_161[1][2]))) <= g_24.f0) > 0xFBL)) == g_72)) & g_24.f0);
            }
            else
            { 
                return g_150;
            }
            l_218 &= (l_217[1] |= ((((l_194[0] , (((((g_216 = (!(safe_sub_func_uint64_t_u_u(((safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(p_3, (safe_unary_minus_func_int16_t_s((safe_unary_minus_func_uint32_t_u((((safe_div_func_int16_t_s_s((p_3 && (safe_add_func_uint8_t_u_u((l_146 &= ((safe_add_func_int64_t_s_s((safe_sub_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s((safe_mod_func_uint32_t_u_u((g_11 & 0x7AD10667L), 0x76575664L)), 2)), 0xA0AA601C580CF4D9LL)), 0x38C8DFBF4EFD3873LL)) == g_72)), 6UL))), g_63.f0)) >= l_178) | l_149[0][1]))))))), l_188)) , l_188), p_3)))) == g_72) < l_161[2][0]) <= g_63.f0) != g_24.f0)) , g_63.f0) ^ 0x5D35BDAFL) , 0xE4F92291L));
        }
        else
        { 
            for (g_150 = 0; (g_150 <= 1); g_150 += 1)
            { 
                int i, j;
                if (l_149[g_150][g_150])
                    break;
            }
        }
        for (l_118 = (-28); (l_118 != 4); l_118++)
        { 
            uint8_t l_229 = 0x8BL;
            int32_t l_231[4] = {0xFA9DA5B2L,0xFA9DA5B2L,0xFA9DA5B2L,0xFA9DA5B2L};
            struct S0 l_238 = {18446744073709551607UL};
            int32_t l_240 = 0xCC781213L;
            int i;
            if ((safe_mod_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(((((safe_mul_func_int16_t_s_s(g_158, (0x621A5245C12D51D3LL ^ (safe_mul_func_int8_t_s_s((l_229 > l_73[0]), p_3))))) & (-5L)) ^ p_3) <= 0xDF38L), 4)), l_229)))
            { 
                uint32_t l_230 = 9UL;
                l_231[2] |= (l_230 |= 0x6E6C8BF4L);
                if (p_3)
                    continue;
                ++g_235;
            }
            else
            { 
                struct S0 l_239 = {0xB08F2362L};
                l_239 = l_238;
                g_63 = l_194[0];
                return l_240;
            }
            l_231[2] ^= (safe_lshift_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u(g_150, l_157)) ^ l_232), 13));
            if (l_232)
                break;
        }
    }
    return g_116;
}



static int16_t  func_12(int64_t  p_13, const int32_t  p_14, int32_t  p_15, struct S0  p_16)
{ 
    int32_t l_66 = 0x10B1E149L;
    uint8_t l_67 = 0xA4L;
    int32_t l_70 = (-1L);
    for (g_11 = 0; (g_11 != 25); ++g_11)
    { 
        --l_67;
        l_70 = 0L;
    }
    g_23.f1 = ((l_70 = l_70) > g_24.f0);
    return g_11;
}



static uint8_t  func_19(int16_t  p_20, union U1  p_21, struct S0  p_22)
{ 
    int8_t l_25 = 1L;
    uint64_t l_26 = 0UL;
    int32_t l_31 = 0xACAE7BF1L;
    uint32_t l_42 = 4294967295UL;
    int32_t l_43[3];
    int32_t l_44[2];
    struct S0 l_45[3][5][4] = {{{{4UL},{7UL},{7UL},{4UL}},{{7UL},{4UL},{0x5C1ED529L},{4UL}},{{4UL},{0UL},{0x5C1ED529L},{0x5C1ED529L}},{{7UL},{7UL},{4UL},{0x5C1ED529L}},{{1UL},{0UL},{1UL},{4UL}}},{{{1UL},{4UL},{4UL},{1UL}},{{7UL},{4UL},{0x5C1ED529L},{4UL}},{{4UL},{0UL},{0x5C1ED529L},{0x5C1ED529L}},{{7UL},{7UL},{4UL},{0x5C1ED529L}},{{1UL},{0UL},{1UL},{4UL}}},{{{1UL},{4UL},{4UL},{1UL}},{{7UL},{4UL},{0x5C1ED529L},{4UL}},{{4UL},{0UL},{0x5C1ED529L},{0x5C1ED529L}},{{7UL},{7UL},{4UL},{0x5C1ED529L}},{{1UL},{0UL},{1UL},{4UL}}}};
    int32_t l_62 = 0x0E9AFB84L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_43[i] = 0xCBAA6F4EL;
    for (i = 0; i < 2; i++)
        l_44[i] = 0xFE1602A0L;
    l_26++;
    if (l_26)
        goto lbl_46;
lbl_46:
    g_24 = (((l_44[0] = (((+((~(l_31 = l_25)) ^ ((safe_add_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(l_26, (((l_43[2] = (l_25 < ((safe_rshift_func_int16_t_s_s(((((safe_sub_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s((g_11 >= p_20), 7)), g_24.f0)) && g_23.f0) , g_23.f0) < l_42), p_20)) != p_20))) & l_42) & p_21.f0))), l_26)) , l_25))) && p_22.f0) == 0x3376L)) & 0xE588L) , l_45[2][0][3]);
    for (l_25 = (-21); (l_25 != (-30)); --l_25)
    { 
        int64_t l_60[4][2][5] = {{{9L,0x7F34FA629A01EED7LL,0L,0x0871E8EE6221365DLL,0x13F4B1A25D0016D1LL},{0x23BFA4ACF27260E9LL,0L,0L,0x23BFA4ACF27260E9LL,0x0871E8EE6221365DLL}},{{9L,0x405EF11EAE5249F3LL,0x8FF013EC5CB58B1CLL,0L,0x0871E8EE6221365DLL},{0L,9L,0x13F4B1A25D0016D1LL,(-8L),0x13F4B1A25D0016D1LL}},{{(-8L),(-8L),0x0871E8EE6221365DLL,0L,0x8FF013EC5CB58B1CLL},{0x0702DD0685B90C32LL,0x6E9B1CC8FFCACAF8LL,0x0871E8EE6221365DLL,0x23BFA4ACF27260E9LL,0L}},{{0L,0x0871E8EE6221365DLL,0x13F4B1A25D0016D1LL,0x0871E8EE6221365DLL,0L},{0L,0x6E9B1CC8FFCACAF8LL,0x8FF013EC5CB58B1CLL,0L,(-8L)}}};
        int32_t l_61 = 0x7713999EL;
        int i, j, k;
        l_62 ^= ((safe_div_func_int64_t_s_s((l_31 = (l_61 = (safe_sub_func_int16_t_s_s((l_43[0] = ((safe_div_func_int32_t_s_s((((6L >= (safe_lshift_func_int16_t_s_u((safe_unary_minus_func_uint8_t_u((l_44[0] = 0xDFL))), 3))) == (safe_lshift_func_int16_t_s_u(p_21.f0, 3))) , 0x5AAD5032L), l_60[0][1][2])) > l_45[2][0][3].f0)), 0x64EAL)))), 2L)) >= g_11);
    }
    return p_22.f0;
}





int test_main(void)
{
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_24.f0, "g_24.f0", print_hash_value);
    transparent_crc(g_63.f0, "g_63.f0", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_150, "g_150", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_158, "g_158", print_hash_value);
    transparent_crc(g_179, "g_179", print_hash_value);
    transparent_crc(g_216, "g_216", print_hash_value);
    transparent_crc(g_233, "g_233", print_hash_value);
    transparent_crc(g_234, "g_234", print_hash_value);
    transparent_crc(g_235, "g_235", print_hash_value);
    transparent_crc(g_246, "g_246", print_hash_value);
    transparent_crc(g_250, "g_250", print_hash_value);
    transparent_crc(g_307, "g_307", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
