// SPDX-License-Identifier: MIT
// cctest_csmith_f799984b.c --- cctest case csmith_f799984b (csmith seed 4154038347)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x8139e511 */
/* @exp_ticks 0x368e */

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

// Options:   -s 4154038347 -o /tmp/csmith_gen_o8cken4s/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int16_t  f0;
   uint16_t  f1;
   uint8_t  f2;
   uint32_t  f3;
   const int32_t  f4;
};

union U1 {
   const int32_t  f0;
   const uint8_t  f1;
};

union U2 {
   uint32_t  f0;
   int32_t  f1;
   struct S0  f2;
};


static uint64_t g_2 = 6UL;
static int32_t g_6[3] = {(-9L),(-9L),(-9L)};
static struct S0 g_20[1][4] = {{{0x945AL,65529UL,0x2AL,0xDDF34FFDL,1L},{0x945AL,65529UL,0x2AL,0xDDF34FFDL,1L},{0x945AL,65529UL,0x2AL,0xDDF34FFDL,1L},{0x945AL,65529UL,0x2AL,0xDDF34FFDL,1L}}};
static int32_t g_98 = (-9L);
static uint32_t g_138 = 0UL;
static int32_t g_166[2][1] = {{0xE0B6653CL},{0xE0B6653CL}};
static union U1 g_224 = {2L};
static uint64_t g_251 = 0UL;
static uint16_t g_252 = 1UL;



static uint32_t  func_1(void);
static union U2  func_9(struct S0  p_10, int64_t  p_11, const uint32_t  p_12, uint64_t  p_13);
static struct S0  func_14(struct S0  p_15, const union U2  p_16, uint8_t  p_17, uint32_t  p_18, int32_t  p_19);
static int16_t  func_35(const int64_t  p_36, int8_t  p_37, const int16_t  p_38, int32_t  p_39, int16_t  p_40);




static uint32_t  func_1(void)
{ 
    uint64_t l_5 = 18446744073709551615UL;
    const union U2 l_21 = {0UL};
    int32_t l_217 = 1L;
    struct S0 l_233 = {0x4E6BL,0x7969L,0xF4L,0xC74F74A4L,0xD3381A7BL};
    int32_t l_240 = 0L;
    uint32_t l_291[5][2][2] = {{{0x63EE46ABL,0x63EE46ABL},{0x63EE46ABL,0UL}},{{8UL,0UL},{0UL,0UL}},{{8UL,0UL},{0x63EE46ABL,0x63EE46ABL}},{{0x63EE46ABL,0UL},{8UL,0UL}},{{0UL,0UL},{8UL,0UL}}};
    uint32_t l_292[3];
    int32_t l_293 = 0L;
    uint32_t l_294[4];
    int32_t l_304 = 0x054E4649L;
    int32_t l_305 = (-4L);
    int32_t l_306 = (-1L);
    int32_t l_307 = (-1L);
    int32_t l_309 = (-1L);
    int32_t l_312 = (-6L);
    int32_t l_314 = 0L;
    uint16_t l_339 = 3UL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_292[i] = 1UL;
    for (i = 0; i < 4; i++)
        l_294[i] = 18446744073709551614UL;
    if ((((g_2 && g_2) == (((safe_mul_func_uint16_t_u_u((((g_6[0] = (255UL == l_5)) <= g_2) == l_5), 0UL)) , g_6[0]) ^ 18446744073709551614UL)) & g_2))
    { 
        int8_t l_26 = 0xA0L;
        int32_t l_218[3][5];
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 5; j++)
                l_218[i][j] = 0x9B22F94FL;
        }
        if ((l_218[0][2] |= ((safe_sub_func_uint8_t_u_u((((func_9(func_14(g_20[0][1], l_21, (safe_mul_func_int8_t_s_s(1L, (safe_add_func_uint8_t_u_u(0x18L, g_6[0])))), l_5, l_26), l_26, l_26, l_21.f1) , g_20[0][1].f3) && 0x8573L) <= l_217), 0x71L)) , l_26)))
        { 
            uint8_t l_223 = 0UL;
            l_218[0][2] = (g_166[0][0] | (((safe_div_func_uint8_t_u_u((l_223 || (g_224 , (249UL < l_218[0][2]))), g_20[0][1].f0)) < g_98) <= g_6[2]));
            return l_223;
        }
        else
        { 
            uint32_t l_225 = 1UL;
            int32_t l_241[5][2] = {{(-6L),0x86E976ACL},{(-6L),(-6L)},{0x86E976ACL,(-6L)},{(-6L),0x86E976ACL},{(-6L),(-6L)}};
            const uint8_t l_253[4][4] = {{247UL,0UL,247UL,247UL},{0UL,0UL,0xEDL,247UL},{247UL,0xEDL,0xEDL,247UL},{0xEDL,247UL,0xEDL,0xEDL}};
            int i, j;
            l_218[0][2] = (l_225 <= (safe_unary_minus_func_uint32_t_u((safe_rshift_func_int8_t_s_u(((((0x31889444L == ((safe_rshift_func_int8_t_s_s(g_20[0][1].f1, (((g_20[0][1].f3 >= 0L) , l_233) , g_20[0][1].f4))) ^ l_225)) || g_20[0][1].f2) <= l_5) && g_224.f1), 6)))));
            if ((g_6[0] = (safe_add_func_uint64_t_u_u((((l_233.f1 < (l_240 |= (safe_add_func_int8_t_s_s(l_218[0][2], g_20[0][1].f2)))) & (l_225 < 0UL)) == 0x13L), 0x0CE8AD497385A9E9LL))))
            { 
                return g_20[0][1].f1;
            }
            else
            { 
                uint64_t l_242 = 0UL;
                ++l_242;
                l_241[2][0] &= (g_224.f0 >= ((safe_mul_func_uint8_t_u_u(3UL, (safe_mod_func_int32_t_s_s((safe_div_func_uint64_t_u_u((((g_252 &= (g_251 &= g_166[0][0])) , (l_242 || g_252)) < g_224.f1), 0x5EBE09FC96DBB873LL)), l_253[1][2])))) <= 1UL));
            }
        }
    }
    else
    { 
        uint64_t l_254 = 18446744073709551615UL;
        uint16_t l_274 = 0xB82AL;
        l_240 = (l_254 ^ ((safe_mul_func_int16_t_s_s((safe_add_func_int64_t_s_s(0xD8F6A0003599E847LL, (safe_mul_func_int16_t_s_s((safe_sub_func_int64_t_s_s((g_6[0] < 0x7EL), 18446744073709551613UL)), l_254)))), 0x271DL)) < l_254));
        for (g_252 = (-29); (g_252 >= 59); g_252 = safe_add_func_int64_t_s_s(g_252, 6))
        { 
            uint32_t l_267 = 0x89FF0D58L;
            l_267 = ((safe_add_func_int8_t_s_s(1L, l_5)) < g_252);
            for (l_267 = 0; (l_267 <= 0); l_267 += 1)
            { 
                int i, j;
                return g_166[l_267][l_267];
            }
        }
        for (g_138 = 0; (g_138 <= 2); g_138 += 1)
        { 
            for (g_98 = 2; (g_98 >= 0); g_98 -= 1)
            { 
                int32_t l_275 = 0L;
                int i;
                g_6[g_138] = (safe_add_func_uint32_t_u_u((!((!g_6[g_98]) , (((g_20[0][1].f2 == ((safe_rshift_func_uint16_t_u_s(((0x8228610EFDCEB63DLL == (((l_275 |= ((((((l_274 = g_6[g_98]) != 0xAC75BEA6L) && 255UL) == g_98) , 0x39BD89DFC1571923LL) >= 0UL)) >= g_251) | g_6[g_98])) , g_2), 15)) > g_98)) < l_254) <= g_20[0][1].f2))), g_224.f0));
            }
        }
    }
    if ((g_252 || (func_9(l_233, (((safe_sub_func_int64_t_s_s((safe_mul_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((((safe_mod_func_int64_t_s_s(((safe_unary_minus_func_int8_t_s(((((safe_add_func_int8_t_s_s((safe_mod_func_int8_t_s_s((((4L | (safe_sub_func_uint8_t_u_u((((l_291[4][1][1] < 0xAD2E559AB9832730LL) != 0x8BL) < g_20[0][1].f4), g_20[0][1].f0))) && g_20[0][1].f4) ^ g_20[0][1].f3), g_20[0][1].f0)), 0xB1L)) == l_21.f0) || l_292[2]) != 0x3F3ED43D43504BE0LL))) >= g_2), 1UL)) != g_6[0]) , l_217), l_293)), 1UL)), g_251)) | l_291[3][1][1]) || 0x51DFC9DFL), l_233.f3, l_294[0]) , g_166[1][0])))
    { 
        int32_t l_295 = 0x4EC487F6L;
        int32_t l_302 = 0x412A0F18L;
        int32_t l_303 = 4L;
        int32_t l_308 = 0x0DDB8EA2L;
        int32_t l_310 = 0x25A3130AL;
        int32_t l_311 = 0L;
        int32_t l_313 = 0x8853CA86L;
        int32_t l_315 = 0L;
        uint16_t l_316[4] = {1UL,1UL,1UL,1UL};
        int i;
        g_6[0] ^= (l_240 = l_295);
        for (l_5 = 0; (l_5 <= 2); l_5 += 1)
        { 
            uint16_t l_297[4][2] = {{65535UL,0x5894L},{65535UL,65535UL},{0x5894L,65535UL},{65535UL,0x5894L}};
            int i, j;
            for (g_2 = 0; (g_2 <= 1); g_2 += 1)
            { 
                int32_t l_296 = 1L;
                int i;
                --l_297[0][1];
            }
            for (g_138 = 0; (g_138 <= 2); g_138 += 1)
            { 
                int i;
                g_6[0] &= ((-1L) <= (++l_292[g_138]));
                g_98 &= ((g_6[l_5] < (l_21 , g_6[g_138])) ^ ((l_294[(l_5 + 1)] , g_166[0][0]) == 18446744073709551608UL));
            }
            return g_6[l_5];
        }
        --l_316[1];
    }
    else
    { 
        int64_t l_321 = 5L;
        struct S0 l_335 = {-9L,0UL,0UL,4294967291UL,0x4CC2D40BL};
        int64_t l_336 = 0x48941EFC81CA3231LL;
        int32_t l_337 = 0x15881B6FL;
        int8_t l_338 = 0x9FL;
        int32_t l_340 = 0xEE05E7DDL;
        for (l_309 = 0; (l_309 <= (-14)); l_309 = safe_sub_func_uint32_t_u_u(l_309, 4))
        { 
            l_304 = l_321;
        }
        l_340 ^= ((l_339 |= (((l_312 = g_98) <= ((safe_mul_func_uint8_t_u_u((l_337 = (safe_sub_func_uint8_t_u_u((((((safe_unary_minus_func_uint16_t_u((l_307 = (safe_mul_func_uint8_t_u_u((((safe_add_func_uint64_t_u_u(((safe_sub_func_uint16_t_u_u(0x13D4L, (safe_div_func_uint32_t_u_u((g_224.f1 , (l_335 , g_6[0])), 0xFAF65009L)))) ^ 0xD2F2L), l_305)) , 0UL) || g_20[0][1].f0), l_336))))) != g_20[0][1].f4) < g_20[0][1].f1) < 4294967295UL) , 0xE3L), 0x2DL))), l_335.f3)) | l_338)) != g_6[0])) & 0xD71741A30BC3B024LL);
    }
    return g_20[0][1].f1;
}



static union U2  func_9(struct S0  p_10, int64_t  p_11, const uint32_t  p_12, uint64_t  p_13)
{ 
    const int64_t l_215 = (-2L);
    union U2 l_216 = {8UL};
    g_6[1] = (((((safe_sub_func_int32_t_s_s((((safe_div_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(0UL, (((l_215 > p_10.f0) > ((-1L) & 0x8868046F23EE2DABLL)) | 0L))), 0x4D31L)) , 252UL), (-9L))) || 0x99080DE7F7E74486LL) , 0xF32220C7L), p_10.f0)) >= 0L) > p_10.f2) ^ 9L) > l_215);
    return l_216;
}



static struct S0  func_14(struct S0  p_15, const union U2  p_16, uint8_t  p_17, uint32_t  p_18, int32_t  p_19)
{ 
    int32_t l_29 = 0xD46C64E7L;
    uint64_t l_30 = 0UL;
    uint8_t l_184 = 0x2BL;
    int32_t l_204 = 0L;
    int64_t l_205 = 0x6CF425122344D149LL;
    for (p_17 = 0; (p_17 <= 2); p_17 += 1)
    { 
        int i;
        g_6[p_17] = (-7L);
    }
    if (((safe_mul_func_uint8_t_u_u((l_29 , (((((1UL == 0xD6L) > p_15.f3) ^ (-6L)) ^ l_30) , 247UL)), 1UL)) >= l_30))
    { 
        int32_t l_41[2];
        int32_t l_183 = 0x2E5D3D61L;
        int i;
        for (i = 0; i < 2; i++)
            l_41[i] = 1L;
        l_184 = ((((((l_183 = (safe_rshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((((g_6[0] | l_30) && (func_35(g_20[0][1].f0, g_20[0][1].f3, p_18, g_20[0][1].f3, l_41[1]) && 0x9D59L)) , 0x2344L), 5L)), l_41[1]))) != g_20[0][1].f4) >= g_20[0][1].f4) >= l_41[1]) , 0x683EFAFE794198D2LL) , 0xF6C1FB7AL);
    }
    else
    { 
        uint16_t l_187 = 0x78A5L;
        int32_t l_206[3];
        int i;
        for (i = 0; i < 3; i++)
            l_206[i] = 3L;
        l_204 = (safe_lshift_func_int8_t_s_s(l_187, (safe_mul_func_uint16_t_u_u((safe_add_func_int16_t_s_s((safe_div_func_uint16_t_u_u(((l_206[2] = (l_205 = (safe_lshift_func_int16_t_s_u((l_187 | ((p_15.f2++) || ((safe_add_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((p_15.f0 = ((p_15.f0 != (g_20[0][1].f1 = (safe_mod_func_int8_t_s_s((-4L), l_187)))) & p_19)) < 1L), 0x2B9DL)), g_166[0][0])) > l_204))), p_15.f1)))) || (-6L)), l_187)), 1UL)), g_6[0]))));
    }
    return p_15;
}



static int16_t  func_35(const int64_t  p_36, int8_t  p_37, const int16_t  p_38, int32_t  p_39, int16_t  p_40)
{ 
    uint32_t l_44 = 0x4E3176A9L;
    int32_t l_81 = (-1L);
    int32_t l_86 = 0x18462423L;
    union U1 l_162 = {0x77FD1935L};
    int16_t l_163 = 6L;
    l_44 = (g_6[0] = (safe_add_func_int16_t_s_s((p_40 &= p_37), p_38)));
    if ((safe_rshift_func_int8_t_s_u(l_44, 2)))
    { 
        uint8_t l_53 = 1UL;
        int32_t l_84 = 0xBCD9968CL;
        const int16_t l_145 = 1L;
        l_53 = (safe_mod_func_uint16_t_u_u(2UL, ((!(((((~(p_38 < g_2)) ^ (safe_mul_func_int16_t_s_s((g_20[0][1].f0 = (((p_36 , p_36) & l_44) >= p_36)), 65535UL))) , g_6[0]) && l_44) && 0x7D42A80B09DE24E5LL)) & g_20[0][1].f2)));
        if ((safe_div_func_uint32_t_u_u(((safe_add_func_uint8_t_u_u(((0x697CL <= (~0L)) < ((-9L) || ((g_20[0][1].f1 | p_38) , l_44))), g_6[0])) != 0x11L), l_53)))
        { 
            int8_t l_70 = 1L;
            const uint32_t l_83 = 0UL;
            for (l_53 = 0; (l_53 == 55); ++l_53)
            { 
                uint64_t l_64 = 4UL;
                int32_t l_82 = 0x48F203DAL;
                int32_t l_85 = 0xEB36BD20L;
                l_86 |= (+((safe_mul_func_uint16_t_u_u(l_64, (safe_mul_func_int8_t_s_s(((!((p_40 == (safe_mod_func_int16_t_s_s((((l_70 == (safe_lshift_func_int16_t_s_s((l_82 = ((((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((((safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((l_44 ^ (-1L)), l_81)), (-1L))) && g_2) , g_20[0][1].f0), 13)), l_53)) , l_64) , 0L) >= 0x41D5C681L)), l_83))) | g_20[0][1].f0) <= l_84), g_20[0][1].f2))) == l_85)) , 0L), l_53)))) == p_39));
            }
        }
        else
        { 
            uint16_t l_134 = 0UL;
            int32_t l_135 = 0x7C3F9E42L;
            for (p_39 = (-3); (p_39 < (-3)); ++p_39)
            { 
                uint32_t l_89 = 5UL;
                int32_t l_90 = 0xCE469C6BL;
                l_90 &= l_89;
                l_90 = (+((((safe_sub_func_uint32_t_u_u((((((safe_mod_func_int16_t_s_s((safe_mul_func_int16_t_s_s((((((1UL <= ((g_20[0][1].f2 = 0xD7L) != (g_98 = g_20[0][1].f0))) , (safe_mod_func_int32_t_s_s(0L, 0x48C7375AL))) | l_84) >= g_6[0]) != p_37), 4L)), 0x5FDFL)) > 0x1089L) <= l_90) <= g_20[0][1].f4) != p_39), 1L)) || 0x3F9A7C9710A75E5FLL) < 65535UL) , g_20[0][1].f4));
            }
            l_135 = (g_98 = (((safe_lshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u(((p_38 > (safe_add_func_int16_t_s_s((p_40 = (safe_mul_func_int8_t_s_s(((+p_36) <= (((safe_sub_func_uint64_t_u_u((((safe_div_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u(((safe_unary_minus_func_uint32_t_u((++g_20[0][1].f3))) , (safe_add_func_int8_t_s_s((!(safe_lshift_func_uint16_t_u_u((safe_div_func_int8_t_s_s(((g_98 < (safe_add_func_uint8_t_u_u(g_20[0][1].f0, g_2))) && l_134), 0xB6L)), g_20[0][1].f0))), p_37))), g_20[0][1].f2)) < g_20[0][1].f4), l_44)) ^ 0x9ED7L) , p_37), l_134)) != g_20[0][1].f1) < 0L)), g_2))), p_37))) < 0UL), p_36)), g_20[0][1].f2)) & g_20[0][1].f4) || 0xFCD61A19L));
            if (p_40)
            { 
                g_138 |= (p_39 ^ (safe_rshift_func_uint16_t_u_u(p_36, 5)));
                g_6[1] &= g_20[0][1].f0;
            }
            else
            { 
                p_39 = ((((safe_add_func_uint16_t_u_u(((((safe_add_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(l_84, ((l_145 < g_6[1]) & ((safe_mod_func_uint8_t_u_u((l_86 = 250UL), l_53)) || 0x44EB2AB3L)))) || l_134), l_53)) > g_20[0][1].f1) , 1L) < 0x3CL), 0x53A5L)) & g_2) != p_37) == l_134);
            }
        }
    }
    else
    { 
        uint32_t l_164 = 18446744073709551611UL;
        int64_t l_165 = (-1L);
        int64_t l_174 = 0x202970E7AEBFCC9ELL;
        g_6[1] = 1L;
        g_166[0][0] = ((safe_lshift_func_uint8_t_u_u((((+(((((((+(safe_add_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((((((((l_86 , (safe_rshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u(((safe_div_func_int64_t_s_s((l_162 , (l_86 = p_38)), l_162.f1)) != l_162.f0), l_163)), g_20[0][1].f2))) | l_164) | p_38) ^ p_36) ^ p_37) , 0xEC2AL) <= g_20[0][1].f1) > l_162.f0), g_2)), p_36))) | g_98) <= l_162.f0) | g_138) && 0x8741FB0BL) <= l_162.f1) | g_20[0][1].f0)) ^ l_164) , l_165), p_38)) >= (-6L));
        l_174 = (((g_20[0][1].f1--) && (5L ^ (safe_sub_func_int16_t_s_s(l_164, ((((safe_rshift_func_int8_t_s_s((((safe_unary_minus_func_int16_t_s(g_2)) | (l_162 , 0x5D9182FBL)) == p_38), 6)) ^ p_36) ^ g_2) > p_39))))) | p_37);
    }
    for (l_86 = (-30); (l_86 >= (-21)); l_86 = safe_add_func_int64_t_s_s(l_86, 3))
    { 
        for (g_98 = 0; (g_98 != 5); g_98++)
        { 
            for (l_44 = 20; (l_44 <= 13); l_44 = safe_sub_func_int8_t_s_s(l_44, 5))
            { 
                p_39 &= p_36;
                g_6[2] = (safe_rshift_func_int16_t_s_s((p_39 || 7UL), 6));
            }
        }
    }
    return l_162.f1;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_6[i], "g_6[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_20[i][j].f0, "g_20[i][j].f0", print_hash_value);
            transparent_crc(g_20[i][j].f1, "g_20[i][j].f1", print_hash_value);
            transparent_crc(g_20[i][j].f2, "g_20[i][j].f2", print_hash_value);
            transparent_crc(g_20[i][j].f3, "g_20[i][j].f3", print_hash_value);
            transparent_crc(g_20[i][j].f4, "g_20[i][j].f4", print_hash_value);

        }
    }
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_166[i][j], "g_166[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_224.f0, "g_224.f0", print_hash_value);
    transparent_crc(g_224.f1, "g_224.f1", print_hash_value);
    transparent_crc(g_251, "g_251", print_hash_value);
    transparent_crc(g_252, "g_252", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
