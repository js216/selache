// SPDX-License-Identifier: MIT
// cctest_csmith_3d3198e6.c --- cctest case csmith_3d3198e6 (csmith seed 1026660582)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x66032237 */
/* @exp_ticks 0x3706 */

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

// Options:   -s 1026660582 -o /tmp/csmith_gen_3qe0yoem/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint8_t  f0;
   const int32_t  f1;
   uint32_t  f2;
   int64_t  f3;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   int32_t  f0;
};
#pragma pack(pop)

union U2 {
   uint32_t  f0;
   uint32_t  f1;
};


static uint8_t g_10 = 0UL;
static const int32_t g_21 = 0x6FE5AB06L;
static union U2 g_22 = {0x1F050678L};
static uint64_t g_25 = 0x7BB1A88AF16DE6EALL;
static uint64_t g_44 = 0x19AC4E69A4575F7FLL;
static int32_t g_46 = (-1L);
static struct S1 g_68 = {0L};
static int32_t g_70[2][2][1] = {{{7L},{(-1L)}},{{7L},{(-1L)}}};
static struct S0 g_82[4] = {{0x95L,0x7407285EL,7UL,0xBC5B3697EF0591FCLL},{0x95L,0x7407285EL,7UL,0xBC5B3697EF0591FCLL},{0x95L,0x7407285EL,7UL,0xBC5B3697EF0591FCLL},{0x95L,0x7407285EL,7UL,0xBC5B3697EF0591FCLL}};
static int8_t g_112 = 0L;
static uint32_t g_135 = 0UL;
static uint32_t g_163 = 0xC6000C4DL;
static int32_t g_167 = 0xC9A55130L;



static uint8_t  func_1(void);
static uint16_t  func_2(uint32_t  p_3);
static uint32_t  func_4(int32_t  p_5, int8_t  p_6, int16_t  p_7, uint32_t  p_8);
static int16_t  func_11(uint32_t  p_12);




static uint8_t  func_1(void)
{ 
    uint8_t l_9 = 0xA6L;
    union U2 l_23[2] = {{4294967288UL},{4294967288UL}};
    int32_t l_24 = 9L;
    struct S0 l_79 = {0UL,0xAFAEF9ADL,0x5785F4F6L,6L};
    const uint8_t l_93 = 0x19L;
    int32_t l_94 = (-1L);
    struct S0 l_111[4][5][2] = {{{{0x54L,1L,0UL,0L},{0x10L,0L,0UL,-2L}},{{0x10L,0L,0UL,-2L},{0UL,1L,18446744073709551615UL,6L}},{{0x10L,0L,0UL,-2L},{0x10L,0L,0UL,-2L}},{{0x54L,1L,0UL,0L},{0UL,1L,18446744073709551615UL,6L}},{{0x54L,1L,0UL,0L},{0x10L,0L,0UL,-2L}}},{{{0x10L,0L,0UL,-2L},{0UL,1L,18446744073709551615UL,6L}},{{0x10L,0L,0UL,-2L},{0x10L,0L,0UL,-2L}},{{0x54L,1L,0UL,0L},{0UL,1L,18446744073709551615UL,6L}},{{0x54L,1L,0UL,0L},{0x10L,0L,0UL,-2L}},{{0x10L,0L,0UL,-2L},{0UL,1L,18446744073709551615UL,6L}}},{{{0x10L,0L,0UL,-2L},{0x10L,0L,0UL,-2L}},{{0x54L,1L,0UL,0L},{0UL,1L,18446744073709551615UL,6L}},{{0x54L,1L,0UL,0L},{0x10L,0L,0UL,-2L}},{{0x10L,0L,0UL,-2L},{0UL,1L,18446744073709551615UL,6L}},{{0x10L,0L,0UL,-2L},{0x10L,0L,0UL,-2L}}},{{{0x54L,1L,0UL,0L},{0UL,1L,18446744073709551615UL,6L}},{{0x54L,1L,0UL,0L},{0x10L,0L,0UL,-2L}},{{0x10L,0L,0UL,-2L},{0UL,1L,18446744073709551615UL,6L}},{{0x10L,0L,0UL,-2L},{0x10L,0L,0UL,-2L}},{{0x54L,1L,0UL,0L},{0UL,1L,18446744073709551615UL,6L}}}};
    int64_t l_113[4] = {(-7L),(-7L),(-7L),(-7L)};
    uint64_t l_137 = 0xB969CE4C498B4FF7LL;
    uint16_t l_181 = 0x3210L;
    int8_t l_182 = 0x3FL;
    int i, j, k;
    if (((((func_2(func_4(l_9, (((g_10 = l_9) > func_11((!((~(((safe_mod_func_int32_t_s_s((g_25 ^= ((((safe_rshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((g_21 , (l_24 &= ((((g_22 = (l_23[0] = g_22)) , 6L) && l_23[0].f0) , 0UL))) , g_22.f0), 0UL)), 6)) , 0xBBB66EFEL) , 4294967295UL) && l_9)), l_9)) , 0L) && g_25)) || l_23[0].f0)))) != 0x55E8L), g_21, l_9)) , g_25) == g_21) == l_9) == g_68.f0))
    { 
        g_46 ^= (!((safe_add_func_uint32_t_u_u((((safe_sub_func_uint8_t_u_u(1UL, l_24)) > l_9) >= (safe_add_func_uint8_t_u_u(0UL, 0x11L))), g_70[1][1][0])) != 0L));
        return l_24;
    }
    else
    { 
        g_70[1][1][0] = g_44;
    }
    l_94 = (l_79 , (safe_mul_func_int16_t_s_s((g_22 , (g_82[3] , (~(l_24 = (safe_unary_minus_func_int64_t_s((safe_mul_func_uint8_t_u_u(((safe_add_func_uint64_t_u_u((safe_mod_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(g_82[3].f0, g_22.f1)), g_82[3].f1)), 0x69E1CF7F8006A596LL)) & l_93), g_44)))))))), 0x66D8L)));
    if (((safe_mul_func_int8_t_s_s(9L, ((safe_lshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(1UL, ((((safe_div_func_int64_t_s_s((safe_add_func_int8_t_s_s((l_79.f2 <= (((safe_mod_func_uint16_t_u_u((g_112 = (safe_lshift_func_uint16_t_u_s((safe_mod_func_int8_t_s_s(((l_111[2][4][1] , g_70[0][0][0]) < g_22.f1), g_70[0][0][0])), g_68.f0))), l_93)) <= 0x23L) >= 0x40225571L)), g_68.f0)), l_111[2][4][1].f1)) > (-1L)) <= l_113[2]) | (-5L)))), 0)) == l_113[2]))) | 0xDA10L))
    { 
        uint16_t l_134 = 0x23E7L;
        int32_t l_136[4][1][3] = {{{0x32F3F1ECL,0x32F3F1ECL,0xDF10F9C0L}},{{1L,0xDF10F9C0L,0xDF10F9C0L}},{{0xDF10F9C0L,0x620DE400L,0xF56C1A71L}},{{1L,0x620DE400L,1L}}};
        int i, j, k;
        if ((((safe_mod_func_int16_t_s_s(0x4EDEL, (((safe_div_func_int64_t_s_s((safe_mul_func_uint16_t_u_u((safe_add_func_int32_t_s_s((((safe_add_func_uint8_t_u_u((g_10 = (safe_lshift_func_int8_t_s_s(l_113[2], ((~(safe_unary_minus_func_uint32_t_u((safe_rshift_func_uint8_t_u_u((l_94 ^= (safe_mul_func_int8_t_s_s((safe_div_func_int16_t_s_s(((g_112 && (l_134 <= l_134)) != l_134), l_79.f0)), g_135))), 6))))) | 0x5C45CDDFL)))), g_82[3].f3)) , l_134) & 0xB7L), l_9)), g_46)), g_21)) >= 1UL) | (-1L)))) && g_135) <= l_23[0].f1))
        { 
            l_137++;
        }
        else
        { 
            uint16_t l_147 = 0x85B2L;
            for (g_10 = (-26); (g_10 <= 48); ++g_10)
            { 
                uint64_t l_144 = 2UL;
                g_70[0][1][0] &= (safe_lshift_func_int8_t_s_u((-7L), (l_94 = ((l_144 <= ((safe_add_func_uint16_t_u_u(65535UL, 1UL)) < 0UL)) , g_46))));
                if (l_147)
                    continue;
                return l_136[2][0][2];
            }
        }
    }
    else
    { 
        int8_t l_150 = 3L;
        int32_t l_157 = (-1L);
        int32_t l_158 = (-1L);
        const int32_t l_166 = 0x7B9BCB20L;
        int32_t l_168 = 0x0149EDFFL;
        int64_t l_180 = 0xC31BE52F0D76A68ALL;
        for (g_68.f0 = (-14); (g_68.f0 >= (-27)); --g_68.f0)
        { 
            l_150 = g_82[3].f3;
            for (l_150 = 17; (l_150 >= (-29)); --l_150)
            { 
                if (g_22.f1)
                    break;
            }
        }
        l_168 = (safe_rshift_func_int16_t_s_u((l_158 = (safe_mod_func_int8_t_s_s(3L, (g_112 = (l_157 = g_68.f0))))), ((safe_sub_func_int16_t_s_s((g_167 = (safe_mul_func_uint8_t_u_u(((((((g_163 = l_150) & (safe_lshift_func_int16_t_s_s((((0xE6A1E35D45CBCC74LL <= 18446744073709551613UL) ^ g_22.f0) && l_150), l_111[2][4][1].f1))) ^ l_150) == 0L) > 0x91L) , l_166), 0UL))), l_166)) >= g_82[3].f3)));
        l_157 |= (((l_158 = (safe_rshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s(0x3BL, (safe_add_func_int8_t_s_s((((+((safe_lshift_func_int8_t_s_s((0x90L < ((l_168 = (((safe_mul_func_int16_t_s_s(0xDF5EL, l_180)) , l_158) | g_112)) == 0x3EB7L)), l_181)) & g_135)) <= 6UL) & l_111[2][4][1].f1), 0UL)))), 7))) != l_182) , l_181);
    }
    return g_21;
}



static uint16_t  func_2(uint32_t  p_3)
{ 
    for (p_3 = 0; (p_3 <= 0); p_3 += 1)
    { 
        int64_t l_71 = 0L;
        return l_71;
    }
    return p_3;
}



static uint32_t  func_4(int32_t  p_5, int8_t  p_6, int16_t  p_7, uint32_t  p_8)
{ 
    uint16_t l_66 = 1UL;
    int32_t l_67 = 8L;
    struct S1 l_69 = {0x92E0EE4DL};
    l_69 = ((safe_mul_func_int8_t_s_s(((g_44 = ((l_66 |= 0xB76E0E3FL) ^ (l_67 , (0xAF72239D1334807DLL > g_22.f0)))) || l_66), g_10)) , g_68);
    l_67 = l_69.f0;
    return g_68.f0;
}



static int16_t  func_11(uint32_t  p_12)
{ 
    int32_t l_28 = 3L;
    int32_t l_33 = 0L;
    uint64_t l_45 = 0x63D2C82F3C076A5DLL;
    int32_t l_47 = 0L;
    int32_t l_58[3][4] = {{0xA3D85AA7L,0xC7BC07E7L,0xD76C132DL,0xC7BC07E7L},{0xC7BC07E7L,(-4L),0xD76C132DL,0xD76C132DL},{0xA3D85AA7L,0xA3D85AA7L,0xC7BC07E7L,0xD76C132DL}};
    uint32_t l_59 = 0UL;
    int i, j;
    l_47 ^= ((safe_lshift_func_uint16_t_u_s(l_28, 4)) || ((safe_mod_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u((g_46 = (((l_33 = 0x6D56A426232C2A4ELL) || ((safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s(p_12, (l_33 = (safe_lshift_func_uint8_t_u_u(((((safe_add_func_int64_t_s_s((0x46DF8000L == 0x09457720L), 0L)) <= p_12) == g_44) , l_33), l_45))))), p_12)), p_12)) , l_33)) || 0x2C25470E9879A925LL)), 1L)), p_12)) | p_12));
    for (p_12 = 0; (p_12 < 5); p_12 = safe_add_func_uint64_t_u_u(p_12, 4))
    { 
        uint32_t l_50 = 0x0C09C4F4L;
        struct S1 l_53 = {1L};
        if (l_45)
            break;
        --l_50;
        l_53 = l_53;
    }
    g_46 = (safe_mod_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s((l_59--), (p_12 ^ (l_33 = 0x352AL)))) && (-9L)), ((safe_lshift_func_uint8_t_u_u(0x6CL, 4)) , p_12)));
    return p_12;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_22.f0, "g_22.f0", print_hash_value);
    transparent_crc(g_22.f1, "g_22.f1", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_44, "g_44", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_68.f0, "g_68.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_70[i][j][k], "g_70[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_82[i].f0, "g_82[i].f0", print_hash_value);
        transparent_crc(g_82[i].f1, "g_82[i].f1", print_hash_value);
        transparent_crc(g_82[i].f2, "g_82[i].f2", print_hash_value);
        transparent_crc(g_82[i].f3, "g_82[i].f3", print_hash_value);

    }
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
