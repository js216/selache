// SPDX-License-Identifier: MIT
// cctest_csmith_81b18d98.c --- cctest case csmith_81b18d98 (csmith seed 2175896984)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x91edbf92 */
/* @exp_ticks 0x1566 */

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

// Options:   -s 2175896984 -o /home/agent1/fast_data/tmp/csmith_gen_4hh9nw6v/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S1 {
   uint64_t  f0;
   const uint8_t  f1;
   int16_t  f2;
   uint8_t  f3;
   const uint16_t  f4;
   int64_t  f5;
};

struct S2 {
   uint8_t  f0;
   uint64_t  f1;
   int32_t  f2;
   uint32_t  f3;
   const struct S1  f4;
   int16_t  f5;
};

#pragma pack(push)
#pragma pack(1)
struct S3 {
   int8_t  f0;
   const int64_t  f1;
};
#pragma pack(pop)

struct S0 {
   int64_t  f0;
   const uint16_t  f1;
   uint32_t  f2;
   uint32_t  f3;
   int64_t  f4;
};

struct S4 {
   struct S0  f0;
   const int32_t  f1;
   const struct S3  f2;
   const struct S0  f3;
};

union U5 {
   uint16_t  f0;
   uint32_t  f1;
};


static int16_t g_2[3] = {0L,0L,0L};
static int32_t g_3 = 0L;
static int32_t g_4[1] = {0x64D07DDBL};
static int8_t g_24 = (-6L);
static int32_t g_26 = 0L;
static uint64_t g_28 = 0x264A3A207B8A5F03LL;
static int64_t g_35 = 0x6DF497A847E08A84LL;
static int16_t g_40 = 0x95BCL;
static uint32_t g_41 = 18446744073709551608UL;
static int8_t g_44 = 9L;
static uint32_t g_45 = 0x97A12B2FL;
static uint8_t g_60 = 255UL;
static uint32_t g_67 = 0UL;
static uint32_t g_74 = 1UL;
static uint8_t g_89 = 1UL;
static struct S1 g_106 = {18446744073709551615UL,0x4EL,0x1E3DL,0x9CL,65535UL,1L};
static uint16_t g_116[3][3] = {{65530UL,65530UL,65530UL},{7UL,0xC658L,7UL},{65530UL,65530UL,65530UL}};
static uint64_t g_117 = 18446744073709551615UL;
static int8_t g_132 = (-1L);
static int32_t g_133[5][2] = {{0xD180367AL,0xD180367AL},{0xD180367AL,0xD180367AL},{0xD180367AL,0xD180367AL},{0xD180367AL,0xD180367AL},{0xD180367AL,0xD180367AL}};
static uint16_t g_163 = 4UL;
static int8_t g_167 = 0xC0L;
static uint8_t g_202 = 246UL;
static struct S2 g_229 = {6UL,0UL,1L,0x976463CAL,{0x52AE98F465C1140DLL,0xF7L,0L,0x37L,0xD8EFL,0L},1L};
static union U5 g_234 = {9UL};
static int32_t g_254 = 0xA3D675C6L;
static struct S3 g_259 = {6L,0x59E138D61C2E0762LL};
static int16_t g_260 = 1L;
static int16_t g_270[4] = {1L,1L,1L,1L};
static uint16_t g_273 = 0x7062L;
static uint32_t g_277 = 0xE56490D0L;



static struct S4  func_1(void);
static int16_t  func_7(struct S3  p_8);
static struct S3  func_9(struct S1  p_10, struct S3  p_11);
static struct S1  func_12(int64_t  p_13);




static struct S4  func_1(void)
{ 
    struct S3 l_256 = {-1L,0xE753BC47F2C3C599LL};
    int32_t l_261 = 1L;
    const struct S4 l_262[5][4] = {{{{-1L,0xAA25L,8UL,0x26C8E93BL,0L},5L,{-9L,0xA11EBBAB34DE86E1LL},{0x5E148245F02E0370LL,0xD3A4L,0xB9A50B5DL,9UL,7L}},{{0xD2A15CC0637CDB33LL,0xEF1AL,0xA37043CBL,0x5E0FD3B0L,0x5F733A1D27760F31LL},1L,{0x2DL,0x5305F2F72A917BC9LL},{0xAC3B9206231FCB92LL,0x70D6L,0x4A889A83L,0xBD176975L,0x676AEA6EA95927A8LL}},{{-1L,0xAA25L,8UL,0x26C8E93BL,0L},5L,{-9L,0xA11EBBAB34DE86E1LL},{0x5E148245F02E0370LL,0xD3A4L,0xB9A50B5DL,9UL,7L}},{{-1L,0xAA25L,8UL,0x26C8E93BL,0L},5L,{-9L,0xA11EBBAB34DE86E1LL},{0x5E148245F02E0370LL,0xD3A4L,0xB9A50B5DL,9UL,7L}}},{{{0xD2A15CC0637CDB33LL,0xEF1AL,0xA37043CBL,0x5E0FD3B0L,0x5F733A1D27760F31LL},1L,{0x2DL,0x5305F2F72A917BC9LL},{0xAC3B9206231FCB92LL,0x70D6L,0x4A889A83L,0xBD176975L,0x676AEA6EA95927A8LL}},{{0xD2A15CC0637CDB33LL,0xEF1AL,0xA37043CBL,0x5E0FD3B0L,0x5F733A1D27760F31LL},1L,{0x2DL,0x5305F2F72A917BC9LL},{0xAC3B9206231FCB92LL,0x70D6L,0x4A889A83L,0xBD176975L,0x676AEA6EA95927A8LL}},{{1L,65527UL,4294967291UL,0UL,-1L},0xB4845BDFL,{0xAAL,0x2D46D31012271815LL},{0xD38649A409E23462LL,1UL,0UL,0x59CD487AL,4L}},{{0xD2A15CC0637CDB33LL,0xEF1AL,0xA37043CBL,0x5E0FD3B0L,0x5F733A1D27760F31LL},1L,{0x2DL,0x5305F2F72A917BC9LL},{0xAC3B9206231FCB92LL,0x70D6L,0x4A889A83L,0xBD176975L,0x676AEA6EA95927A8LL}}},{{{0xD2A15CC0637CDB33LL,0xEF1AL,0xA37043CBL,0x5E0FD3B0L,0x5F733A1D27760F31LL},1L,{0x2DL,0x5305F2F72A917BC9LL},{0xAC3B9206231FCB92LL,0x70D6L,0x4A889A83L,0xBD176975L,0x676AEA6EA95927A8LL}},{{-1L,0xAA25L,8UL,0x26C8E93BL,0L},5L,{-9L,0xA11EBBAB34DE86E1LL},{0x5E148245F02E0370LL,0xD3A4L,0xB9A50B5DL,9UL,7L}},{{-1L,0xAA25L,8UL,0x26C8E93BL,0L},5L,{-9L,0xA11EBBAB34DE86E1LL},{0x5E148245F02E0370LL,0xD3A4L,0xB9A50B5DL,9UL,7L}},{{0xD2A15CC0637CDB33LL,0xEF1AL,0xA37043CBL,0x5E0FD3B0L,0x5F733A1D27760F31LL},1L,{0x2DL,0x5305F2F72A917BC9LL},{0xAC3B9206231FCB92LL,0x70D6L,0x4A889A83L,0xBD176975L,0x676AEA6EA95927A8LL}}},{{{-1L,0xAA25L,8UL,0x26C8E93BL,0L},5L,{-9L,0xA11EBBAB34DE86E1LL},{0x5E148245F02E0370LL,0xD3A4L,0xB9A50B5DL,9UL,7L}},{{0xD2A15CC0637CDB33LL,0xEF1AL,0xA37043CBL,0x5E0FD3B0L,0x5F733A1D27760F31LL},1L,{0x2DL,0x5305F2F72A917BC9LL},{0xAC3B9206231FCB92LL,0x70D6L,0x4A889A83L,0xBD176975L,0x676AEA6EA95927A8LL}},{{-1L,0xAA25L,8UL,0x26C8E93BL,0L},5L,{-9L,0xA11EBBAB34DE86E1LL},{0x5E148245F02E0370LL,0xD3A4L,0xB9A50B5DL,9UL,7L}},{{-1L,0xAA25L,8UL,0x26C8E93BL,0L},5L,{-9L,0xA11EBBAB34DE86E1LL},{0x5E148245F02E0370LL,0xD3A4L,0xB9A50B5DL,9UL,7L}}},{{{0xD2A15CC0637CDB33LL,0xEF1AL,0xA37043CBL,0x5E0FD3B0L,0x5F733A1D27760F31LL},1L,{0x2DL,0x5305F2F72A917BC9LL},{0xAC3B9206231FCB92LL,0x70D6L,0x4A889A83L,0xBD176975L,0x676AEA6EA95927A8LL}},{{0xD2A15CC0637CDB33LL,0xEF1AL,0xA37043CBL,0x5E0FD3B0L,0x5F733A1D27760F31LL},1L,{0x2DL,0x5305F2F72A917BC9LL},{0xAC3B9206231FCB92LL,0x70D6L,0x4A889A83L,0xBD176975L,0x676AEA6EA95927A8LL}},{{1L,65527UL,4294967291UL,0UL,-1L},0xB4845BDFL,{0xAAL,0x2D46D31012271815LL},{0xD38649A409E23462LL,1UL,0UL,0x59CD487AL,4L}},{{-1L,0xAA25L,8UL,0x26C8E93BL,0L},5L,{-9L,0xA11EBBAB34DE86E1LL},{0x5E148245F02E0370LL,0xD3A4L,0xB9A50B5DL,9UL,7L}}}};
    int32_t l_268[5] = {0xFF8A22B9L,0xFF8A22B9L,0xFF8A22B9L,0xFF8A22B9L,0xFF8A22B9L};
    int32_t l_272 = 0x717E3472L;
    int i, j;
    for (g_3 = 0; (g_3 <= 2); g_3 += 1)
    { 
        uint16_t l_266 = 0xE9BEL;
        int32_t l_269 = 0x5DB3D0EAL;
        int32_t l_271 = 0x81F14776L;
        for (g_4[0] = 0; (g_4[0] <= 2); g_4[0] += 1)
        { 
            int32_t l_267 = (-1L);
            int i;
            l_261 = (safe_div_func_int16_t_s_s((g_260 ^= func_7(func_9(func_12(g_2[g_3]), (l_256 , l_256)))), g_2[g_4[0]]));
            if (g_60)
                break;
            if ((((g_116[0][2] |= (g_133[0][1] && (l_267 = ((l_262[3][3] , ((((((((safe_lshift_func_uint16_t_u_u((0x875FL ^ (!g_89)), g_254)) < 1UL) && 5UL) & l_266) && l_262[3][3].f0.f4) | l_266) == g_67) < g_229.f4.f2)) || (-6L))))) , l_262[2][1]) , l_262[3][3].f3.f2))
            { 
                g_273++;
            }
            else
            { 
                int16_t l_276 = (-10L);
                g_277++;
                if (l_276)
                    break;
                l_267 |= g_106.f5;
            }
        }
    }
    for (g_106.f2 = 0; (g_106.f2 <= 0); g_106.f2 += 1)
    { 
        int i;
        g_4[g_106.f2] = ((((g_270[2] &= (+(l_272 = (l_268[(g_106.f2 + 3)] & (((func_12(l_272) , (safe_lshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s((l_268[(g_106.f2 + 3)] ^ l_268[(g_106.f2 + 3)]), g_106.f3)), g_2[0]))) < 0x7BDE48DDDB469A38LL) , l_262[3][3].f0.f4))))) >= g_132) <= 0xB627L) || g_4[0]);
    }
    return l_262[3][2];
}



static int16_t  func_7(struct S3  p_8)
{ 
    struct S1 l_258 = {18446744073709551615UL,1UL,-6L,9UL,6UL,0x59088A6FAE5F79DBLL};
    g_254 = (((func_9(g_106, func_9(l_258, g_259)) , g_67) != p_8.f1) || g_202);
    return g_133[0][1];
}



static struct S3  func_9(struct S1  p_10, struct S3  p_11)
{ 
    struct S3 l_257 = {-2L,-5L};
    return l_257;
}



static struct S1  func_12(int64_t  p_13)
{ 
    int8_t l_20 = (-10L);
    int32_t l_22 = 0xD1456014L;
    int32_t l_23 = 0x10F1939EL;
    int32_t l_25 = 0x237DDC4EL;
    int32_t l_27[5][2] = {{0x8934ECA6L,0x8934ECA6L},{0x8934ECA6L,0x8934ECA6L},{0x8934ECA6L,0x8934ECA6L},{0x8934ECA6L,0x8934ECA6L},{0x8934ECA6L,0x8934ECA6L}};
    struct S1 l_94 = {18446744073709551612UL,255UL,0x808AL,0x35L,0x696FL,0x87C22977FD266E85LL};
    struct S4 l_107 = {{0xB53E36E8D0335754LL,65532UL,4294967288UL,4294967295UL,0x9EBF9289730A75DBLL},0L,{0x60L,0x5F2B768FFD6E9342LL},{0xA3813E0D8C1B616BLL,1UL,0x6CBD83D7L,0xCE6111D5L,0x98A95DAA2CA71060LL}};
    uint64_t l_110[5][5] = {{3UL,0x9AD1E1EA8031382DLL,0x9AD1E1EA8031382DLL,3UL,18446744073709551610UL},{3UL,0x9AD1E1EA8031382DLL,0x9AD1E1EA8031382DLL,3UL,18446744073709551610UL},{3UL,0x9AD1E1EA8031382DLL,0x9AD1E1EA8031382DLL,3UL,18446744073709551610UL},{3UL,0x9AD1E1EA8031382DLL,0x9AD1E1EA8031382DLL,3UL,18446744073709551610UL},{3UL,0x9AD1E1EA8031382DLL,0x9AD1E1EA8031382DLL,3UL,18446744073709551610UL}};
    const int32_t l_181 = 6L;
    struct S4 l_207[1][5] = {{{{-1L,65531UL,0UL,0x42261996L,-5L},0xFA1EA543L,{6L,0L},{0x292736123B1B58F1LL,0xD69EL,0UL,0xD15D3D01L,0x5D373B01895242DELL}},{{-1L,65531UL,0UL,0x42261996L,-5L},0xFA1EA543L,{6L,0L},{0x292736123B1B58F1LL,0xD69EL,0UL,0xD15D3D01L,0x5D373B01895242DELL}},{{-1L,65531UL,0UL,0x42261996L,-5L},0xFA1EA543L,{6L,0L},{0x292736123B1B58F1LL,0xD69EL,0UL,0xD15D3D01L,0x5D373B01895242DELL}},{{-1L,65531UL,0UL,0x42261996L,-5L},0xFA1EA543L,{6L,0L},{0x292736123B1B58F1LL,0xD69EL,0UL,0xD15D3D01L,0x5D373B01895242DELL}},{{-1L,65531UL,0UL,0x42261996L,-5L},0xFA1EA543L,{6L,0L},{0x292736123B1B58F1LL,0xD69EL,0UL,0xD15D3D01L,0x5D373B01895242DELL}}}};
    int64_t l_216 = 2L;
    union U5 l_218[4] = {{65529UL},{65529UL},{65529UL},{65529UL}};
    int i, j;
lbl_137:
    for (p_13 = 0; (p_13 <= 2); p_13 += 1)
    { 
        uint8_t l_14 = 0xB5L;
        int32_t l_18 = 0L;
        int32_t l_19 = (-1L);
        const int32_t l_71[2][1][3] = {{{0x647B8CEEL,0x647B8CEEL,0x647B8CEEL}},{{0x647B8CEEL,0x647B8CEEL,0x647B8CEEL}}};
        int i, j, k;
        if (((g_2[p_13] ^ l_14) >= ((+5L) > ((-1L) || p_13))))
        { 
            struct S1 l_16 = {1UL,0x15L,-5L,0UL,0xDA3BL,0x1D4416DA84B505D0LL};
            return l_16;
        }
        else
        { 
            uint64_t l_17 = 1UL;
            int32_t l_36 = 0L;
            int32_t l_37 = 0L;
            int32_t l_59 = 9L;
            int32_t l_73 = 0x257628AEL;
            if (l_17)
            { 
                int64_t l_21[2][2];
                int32_t l_38 = 0x179B1000L;
                int32_t l_39 = 4L;
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_21[i][j] = 0xDEEA39BA5493A50ELL;
                }
                --g_28;
                g_35 = ((((18446744073709551606UL & l_21[0][0]) , ((p_13 || (safe_sub_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(g_2[1], 7)), 0xABL))) != 0xEF3BB579L)) , p_13) <= 0xD581L);
                ++g_41;
            }
            else
            { 
                int16_t l_55[5][3][4] = {{{(-1L),(-1L),(-10L),0x3EEDL},{0xD061L,(-1L),0x3EEDL,0x3EEDL},{(-1L),(-1L),(-10L),0x3EEDL}},{{0xD061L,(-1L),0x3EEDL,0x3EEDL},{(-1L),(-1L),(-10L),0x3EEDL},{0xD061L,(-1L),0x3EEDL,0x3EEDL}},{{(-1L),(-1L),(-10L),0x3EEDL},{0xD061L,(-1L),0x3EEDL,0x3EEDL},{(-1L),(-1L),(-10L),0x3EEDL}},{{0xD061L,(-1L),0x3EEDL,0x3EEDL},{(-1L),(-1L),(-10L),0x3EEDL},{0xD061L,(-1L),0x3EEDL,0x3EEDL}},{{(-1L),(-1L),(-10L),0x3EEDL},{0xD061L,(-1L),0x3EEDL,0x3EEDL},{(-1L),(-1L),(-10L),0x3EEDL}}};
                int i, j, k;
                g_45++;
                l_19 ^= ((((safe_rshift_func_uint8_t_u_u((l_37 = ((p_13 , (l_17 >= (((~((l_18 , (safe_mod_func_int16_t_s_s((safe_div_func_uint16_t_u_u(g_44, p_13)), g_35))) <= 0xDA6125F89738BBD8LL)) & g_28) >= 0xE8L))) , 5UL)), g_40)) , l_36) <= l_36) > l_55[1][0][2]);
            }
            for (l_18 = 0; (l_18 <= 2); l_18 += 1)
            { 
                int8_t l_58 = 0xC3L;
                uint32_t l_72 = 4294967295UL;
                g_74 ^= (l_73 &= (safe_mul_func_uint8_t_u_u((((g_60--) , (((((((((safe_mul_func_int8_t_s_s(((0x32CFC9AAL || ((((safe_mod_func_uint16_t_u_u((g_67 = g_4[0]), 1L)) ^ (+(l_19 = (safe_div_func_int16_t_s_s(0x64F5L, p_13))))) & 9UL) <= l_71[1][0][1])) | g_35), l_37)) < p_13) != p_13) | p_13) != p_13) > 251UL) | l_72) && l_36) , p_13)) > 65530UL), l_59)));
                l_19 &= (0xBFL == (safe_rshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s(0xE6DEL, 0xD54FL)), 7)));
                if (g_3)
                    break;
            }
        }
        if ((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((l_27[4][0] = p_13), 0)), (safe_add_func_int32_t_s_s((((g_24 ^ (g_89 |= (l_22 &= (safe_add_func_int64_t_s_s((safe_add_func_uint8_t_u_u((l_19 = l_23), (-1L))), l_18))))) <= l_18) == g_26), 0x7054D2ACL)))))
        { 
            l_19 &= (((safe_sub_func_uint64_t_u_u((g_45 <= ((g_2[p_13] != (p_13 && (safe_rshift_func_int16_t_s_u(((g_4[0] , l_18) | p_13), 0)))) , g_4[0])), l_27[4][0])) , l_94) , g_4[0]);
        }
        else
        { 
            uint64_t l_95 = 18446744073709551609UL;
            if (l_95)
                break;
            if (g_44)
                continue;
        }
        for (l_23 = 1; (l_23 >= 0); l_23 -= 1)
        { 
            uint32_t l_115 = 18446744073709551615UL;
            int i, j;
            for (g_35 = 0; (g_35 <= 1); g_35 += 1)
            { 
                int i, j;
                l_27[(g_35 + 2)][g_35] ^= (safe_lshift_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u((safe_rshift_func_int16_t_s_s((((safe_lshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s((g_106 , g_2[p_13]), (l_107 , (safe_mul_func_uint8_t_u_u(p_13, l_110[2][1]))))), l_94.f3)) , g_106.f2) < g_40), g_40)), 0xFDE04AB730D59BCELL)), g_106.f1));
            }
            g_117 &= (g_106 , (g_2[l_23] && ((g_2[l_23] || (l_27[0][1] = ((safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u((g_116[0][2] |= (1UL ^ l_115)), p_13)), 0UL)) && g_106.f3))) == l_19)));
        }
    }
lbl_154:
    for (g_28 = 0; (g_28 != 9); ++g_28)
    { 
        uint16_t l_134 = 0x4B2CL;
        if ((safe_div_func_int64_t_s_s(((safe_sub_func_int64_t_s_s((((g_89 < ((safe_mul_func_uint8_t_u_u(((safe_add_func_int16_t_s_s(g_4[0], p_13)) < (safe_sub_func_int32_t_s_s((safe_div_func_uint16_t_u_u((l_107.f3.f4 <= g_106.f5), (-3L))), l_25))), g_24)) & l_107.f3.f4)) == g_24) || 1UL), l_23)) , 0xEA2508C1DB4CFA5ELL), p_13)))
        { 
            --l_134;
            if (p_13)
                break;
        }
        else
        { 
            for (g_106.f5 = 0; (g_106.f5 <= 1); g_106.f5 += 1)
            { 
                if (l_94.f0)
                    goto lbl_137;
            }
        }
    }
    if (l_94.f3)
    { 
        uint32_t l_147 = 0x0EC63AA8L;
        int32_t l_151 = (-1L);
        union U5 l_170 = {0x3844L};
        struct S2 l_173 = {0xF5L,0x8C25799EF2C49042LL,-1L,0xFD22C248L,{0xC87E2E2487D8A3BBLL,0x81L,0L,0x7BL,65535UL,0L},0L};
        if ((safe_div_func_int8_t_s_s(((safe_add_func_uint64_t_u_u((g_106.f0++), ((safe_sub_func_int8_t_s_s((((((g_89 = ((~l_147) | (p_13 | (l_151 |= (+(((safe_div_func_uint8_t_u_u(l_147, ((g_106.f3 || g_106.f3) & 0xFEL))) && g_133[2][1]) , g_60)))))) | 1L) , g_67) > 255UL) <= 0xD86D1A42L), g_106.f1)) , l_107.f2.f0))) != p_13), g_26)))
        { 
            for (g_45 = 0; (g_45 != 16); g_45 = safe_add_func_int8_t_s_s(g_45, 2))
            { 
                if (g_40)
                    goto lbl_154;
            }
        }
        else
        { 
            int32_t l_157[4][1] = {{0xDF43112EL},{(-1L)},{0xDF43112EL},{(-1L)}};
            int i, j;
            for (l_151 = 0; l_151 < 5; l_151 += 1)
            {
                for (g_106.f0 = 0; g_106.f0 < 2; g_106.f0 += 1)
                {
                    g_133[l_151][g_106.f0] = 1L;
                }
            }
            if ((safe_rshift_func_int16_t_s_u(0x12C7L, 13)))
            { 
                uint64_t l_158 = 18446744073709551612UL;
                int32_t l_164 = 0xA96FC68CL;
                uint32_t l_174 = 0xF8E2DF95L;
                g_163 = (((p_13 <= (((l_20 & (l_158++)) == (((l_157[3][0] == (safe_lshift_func_int8_t_s_u(((g_2[2] <= g_26) ^ g_3), 6))) < p_13) > g_133[0][1])) > 18446744073709551615UL)) >= 0L) && l_107.f0.f4);
                g_167 &= ((g_60++) & 0xF3L);
                l_151 ^= (safe_lshift_func_uint8_t_u_u((l_170 , (g_163 >= (l_157[2][0] = ((safe_add_func_uint8_t_u_u((l_173 , p_13), l_158)) >= l_174)))), p_13));
            }
            else
            { 
                l_27[4][0] = g_132;
                l_151 = 0xA69D0D33L;
                l_157[1][0] = (safe_sub_func_uint64_t_u_u((safe_rshift_func_int8_t_s_s((g_24 = (-5L)), 2)), (p_13 ^ ((p_13 , (safe_mod_func_int8_t_s_s(l_157[3][0], 0x68L))) && l_181))));
            }
        }
        g_202 = (safe_rshift_func_int16_t_s_s(((p_13 | (safe_mul_func_int8_t_s_s((safe_div_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((safe_div_func_uint16_t_u_u((l_173.f4.f5 & ((safe_mul_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_u((p_13 && ((safe_rshift_func_uint16_t_u_u(((l_27[2][0] == g_117) >= g_41), g_117)) != 0xBBL)), g_106.f0)) , p_13) != 0xE0181DA6923628DDLL), p_13)) <= p_13)), p_13)), g_67)), g_67)), p_13)), g_116[0][2]))) && 0x985A425B5E633137LL), 9));
    }
    else
    { 
        int32_t l_214 = 0xBFF7CC21L;
        int32_t l_233 = 0x9F3F1462L;
        for (g_167 = 0; (g_167 <= 1); g_167 += 1)
        { 
            uint32_t l_215 = 0x53D69D35L;
            int8_t l_217 = 0L;
            int32_t l_237 = 9L;
            struct S3 l_242 = {-6L,0xEC0652F3BBD960F0LL};
            uint32_t l_249 = 0x1A50DC03L;
            if ((safe_div_func_int16_t_s_s((((l_216 ^= (((safe_mul_func_uint16_t_u_u(((l_207[0][2] , (safe_mod_func_int64_t_s_s((safe_div_func_int32_t_s_s((safe_mod_func_int16_t_s_s((l_207[0][2].f2.f0 <= (l_214 | p_13)), g_132)), p_13)), l_215))) & l_207[0][2].f3.f2), g_106.f5)) | l_215) != 6L)) || l_217) , g_106.f1), g_28)))
            { 
                uint8_t l_230 = 0x6DL;
                int32_t l_231 = 0x1BC2A71DL;
                uint16_t l_232 = 0xA6ACL;
                l_233 ^= ((((l_218[2] , ((l_22 = (((l_231 &= (safe_mod_func_int32_t_s_s((safe_sub_func_uint64_t_u_u(0x6A387565C9793804LL, (safe_add_func_uint8_t_u_u((safe_add_func_uint64_t_u_u(0xF7548C9A67DAFABDLL, (safe_add_func_int16_t_s_s((((l_27[4][0] = ((g_229 , 0UL) < g_132)) | p_13) < 0xDD5C52C778925770LL), l_230)))), p_13)))), g_229.f5))) < l_217) <= 4294967287UL)) , l_232)) | l_230) && 1L) == l_230);
            }
            else
            { 
                int8_t l_245 = 0x7DL;
                struct S2 l_248 = {248UL,18446744073709551608UL,0xC90DD8B2L,5UL,{0x2747BD279F683CE6LL,255UL,0L,0xCFL,0x91DCL,-1L},1L};
                l_237 = ((g_234 , (0x2CA0AF4E1E5C5766LL >= g_229.f0)) == (safe_lshift_func_int16_t_s_u((g_229.f4.f1 , g_116[0][1]), 1)));
                l_22 &= (((l_233 &= ((g_229.f4.f5 <= g_106.f1) , (!(l_249 &= (+(safe_lshift_func_uint8_t_u_s(((l_242 , ((((safe_mul_func_uint16_t_u_u(((g_60++) , (l_248 , g_117)), p_13)) , 0xBBBC259659D1DFF8LL) ^ (-6L)) && 9L)) , g_116[2][2]), 7))))))) <= p_13) && g_60);
            }
            if (l_242.f1)
                break;
            for (g_41 = 0; (g_41 <= 1); g_41 += 1)
            { 
                int i, j;
                if (g_229.f1)
                    goto lbl_137;
                g_254 |= ((safe_rshift_func_uint16_t_u_u(g_133[(g_167 + 1)][g_167], p_13)) ^ (g_106.f3 &= ((((g_116[0][2] = ((((g_106.f5 & (g_106.f1 > 254UL)) > g_133[(g_167 + 1)][g_167]) != g_229.f4.f2) != g_44)) < p_13) , g_74) || (-1L))));
                l_237 ^= ((p_13 | (~0x9700L)) == l_214);
            }
        }
    }
    return l_94;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);

    }
    transparent_crc(g_3, "g_3", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_4[i], "g_4[i]", print_hash_value);

    }
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_44, "g_44", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_106.f0, "g_106.f0", print_hash_value);
    transparent_crc(g_106.f1, "g_106.f1", print_hash_value);
    transparent_crc(g_106.f2, "g_106.f2", print_hash_value);
    transparent_crc(g_106.f3, "g_106.f3", print_hash_value);
    transparent_crc(g_106.f4, "g_106.f4", print_hash_value);
    transparent_crc(g_106.f5, "g_106.f5", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_116[i][j], "g_116[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_133[i][j], "g_133[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_202, "g_202", print_hash_value);
    transparent_crc(g_229.f0, "g_229.f0", print_hash_value);
    transparent_crc(g_229.f1, "g_229.f1", print_hash_value);
    transparent_crc(g_229.f2, "g_229.f2", print_hash_value);
    transparent_crc(g_229.f3, "g_229.f3", print_hash_value);
    transparent_crc(g_229.f4.f0, "g_229.f4.f0", print_hash_value);
    transparent_crc(g_229.f4.f1, "g_229.f4.f1", print_hash_value);
    transparent_crc(g_229.f4.f2, "g_229.f4.f2", print_hash_value);
    transparent_crc(g_229.f4.f3, "g_229.f4.f3", print_hash_value);
    transparent_crc(g_229.f4.f4, "g_229.f4.f4", print_hash_value);
    transparent_crc(g_229.f4.f5, "g_229.f4.f5", print_hash_value);
    transparent_crc(g_229.f5, "g_229.f5", print_hash_value);
    transparent_crc(g_234.f0, "g_234.f0", print_hash_value);
    transparent_crc(g_254, "g_254", print_hash_value);
    transparent_crc(g_259.f0, "g_259.f0", print_hash_value);
    transparent_crc(g_259.f1, "g_259.f1", print_hash_value);
    transparent_crc(g_260, "g_260", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_270[i], "g_270[i]", print_hash_value);

    }
    transparent_crc(g_273, "g_273", print_hash_value);
    transparent_crc(g_277, "g_277", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
