// SPDX-License-Identifier: MIT
// cctest_csmith_9eff1a3c.c --- cctest case csmith_9eff1a3c (csmith seed 2667518524)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x1e3efcab */
/* @exp_ticks 0x56ba */

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

// Options:   -s 2667518524 -o /tmp/csmith_gen_4yrgmnn8/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   const int32_t  f0;
   uint32_t  f1;
   uint16_t  f2;
   uint32_t  f3;
   uint16_t  f4;
   int8_t  f5;
   uint8_t  f6;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   uint32_t  f0;
   uint16_t  f1;
   uint8_t  f2;
   const uint32_t  f3;
};
#pragma pack(pop)

union U2 {
   struct S1  f0;
   int32_t  f1;
   struct S0  f2;
   struct S0  f3;
};


static uint16_t g_14 = 0xF6B3L;
static struct S0 g_52[1] = {{0xC2F4FE10L,0xF7D59448L,0xF75DL,0x1563CFEBL,1UL,0L,1UL}};
static int32_t g_62 = 0L;
static uint32_t g_66 = 0x7236C342L;
static uint16_t g_73 = 65535UL;
static int64_t g_74 = 0xB93DB2A25C95EEC0LL;
static int32_t g_75[3][3][7] = {{{0x1526695BL,0x4F91E2C0L,0x53A1071FL,0x5F31FD02L,0xCC61BBCBL,0x66052DBCL,0xFC87C03CL},{0x5FB330CFL,4L,0xCBB7A791L,0x5FB330CFL,0xF2FC99F1L,0x943CDC18L,(-4L)},{0x943CDC18L,0xE8932A22L,(-1L),(-1L),0xE8932A22L,0x943CDC18L,0x0293E9FCL}},{{0xFC87C03CL,0x5F31FD02L,0x66052DBCL,0xA9A78915L,0x1526695BL,0x66052DBCL,0x5FB330CFL},{0xE8932A22L,0x0293E9FCL,0xA103ABEDL,0xCC61BBCBL,(-1L),0x60806AF7L,0xCC61BBCBL},{0x943CDC18L,0x5F31FD02L,0xA2328941L,0xF2FC99F1L,(-4L),4L,4L}},{{(-4L),0xE8932A22L,0x66052DBCL,0x60806AF7L,0xCBB7A791L,0x4F91E2C0L,0x943CDC18L},{0xA2328941L,(-5L),0L,0x943CDC18L,0x8480AD74L,0x66052DBCL,0xA2328941L},{0x9A39DA5DL,0xA2328941L,0x66052DBCL,0x8480AD74L,0x943CDC18L,0L,(-5L)}}};
static const int32_t *g_97 = &g_62;
static const int32_t **g_96[4][7] = {{&g_97,&g_97,&g_97,&g_97,&g_97,&g_97,&g_97},{&g_97,&g_97,&g_97,&g_97,&g_97,&g_97,&g_97},{&g_97,&g_97,&g_97,&g_97,&g_97,&g_97,&g_97},{&g_97,&g_97,&g_97,&g_97,&g_97,&g_97,&g_97}};
static const int32_t ** const *g_95 = &g_96[3][6];
static int8_t g_100 = (-3L);
static int32_t g_150[6][1] = {{0L},{0L},{0L},{0L},{0L},{0L}};
static uint16_t *g_182 = &g_52[0].f2;
static uint64_t g_198 = 18446744073709551615UL;
static int64_t g_258 = (-5L);
static uint16_t g_359 = 0xAF65L;
static int32_t *g_395 = &g_150[0][0];
static int32_t **g_394[2][3][2] = {{{&g_395,&g_395},{&g_395,&g_395},{&g_395,&g_395}},{{&g_395,&g_395},{&g_395,&g_395},{&g_395,&g_395}}};
static int32_t ***g_393 = &g_394[1][2][0];
static int32_t **** const g_392 = &g_393;
static int32_t **** const *g_391 = &g_392;
static struct S0 g_419 = {1L,1UL,0x05B8L,0x4C38B294L,1UL,-1L,250UL};
static struct S0 *g_418[5] = {&g_419,&g_419,&g_419,&g_419,&g_419};
static struct S0 **g_417 = &g_418[3];
static int16_t g_440 = (-1L);
static int64_t g_441 = 0x0525D42D8B994C7ELL;
static int64_t g_468 = (-1L);
static struct S1 g_516[2] = {{0xEF42F6D2L,65526UL,0x7DL,0x81D417EBL},{0xEF42F6D2L,65526UL,0x7DL,0x81D417EBL}};
static uint32_t g_525 = 0x698E2022L;
static uint8_t g_564[6] = {248UL,248UL,248UL,248UL,248UL,248UL};
static const union U2 g_565 = {{5UL,1UL,0x35L,0xE272AB70L}};
static uint16_t **g_603 = &g_182;
static int32_t g_607 = 0x3285A7FAL;
static uint32_t *g_610 = &g_419.f1;
static uint32_t **g_609 = &g_610;
static uint64_t g_677 = 18446744073709551612UL;
static int32_t g_685 = 0xBD48EB54L;
static int32_t * const g_696 = (void*)0;
static int32_t * const *g_695[7] = {&g_696,&g_696,&g_696,&g_696,&g_696,&g_696,&g_696};
static uint32_t g_744 = 18446744073709551615UL;
static union U2 g_796 = {{0xC89D4641L,1UL,0x84L,4294967291UL}};
static union U2 g_800 = {{0x1AC9F945L,0x6E9BL,8UL,4294967289UL}};
static union U2 *g_799 = &g_800;
static struct S1 g_855 = {0x3830B78AL,0x9200L,0UL,4294967295UL};
static struct S1 *g_854 = &g_855;
static uint8_t g_882 = 0UL;
static int16_t *g_995 = &g_440;
static int16_t **g_994 = &g_995;
static int16_t ***g_993 = &g_994;
static int16_t ****g_992 = &g_993;
static uint8_t g_1004[1] = {2UL};
static int64_t *g_1088[2][3] = {{&g_258,&g_258,&g_258},{&g_258,&g_258,&g_258}};
static union U2 * const *g_1105[7] = {&g_799,&g_799,&g_799,&g_799,&g_799,&g_799,&g_799};
static union U2 * const **g_1104[7][1] = {{&g_1105[1]},{&g_1105[5]},{&g_1105[5]},{&g_1105[1]},{&g_1105[5]},{&g_1105[5]},{&g_1105[1]}};
static union U2 * const ***g_1103[1][6][4] = {{{&g_1104[2][0],&g_1104[0][0],&g_1104[2][0],&g_1104[0][0]},{&g_1104[2][0],&g_1104[0][0],&g_1104[2][0],&g_1104[0][0]},{&g_1104[2][0],&g_1104[0][0],&g_1104[2][0],&g_1104[0][0]},{&g_1104[2][0],&g_1104[0][0],&g_1104[2][0],&g_1104[0][0]},{&g_1104[2][0],&g_1104[0][0],&g_1104[2][0],&g_1104[0][0]},{&g_1104[2][0],&g_1104[0][0],&g_1104[2][0],&g_1104[0][0]}}};
static struct S0 g_1170 = {0xB478E460L,0UL,0x98BBL,18446744073709551615UL,0xEDD3L,-1L,255UL};



static int8_t  func_1(void);
static struct S0  func_4(int64_t  p_5);
static uint32_t  func_8(struct S1  p_9, int32_t  p_10, int32_t  p_11);
static struct S1  func_12(int32_t  p_13);
static int8_t  func_19(int32_t  p_20, int32_t  p_21, int64_t  p_22, uint32_t  p_23, uint32_t  p_24);
static uint16_t  func_28(uint32_t  p_29, int32_t  p_30, uint8_t  p_31, uint64_t  p_32, int32_t  p_33);
static uint16_t  func_37(int32_t  p_38, uint32_t  p_39);
static int32_t  func_40(int8_t  p_41, const uint64_t  p_42, uint32_t  p_43, struct S1  p_44, struct S0  p_45);




static int8_t  func_1(void)
{ 
    uint64_t l_785[2];
    int32_t l_790 = 0x0209B233L;
    uint64_t *l_791[3][2][1] = {{{&l_785[0]},{&l_785[0]}},{{(void*)0},{&l_785[0]}},{{&l_785[0]},{(void*)0}}};
    int32_t *l_794 = &g_685;
    int8_t l_895 = 0xA0L;
    const struct S1 * const l_910[2][4] = {{&g_855,&g_855,&g_855,&g_855},{&g_855,&g_855,&g_855,&g_855}};
    int32_t l_911 = 0L;
    int32_t l_915 = 0xFA74F06CL;
    int32_t l_916 = (-1L);
    int32_t l_917 = 1L;
    int32_t l_918 = 0L;
    int32_t l_919 = 0x492ECD5FL;
    int32_t l_920 = (-2L);
    int32_t l_921 = 1L;
    int16_t l_922 = 0L;
    int32_t l_923[5][1];
    uint64_t l_952 = 0xCB18E1838B420E4DLL;
    int32_t *l_959 = &l_790;
    const uint16_t *l_978 = &g_565.f0.f1;
    const uint16_t **l_977[3];
    const struct S0 l_1032 = {4L,0xAD129181L,1UL,6UL,0x09CFL,0x05L,255UL};
    int8_t l_1036 = 0x53L;
    const int32_t ** const **l_1041 = &g_95;
    union U2 l_1056 = {{0x82A262D5L,0xEBDBL,0UL,0x6EB0A852L}};
    int8_t l_1061 = (-1L);
    uint16_t l_1067 = 0xF579L;
    uint16_t l_1152 = 1UL;
    struct S0 *l_1166[3][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
    int16_t l_1227[4] = {0xA3FEL,0xA3FEL,0xA3FEL,0xA3FEL};
    uint64_t l_1244 = 0xFC493CA7BD1446A9LL;
    int64_t **l_1251 = &g_1088[1][1];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_785[i] = 18446744073709551611UL;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
            l_923[i][j] = 0L;
    }
    for (i = 0; i < 3; i++)
        l_977[i] = &l_978;
    return g_52[0].f3;
}



static struct S0  func_4(int64_t  p_5)
{ 
    uint8_t *l_810 = &g_52[0].f6;
    int32_t l_811 = 0x722EA556L;
    const union U2 *l_831 = &g_565;
    const union U2 **l_830 = &l_831;
    int32_t l_832 = 0L;
    int8_t l_833 = 0x08L;
    uint64_t l_834 = 1UL;
    int32_t l_835 = 0xEC243C61L;
    struct S0 l_838 = {5L,0xC41D8043L,0UL,0x4F210B20L,65531UL,0x80L,254UL};
    int32_t l_878 = (-1L);
    if ((((safe_rshift_func_uint16_t_u_u(((*g_182)++), 3)) <= ((safe_unary_minus_func_uint8_t_u((((safe_sub_func_int32_t_s_s((l_835 &= (((safe_lshift_func_uint8_t_u_s((((0x47L || (l_811 = ((*l_810) = 7UL))) != (safe_div_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s(((void*)0 != &g_440), (((safe_add_func_uint8_t_u_u((g_796.f0.f2 = p_5), ((safe_lshift_func_int8_t_s_u(((safe_mod_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((((l_830 == &g_799) & (**g_609)) ^ l_832), 3)), p_5)), g_744)), p_5)), 0xE2L)) == 7L), g_419.f0)) , l_832))) , (-1L)) == g_150[0][0]))) < (-3L)), l_833))) || g_62), l_834)) , l_832) >= (*g_610))), (-3L))) , p_5) > p_5))) != (**g_609))) >= p_5))
    { 
        const int32_t *l_837[1][5] = {{&l_835,&l_835,&l_835,&l_835,&l_835}};
        const int32_t **l_836 = &l_837[0][3];
        int i, j;
        (*l_836) = ((**g_95) = (**g_95));
        return l_838;
    }
    else
    { 
        uint32_t l_851 = 18446744073709551615UL;
        int32_t l_881 = 0L;
        for (g_800.f0.f1 = 0; (g_800.f0.f1 <= 57); g_800.f0.f1 = safe_add_func_uint64_t_u_u(g_800.f0.f1, 7))
        { 
            int32_t *l_841 = (void*)0;
            int32_t l_846 = 1L;
            int32_t l_879 = 0x62C28D2AL;
            int32_t l_880 = (-1L);
            const int32_t l_887 = (-1L);
            (**g_95) = l_841;
            for (g_685 = (-28); (g_685 == (-29)); g_685 = safe_sub_func_uint16_t_u_u(g_685, 3))
            { 
                int32_t *l_844 = (void*)0;
                int32_t *l_845 = (void*)0;
                int32_t *l_847 = &l_846;
                int32_t *l_848 = &g_150[5][0];
                int32_t *l_849 = (void*)0;
                int32_t *l_850[2];
                int8_t l_893 = 0xD2L;
                int32_t *l_894 = &g_607;
                int i;
                for (i = 0; i < 2; i++)
                    l_850[i] = &g_150[4][0];
                l_851--;
                g_854 = &g_516[1];
                for (g_796.f2.f4 = 0; (g_796.f2.f4 <= 5); g_796.f2.f4 += 1)
                { 
                    int16_t *l_862 = (void*)0;
                    int8_t *l_874[4][1];
                    int32_t l_877[7][1] = {{0x1707F6F7L},{0L},{0L},{0x1707F6F7L},{0L},{0L},{0x1707F6F7L}};
                    int16_t *l_891 = (void*)0;
                    int16_t *l_892[1][1][7] = {{{&g_440,&g_440,&g_440,&g_440,&g_440,&g_440,&g_440}}};
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_874[i][j] = &g_52[0].f5;
                    }
                    (*l_848) ^= ((*g_854) , (safe_lshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_s((safe_add_func_int16_t_s_s((l_811 = 0x91ADL), (((safe_unary_minus_func_uint32_t_u((0xEDL < (((safe_add_func_int32_t_s_s(((((safe_add_func_int8_t_s_s((safe_add_func_int32_t_s_s((((safe_rshift_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s((p_5 > l_833), (l_835 &= p_5))) == (safe_mul_func_int8_t_s_s(p_5, p_5))), p_5)) >= 65530UL) || 0L), l_851)), g_52[0].f0)) <= (-4L)) <= l_838.f4) && l_835), p_5)) , g_796.f0.f2) , p_5)))) | 0xA2E8E551F7551C0ALL) >= g_100))), l_877[1][0])), g_744)));
                    g_882--;
                    (*l_830) = (void*)0;
                    (*g_395) ^= (safe_rshift_func_int8_t_s_s(l_887, (l_893 &= (p_5 != (safe_mul_func_int16_t_s_s((g_440 = (((-2L) && (p_5 < 0x98DFL)) , (+(-1L)))), ((((void*)0 != &l_881) && p_5) >= p_5)))))));
                    l_894 = &l_846;
                }
            }
            return (**g_417);
        }
        return l_838;
    }
}



static uint32_t  func_8(struct S1  p_9, int32_t  p_10, int32_t  p_11)
{ 
    union U2 *l_795 = &g_796;
    union U2 **l_797 = (void*)0;
    union U2 **l_798[7][3][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&l_795,(void*)0,(void*)0},{(void*)0,(void*)0,&l_795,&l_795}},{{&l_795,(void*)0,&l_795,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&l_795,&l_795,(void*)0}},{{&l_795,(void*)0,&l_795,(void*)0},{&l_795,&l_795,&l_795,&l_795},{(void*)0,(void*)0,&l_795,&l_795}},{{&l_795,&l_795,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{&l_795,&l_795,&l_795,(void*)0}},{{(void*)0,&l_795,&l_795,(void*)0},{&l_795,(void*)0,&l_795,(void*)0},{&l_795,&l_795,&l_795,&l_795}},{{(void*)0,(void*)0,&l_795,&l_795},{&l_795,&l_795,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{&l_795,&l_795,&l_795,(void*)0},{(void*)0,&l_795,&l_795,(void*)0},{&l_795,(void*)0,&l_795,(void*)0}}};
    int i, j, k;
    g_799 = l_795;
    return (*g_610);
}



static struct S1  func_12(int32_t  p_13)
{ 
    int32_t l_34 = 0xF4A7D2AEL;
    uint8_t l_58 = 0xBDL;
    struct S1 l_59 = {18446744073709551615UL,0xA498L,0x59L,1UL};
    struct S0 l_60 = {0xC02AC6AAL,4294967295UL,0x7F66L,0xCDE333B8L,0xBA32L,-3L,0xE0L};
    uint16_t *l_72 = &g_73;
    int32_t l_285 = (-9L);
    uint8_t *l_605 = &l_59.f2;
    int32_t *l_606 = &g_607;
    uint32_t ***l_608[2];
    int32_t l_649 = 0x512C7B92L;
    int32_t l_651 = 0L;
    uint32_t l_727 = 0x510831BEL;
    int64_t *l_752 = &g_441;
    uint8_t l_779[6][7][2] = {{{0UL,0x0EL},{0x0EL,0UL},{0x64L,252UL},{0x64L,0UL},{0x0EL,0x0EL},{0UL,0x64L},{252UL,0x64L}},{{0UL,0x0EL},{0x0EL,0UL},{0x64L,252UL},{0x64L,0UL},{0x0EL,0x0EL},{0UL,0x64L},{252UL,0x64L}},{{0UL,0x0EL},{0x0EL,0UL},{0x64L,252UL},{0x64L,0UL},{0x0EL,0x0EL},{0UL,0x64L},{252UL,0x64L}},{{0UL,0x0EL},{0x0EL,0UL},{0x64L,252UL},{0x64L,0UL},{0x0EL,0x0EL},{0UL,0x64L},{252UL,0x64L}},{{0UL,0x0EL},{0x0EL,0UL},{0x64L,252UL},{0x64L,0UL},{0x0EL,0x0EL},{0UL,0x64L},{252UL,0x64L}},{{0UL,0x0EL},{0x0EL,0UL},{0x64L,252UL},{0x64L,0UL},{0x0EL,0x0EL},{0UL,0x64L},{252UL,0x64L}}};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_608[i] = (void*)0;
    return l_59;
}



static int8_t  func_19(int32_t  p_20, int32_t  p_21, int64_t  p_22, uint32_t  p_23, uint32_t  p_24)
{ 
    int32_t l_309 = 0L;
    int32_t l_324 = (-2L);
    int32_t l_326[2];
    uint64_t l_327 = 0UL;
    int32_t *l_342 = (void*)0;
    int32_t ****l_396 = (void*)0;
    struct S0 *l_416 = (void*)0;
    struct S0 **l_415 = &l_416;
    struct S0 ***l_431 = &g_417;
    uint32_t l_467 = 0xCE32A651L;
    int8_t l_527 = 1L;
    const int32_t l_547 = 4L;
    union U2 l_551 = {{4UL,65533UL,0x6CL,1UL}};
    int32_t *l_556 = &l_309;
    int16_t *l_563 = &g_440;
    int32_t l_569 = 1L;
    uint16_t l_570 = 65535UL;
    uint32_t l_573 = 5UL;
    int i;
    for (i = 0; i < 2; i++)
        l_326[i] = 0x5B47ADFFL;
lbl_334:
    if ((safe_mul_func_uint16_t_u_u(p_20, 0xEF9EL)))
    { 
        const int8_t l_310 = 0x88L;
        uint8_t *l_311[2];
        int32_t l_316 = 0x76D2E7ABL;
        int32_t l_322 = (-1L);
        int32_t l_325[3][5][1] = {{{(-1L)},{0x0B624E79L},{(-1L)},{0x0B624E79L},{(-1L)}},{{0x0B624E79L},{(-1L)},{0x0B624E79L},{(-1L)},{0x0B624E79L}},{{(-1L)},{0x0B624E79L},{(-1L)},{0x0B624E79L},{(-1L)}}};
        const int32_t ** const **l_331 = &g_95;
        const int32_t ** const ***l_330 = &l_331;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_311[i] = &g_52[0].f6;
        g_62 ^= (safe_mod_func_uint32_t_u_u(4294967295UL, (255UL | (safe_add_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s((((safe_mod_func_int8_t_s_s(((((safe_mul_func_uint8_t_u_u((g_52[0].f6 = (((~(p_23 ^ ((safe_div_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((p_20 >= ((0x90295BB7E847FF5ALL > (0x1DL == (safe_add_func_int16_t_s_s(l_309, p_24)))) && g_150[1][0])), (*g_182))), l_310)) <= g_52[0].f2))) , (void*)0) == &g_182)), 4L)) == l_309) , g_258) | p_21), (-1L))) | 0UL) || 0xDAE8L), g_52[0].f5)) ^ g_258), p_21)))));
        for (p_23 = 0; (p_23 == 26); p_23++)
        { 
            int32_t *l_314 = &g_150[4][0];
            int32_t l_315 = 0x18ECF1C8L;
            int32_t *l_317 = &l_315;
            int32_t *l_318 = (void*)0;
            int32_t *l_319 = &g_150[0][0];
            int32_t *l_320 = &g_62;
            int32_t *l_321 = (void*)0;
            int32_t *l_323[2];
            int i;
            for (i = 0; i < 2; i++)
                l_323[i] = &g_150[3][0];
            if (l_310)
                break;
            l_327--;
        }
        (*l_330) = &g_95;
    }
    else
    { 
        int32_t *l_332 = (void*)0;
        int32_t *l_333 = &l_326[1];
        (*l_333) |= p_20;
        if (p_24)
            goto lbl_334;
    }
    for (g_198 = 23; (g_198 >= 27); ++g_198)
    { 
        uint32_t l_365 = 0x9A51A2D8L;
        int32_t l_368 = 0L;
        int32_t l_369 = 1L;
        int32_t l_370 = 0xE1FBBDABL;
        int32_t l_371 = (-2L);
        int32_t l_372 = 6L;
        int32_t l_373 = 1L;
        int64_t l_374 = 1L;
        int32_t l_375[3][1];
        uint8_t l_376 = 0xAEL;
        int32_t **l_387[3][7];
        int32_t ***l_386 = &l_387[1][6];
        int32_t **** const l_385 = &l_386;
        int32_t **** const *l_384 = &l_385;
        int32_t ***l_390 = &l_387[1][6];
        int32_t **** const l_389 = &l_390;
        int32_t **** const *l_388 = &l_389;
        uint64_t *l_424 = &g_198;
        int32_t l_438[1][5] = {{0xB5BE354DL,0xB5BE354DL,0xB5BE354DL,0xB5BE354DL,0xB5BE354DL}};
        int8_t l_442 = 1L;
        int32_t l_443 = 0x02CCA80EL;
        uint16_t l_476 = 65535UL;
        int32_t l_526 = 0x6A9D2491L;
        uint32_t l_528 = 0xBEC65723L;
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
                l_375[i][j] = 0x7F98C77AL;
        }
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 7; j++)
                l_387[i][j] = &l_342;
        }
        for (g_74 = 0; (g_74 < (-15)); g_74 = safe_sub_func_int8_t_s_s(g_74, 1))
        { 
            int32_t *l_341 = &l_324;
            int32_t *l_360 = (void*)0;
            int32_t l_361 = 0x77B575E7L;
            int32_t *l_362 = (void*)0;
            int32_t *l_363 = &l_361;
            int32_t *l_364[7] = {&g_62,&g_62,&g_62,&g_62,&g_62,&g_62,&g_62};
            int i;
            for (g_66 = 29; (g_66 != 27); --g_66)
            { 
                int32_t *l_345 = (void*)0;
                int32_t **l_356[4][6][1] = {{{(void*)0},{&l_342},{(void*)0},{&l_345},{(void*)0},{(void*)0}},{{&l_345},{(void*)0},{&l_342},{(void*)0},{(void*)0},{(void*)0}},{{&l_342},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{&l_345},{(void*)0},{&l_342},{&l_341},{&l_342},{(void*)0}}};
                int32_t ***l_355 = &l_356[3][1][0];
                int32_t ****l_354[1];
                int32_t *****l_353 = &l_354[0];
                uint64_t *l_357 = (void*)0;
                uint64_t *l_358 = (void*)0;
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_354[i] = &l_355;
                l_342 = l_341;
                for (l_309 = (-25); (l_309 <= 22); l_309++)
                { 
                    int32_t *l_346 = &l_324;
                    l_341 = l_345;
                    (**g_95) = l_346;
                }
            }
            ++l_365;
            --l_376;
        }
        if (l_373)
        { 
            int32_t *l_379[4][3] = {{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}};
            int8_t *l_401 = &g_52[0].f5;
            union U2 l_408 = {{0x51B02FE9L,5UL,255UL,0UL}};
            uint16_t l_423[6];
            int16_t *l_439[7][4][2] = {{{&g_440,&g_440},{&g_440,&g_440},{&g_440,&g_440},{&g_440,&g_440}},{{&g_440,&g_440},{&g_440,&g_440},{&g_440,&g_440},{&g_440,&g_440}},{{&g_440,&g_440},{&g_440,&g_440},{&g_440,&g_440},{&g_440,&g_440}},{{&g_440,&g_440},{&g_440,&g_440},{&g_440,&g_440},{&g_440,&g_440}},{{&g_440,&g_440},{&g_440,&g_440},{&g_440,&g_440},{&g_440,&g_440}},{{&g_440,&g_440},{&g_440,&g_440},{&g_440,&g_440},{&g_440,&g_440}},{{&g_440,&g_440},{&g_440,&g_440},{&g_440,&g_440},{&g_440,&g_440}}};
            int i, j, k;
            for (i = 0; i < 6; i++)
                l_423[i] = 65532UL;
            l_326[0] ^= (*g_97);
            if ((((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u(((l_384 == (g_391 = (l_388 = &l_385))) ^ 0L), ((void*)0 == l_396))), (safe_sub_func_int32_t_s_s((safe_mod_func_uint16_t_u_u((((((*l_401) ^= (p_21 & p_22)) > 0UL) ^ p_22) == p_20), g_52[0].f3)), p_21)))) != 0L) <= (*g_182)))
            { 
                int64_t *l_404 = (void*)0;
                int64_t *l_405 = &g_74;
                uint32_t l_411 = 0x2D645F78L;
                struct S0 l_414 = {0L,0x1359E41FL,0x763BL,1UL,0x97BDL,0xF8L,0UL};
                uint8_t *l_420 = &l_408.f3.f6;
                uint64_t *l_421 = &l_327;
                int32_t l_422[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_422[i] = 0x67A228A5L;
                l_422[0] |= (((safe_mod_func_int64_t_s_s(((*l_405) = 0L), ((*l_421) = (safe_rshift_func_uint16_t_u_u((l_408 , ((*g_182) = (((*l_401) |= 0x3CL) <= (safe_add_func_uint16_t_u_u(l_411, (((((*l_420) = ((g_52[0].f3 , (l_414 , (l_415 == g_417))) <= p_22)) <= 0UL) <= 4294967294UL) > g_419.f2)))))), 9))))) ^ 4294967289UL) , (***g_95));
                for (g_100 = 0; (g_100 >= 0); g_100 -= 1)
                { 
                    int i, j;
                    return l_375[g_100][g_100];
                }
            }
            else
            { 
                return g_73;
            }
            if (p_21)
                break;
            (*g_395) = l_423[1];
            l_324 |= (((void*)0 == l_424) != (l_326[1] &= (l_443 = (safe_mul_func_int8_t_s_s(((((safe_sub_func_int8_t_s_s(((((g_52[0].f0 ^ 0L) & (safe_mul_func_uint8_t_u_u(((g_440 |= (((void*)0 == l_431) , (safe_unary_minus_func_int64_t_s((((((((safe_mod_func_int32_t_s_s((l_438[0][0] |= ((*g_395) = (safe_sub_func_int8_t_s_s((~(*g_182)), g_75[0][2][6])))), p_24)) && 0x2DL) , (*g_395)) != 0xFFACCB4FL) < 0L) < g_75[1][0][5]) < 0UL))))) | p_21), g_52[0].f3))) == (-1L)) > (*g_182)), p_24)) == g_441) | 3L) , l_442), (-1L))))));
        }
        else
        { 
            uint64_t *l_465 = (void*)0;
            int32_t l_466 = (-3L);
            int32_t l_506 = (-1L);
            int32_t l_507 = 0x671C6B98L;
            int32_t l_508 = 0xE986F67EL;
            int32_t l_509 = (-7L);
            for (l_365 = 0; (l_365 <= 1); l_365 += 1)
            { 
                int64_t l_469 = 0x3C3B2AD67E0687BFLL;
                uint64_t *l_479 = &g_198;
                int32_t l_502 = (-1L);
                int32_t l_503 = 0xC0C62ABCL;
                int32_t l_504 = 0x6838746EL;
                int32_t l_505 = (-1L);
                uint64_t l_510 = 0x662EEB631B356A45LL;
                uint32_t *l_519[6][3][3] = {{{&g_419.f1,&g_52[0].f1,&g_52[0].f1},{&g_419.f1,&g_52[0].f1,&g_52[0].f1},{&g_419.f1,&g_419.f1,&g_52[0].f1}},{{&g_419.f1,&g_419.f1,(void*)0},{&g_419.f1,&g_419.f1,(void*)0},{&g_419.f1,&g_52[0].f1,&g_52[0].f1}},{{&g_419.f1,&g_52[0].f1,&g_52[0].f1},{&g_419.f1,&g_419.f1,&g_52[0].f1},{&g_419.f1,&g_419.f1,(void*)0}},{{&g_419.f1,&g_419.f1,(void*)0},{&g_419.f1,&g_52[0].f1,&g_52[0].f1},{&g_419.f1,&g_52[0].f1,&g_52[0].f1}},{{&g_419.f1,&g_419.f1,&g_52[0].f1},{&g_419.f1,&g_419.f1,(void*)0},{&g_419.f1,&g_419.f1,(void*)0}},{{&g_419.f1,&g_52[0].f1,&g_52[0].f1},{&g_419.f1,&g_52[0].f1,&g_52[0].f1},{&g_419.f1,&g_419.f1,&g_52[0].f1}}};
                uint32_t *l_520 = (void*)0;
                int i, j, k;
                for (l_370 = 1; (l_370 >= 0); l_370 -= 1)
                { 
                    int32_t *l_444 = &l_372;
                    (**l_386) = l_444;
                    if (p_21)
                        break;
                    (***l_390) = (0x167E3D1BL == (+((safe_mul_func_int16_t_s_s(0x9A58L, (18446744073709551615UL ^ ((safe_div_func_uint64_t_u_u((safe_sub_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_u(((*g_182)--), ((**g_417) , (((!((((safe_div_func_uint8_t_u_u((safe_add_func_int8_t_s_s((safe_div_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((&g_198 != l_465), (((((0xBC187AC4L >= p_24) >= p_24) , (***l_386)) < l_466) != 1L))), 0x69DBL)), l_467)), (-6L))) , g_100) < g_62) , 0x52L)) & g_52[0].f6) , p_22)))), p_20)), g_419.f1)) , (****l_389))))) || p_21)));
                }
                l_466 = g_468;
                if ((l_469 |= (*g_395)))
                { 
                    return l_466;
                }
                else
                { 
                    uint8_t *l_473 = (void*)0;
                    uint8_t *l_474 = &g_419.f6;
                    int32_t l_475 = 0x3E2073E9L;
                    l_475 = (!((*l_474) = (l_469 > (g_468 <= g_74))));
                    l_476 &= 0x306B4B0DL;
                }
                for (g_419.f1 = 0; (g_419.f1 <= 0); g_419.f1 += 1)
                { 
                    int16_t *l_480 = (void*)0;
                    int16_t *l_481 = (void*)0;
                    int16_t *l_482[3];
                    int32_t l_483 = (-1L);
                    int64_t *l_487 = (void*)0;
                    int64_t *l_488 = &l_374;
                    uint8_t *l_489 = &l_376;
                    uint8_t *l_500 = &g_52[0].f6;
                    int32_t l_501 = 0L;
                    uint32_t *l_513 = &l_467;
                    uint32_t *l_518[6][4][4] = {{{&g_52[0].f1,(void*)0,(void*)0,&g_52[0].f1},{&g_52[0].f1,(void*)0,&g_52[0].f1,(void*)0},{&g_52[0].f1,(void*)0,&g_52[0].f1,&g_52[0].f1},{(void*)0,(void*)0,&g_52[0].f1,&g_52[0].f1}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_52[0].f1,&g_52[0].f1,&g_419.f1},{(void*)0,(void*)0,&g_52[0].f1,&g_52[0].f1},{&g_52[0].f1,&g_52[0].f1,&g_52[0].f1,&g_52[0].f1}},{{&g_52[0].f1,(void*)0,(void*)0,&g_419.f1},{&g_52[0].f1,&g_52[0].f1,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&g_52[0].f1},{&g_52[0].f1,(void*)0,(void*)0,&g_52[0].f1}},{{&g_52[0].f1,(void*)0,&g_52[0].f1,(void*)0},{&g_52[0].f1,(void*)0,&g_52[0].f1,&g_52[0].f1},{(void*)0,(void*)0,&g_52[0].f1,&g_52[0].f1},{(void*)0,&g_52[0].f1,&g_52[0].f1,(void*)0}},{{(void*)0,(void*)0,&g_52[0].f1,(void*)0},{&g_52[0].f1,(void*)0,&g_52[0].f1,(void*)0},{&g_52[0].f1,&g_419.f1,&g_52[0].f1,(void*)0},{&g_52[0].f1,(void*)0,&g_52[0].f1,(void*)0}},{{&g_52[0].f1,(void*)0,(void*)0,(void*)0},{&g_52[0].f1,&g_52[0].f1,(void*)0,&g_52[0].f1},{&g_52[0].f1,&g_52[0].f1,&g_52[0].f1,(void*)0},{&g_52[0].f1,&g_52[0].f1,&g_52[0].f1,&g_52[0].f1}}};
                    uint32_t **l_517[1];
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_482[i] = &g_440;
                    for (i = 0; i < 1; i++)
                        l_517[i] = &l_518[3][2][0];
                    l_466 = ((safe_sub_func_uint16_t_u_u(((*g_182) = ((l_483 = (l_479 == &l_327)) , ((safe_add_func_int64_t_s_s(((*l_488) = (safe_unary_minus_func_int16_t_s(l_438[g_419.f1][(g_419.f1 + 1)]))), 0x527A29E6B39C141DLL)) || (l_501 |= (((*l_489) = l_438[g_419.f1][g_419.f1]) ^ (safe_lshift_func_int8_t_s_s((safe_add_func_uint8_t_u_u(((*l_500) |= (((safe_mod_func_uint32_t_u_u(((safe_mod_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u(p_23, p_23)), g_52[0].f2)) , p_21), p_21)) | 0xFD26B8B0L) , l_483)), g_52[0].f4)), 6))))))), g_419.f5)) , (-9L));
                    --l_510;
                    g_525 = (((*l_513)--) | (g_516[1] , (0x24L > (((l_519[2][0][2] = g_395) == l_520) >= (safe_lshift_func_int16_t_s_u(((((safe_sub_func_int8_t_s_s((0xA5L <= (&p_22 != (void*)0)), 0xB8L)) | 0x6C96L) != (-1L)) != l_509), p_20))))));
                }
            }
        }
        l_528--;
    }
    for (g_419.f2 = 0; (g_419.f2 > 37); g_419.f2++)
    { 
        struct S0 ***l_535 = &g_417;
        uint64_t *l_542 = &g_198;
        int32_t l_550 = (-9L);
        (*g_395) &= (18446744073709551615UL >= (((safe_add_func_int8_t_s_s(((void*)0 == l_535), 251UL)) && (safe_lshift_func_uint8_t_u_s((((safe_sub_func_int32_t_s_s((safe_add_func_uint64_t_u_u(((*l_542)++), ((safe_lshift_func_int16_t_s_u((l_547 | ((safe_rshift_func_uint16_t_u_u(1UL, l_550)) != 0xA6EAC713916A9D21LL)), p_20)) != l_550))), g_419.f4)) , l_551) , p_24), l_550))) > p_21));
    }
lbl_589:
    (*g_395) |= (safe_div_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(p_24, g_52[0].f1)), (((*l_556) ^= p_22) , (safe_mod_func_int8_t_s_s((p_20 <= p_22), (safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((g_564[3] = ((*l_563) = ((void*)0 == (*l_415)))), 2)), p_23)))))));
    if ((g_565 , l_326[1]))
    { 
        int32_t l_566[5][5] = {{0x1998246AL,0x66D84860L,(-1L),(-1L),0x66D84860L},{(-1L),0x2E8F13EDL,0xB80DF472L,0xB80DF472L,0x2E8F13EDL},{0x1998246AL,0x66D84860L,(-1L),(-1L),0x66D84860L},{(-1L),0x2E8F13EDL,0xB80DF472L,0xB80DF472L,0x2E8F13EDL},{0x1998246AL,0x66D84860L,(-1L),(-1L),0x66D84860L}};
        int32_t *l_567[2][4][4] = {{{&g_62,&l_551.f1,&g_62,&g_150[3][0]},{&g_62,&g_150[1][0],&g_150[3][0],&g_150[3][0]},{&l_551.f1,&l_551.f1,&l_551.f1,&g_150[1][0]},{&g_150[1][0],&g_62,&l_551.f1,&g_62}},{{&l_551.f1,&g_62,&g_150[3][0],&l_551.f1},{&g_62,&g_62,&g_62,&g_62},{&g_62,&g_62,&l_551.f1,&g_150[1][0]},{&g_62,&l_551.f1,&g_62,&g_150[3][0]}}};
        int32_t l_568[4] = {1L,1L,1L,1L};
        int i, j, k;
        --l_570;
        return l_573;
    }
    else
    { 
        int32_t l_578[1][2][4] = {{{0xD61359E6L,0xD61359E6L,0xD61359E6L,0xD61359E6L},{0xD61359E6L,0xD61359E6L,0xD61359E6L,0xD61359E6L}}};
        int32_t ****l_597 = &g_393;
        int8_t *l_600 = &g_52[0].f5;
        uint16_t **l_602[7];
        uint16_t ***l_601[2];
        int32_t l_604[4] = {(-1L),(-1L),(-1L),(-1L)};
        int i, j, k;
        for (i = 0; i < 7; i++)
            l_602[i] = &g_182;
        for (i = 0; i < 2; i++)
            l_601[i] = &l_602[6];
        (*g_395) ^= (safe_sub_func_uint32_t_u_u((((safe_mod_func_int16_t_s_s(p_21, l_578[0][0][3])) | (((((safe_lshift_func_int8_t_s_s((1UL ^ ((p_20 , (g_565.f0.f0 >= ((safe_div_func_int64_t_s_s((safe_div_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(p_20, ((*g_182) | 0xE9EFL))), (*g_182))), p_21)) , 0x7AD3L))) <= (*g_182))), g_52[0].f6)) , &l_415) == &l_415) , g_516[1].f2) > 0L)) | g_52[0].f5), p_23));
        if (p_22)
            goto lbl_589;
        l_604[0] &= (((*g_395) = ((((g_603 = (((safe_sub_func_uint64_t_u_u((l_578[0][0][0] , (!((*l_600) = ((safe_mod_func_int32_t_s_s(0x8F3EB4BBL, (***g_95))) , (((safe_mod_func_int16_t_s_s((l_597 == l_597), p_24)) > (safe_mod_func_int64_t_s_s((-1L), p_22))) == p_21))))), 0x373F044457B48881LL)) <= 0x1AL) , &g_182)) == &g_182) > (-1L)) > g_62)) , 0x12EFBE0CL);
    }
    return p_20;
}



static uint16_t  func_28(uint32_t  p_29, int32_t  p_30, uint8_t  p_31, uint64_t  p_32, int32_t  p_33)
{ 
    int8_t l_101[6] = {(-6L),0L,0L,(-6L),0L,0L};
    struct S0 *l_120 = &g_52[0];
    int32_t l_163[6] = {0xCE8995D8L,0xCE8995D8L,0xCE8995D8L,0xCE8995D8L,0xCE8995D8L,0xCE8995D8L};
    uint16_t *l_233 = &g_73;
    uint64_t l_235 = 0xF1FB673FCE317D50LL;
    int16_t l_247 = 0x1A34L;
    int i;
    for (p_32 = 0; (p_32 <= 2); p_32 += 1)
    { 
        uint32_t l_80 = 0x55FCA997L;
        uint16_t *l_87 = &g_52[0].f4;
        int8_t *l_98 = &g_52[0].f5;
        int8_t *l_99 = &g_100;
        struct S1 l_114 = {0x190EF9F6L,1UL,1UL,0x31468BD1L};
        int64_t l_118 = (-1L);
        int32_t l_145 = 2L;
        int32_t l_164 = 0x49CD5C75L;
        int32_t l_165 = 6L;
        const uint32_t l_187[1][7][5] = {{{0x2D50EB43L,9UL,18446744073709551615UL,1UL,5UL},{0xAC5C6483L,1UL,4UL,0x0534DAAFL,0x0534DAAFL},{0x2D50EB43L,0xF1A2F3BFL,0x2D50EB43L,4UL,0xD79A8471L},{0x257A5AC6L,0xF1A2F3BFL,18446744073709551607UL,0xAC5C6483L,9UL},{18446744073709551615UL,1UL,0x0534DAAFL,18446744073709551615UL,0x257A5AC6L},{0x76D4884FL,9UL,18446744073709551607UL,9UL,0x76D4884FL},{0xBC1F6797L,0xAC5C6483L,0x2D50EB43L,9UL,18446744073709551615UL}}};
        int8_t l_190 = 0xA5L;
        uint32_t l_242 = 1UL;
        int32_t l_254 = 8L;
        int32_t l_255 = 0x3094950BL;
        int32_t l_256 = 0xB6841CB1L;
        int32_t l_257[7];
        int16_t l_259 = 0x999CL;
        uint16_t l_260 = 65535UL;
        struct S0 **l_265 = &l_120;
        int i, j, k;
        for (i = 0; i < 7; i++)
            l_257[i] = 0x9AC96B20L;
    }
    return (*g_182);
}



static uint16_t  func_37(int32_t  p_38, uint32_t  p_39)
{ 
    int32_t *l_70 = (void*)0;
    int32_t **l_69 = &l_70;
    int32_t ***l_71 = &l_69;
    (*l_71) = l_69;
    return g_66;
}



static int32_t  func_40(int8_t  p_41, const uint64_t  p_42, uint32_t  p_43, struct S1  p_44, struct S0  p_45)
{ 
    int32_t *l_61 = &g_62;
    int32_t **l_63 = &l_61;
    int32_t l_64 = 8L;
    int32_t *l_65[3][5][2] = {{{&l_64,&g_62},{&g_62,&l_64},{&g_62,&g_62},{&g_62,&l_64},{&g_62,&g_62}},{{&l_64,&g_62},{&g_62,&l_64},{&g_62,&g_62},{&g_62,&l_64},{&g_62,&g_62}},{{&l_64,&g_62},{&g_62,&l_64},{&g_62,&g_62},{&g_62,&l_64},{&g_62,&g_62}}};
    int i, j, k;
    (*l_63) = l_61;
    ++g_66;
    return g_66;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_14, "g_14", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_52[i].f0, "g_52[i].f0", print_hash_value);
        transparent_crc(g_52[i].f1, "g_52[i].f1", print_hash_value);
        transparent_crc(g_52[i].f2, "g_52[i].f2", print_hash_value);
        transparent_crc(g_52[i].f3, "g_52[i].f3", print_hash_value);
        transparent_crc(g_52[i].f4, "g_52[i].f4", print_hash_value);
        transparent_crc(g_52[i].f5, "g_52[i].f5", print_hash_value);
        transparent_crc(g_52[i].f6, "g_52[i].f6", print_hash_value);

    }
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_75[i][j][k], "g_75[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_100, "g_100", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_150[i][j], "g_150[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_198, "g_198", print_hash_value);
    transparent_crc(g_258, "g_258", print_hash_value);
    transparent_crc(g_359, "g_359", print_hash_value);
    transparent_crc(g_419.f0, "g_419.f0", print_hash_value);
    transparent_crc(g_419.f1, "g_419.f1", print_hash_value);
    transparent_crc(g_419.f2, "g_419.f2", print_hash_value);
    transparent_crc(g_419.f3, "g_419.f3", print_hash_value);
    transparent_crc(g_419.f4, "g_419.f4", print_hash_value);
    transparent_crc(g_419.f5, "g_419.f5", print_hash_value);
    transparent_crc(g_419.f6, "g_419.f6", print_hash_value);
    transparent_crc(g_440, "g_440", print_hash_value);
    transparent_crc(g_441, "g_441", print_hash_value);
    transparent_crc(g_468, "g_468", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_516[i].f0, "g_516[i].f0", print_hash_value);
        transparent_crc(g_516[i].f1, "g_516[i].f1", print_hash_value);
        transparent_crc(g_516[i].f2, "g_516[i].f2", print_hash_value);
        transparent_crc(g_516[i].f3, "g_516[i].f3", print_hash_value);

    }
    transparent_crc(g_525, "g_525", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_564[i], "g_564[i]", print_hash_value);

    }
    transparent_crc(g_565.f0.f0, "g_565.f0.f0", print_hash_value);
    transparent_crc(g_565.f0.f1, "g_565.f0.f1", print_hash_value);
    transparent_crc(g_565.f0.f2, "g_565.f0.f2", print_hash_value);
    transparent_crc(g_565.f0.f3, "g_565.f0.f3", print_hash_value);
    transparent_crc(g_565.f1, "g_565.f1", print_hash_value);
    transparent_crc(g_607, "g_607", print_hash_value);
    transparent_crc(g_677, "g_677", print_hash_value);
    transparent_crc(g_685, "g_685", print_hash_value);
    transparent_crc(g_744, "g_744", print_hash_value);
    transparent_crc(g_796.f0.f0, "g_796.f0.f0", print_hash_value);
    transparent_crc(g_796.f0.f1, "g_796.f0.f1", print_hash_value);
    transparent_crc(g_796.f0.f2, "g_796.f0.f2", print_hash_value);
    transparent_crc(g_796.f0.f3, "g_796.f0.f3", print_hash_value);
    transparent_crc(g_796.f1, "g_796.f1", print_hash_value);
    transparent_crc(g_800.f0.f0, "g_800.f0.f0", print_hash_value);
    transparent_crc(g_800.f0.f1, "g_800.f0.f1", print_hash_value);
    transparent_crc(g_800.f0.f2, "g_800.f0.f2", print_hash_value);
    transparent_crc(g_800.f0.f3, "g_800.f0.f3", print_hash_value);
    transparent_crc(g_800.f1, "g_800.f1", print_hash_value);
    transparent_crc(g_855.f0, "g_855.f0", print_hash_value);
    transparent_crc(g_855.f1, "g_855.f1", print_hash_value);
    transparent_crc(g_855.f2, "g_855.f2", print_hash_value);
    transparent_crc(g_855.f3, "g_855.f3", print_hash_value);
    transparent_crc(g_882, "g_882", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1004[i], "g_1004[i]", print_hash_value);

    }
    transparent_crc(g_1170.f0, "g_1170.f0", print_hash_value);
    transparent_crc(g_1170.f1, "g_1170.f1", print_hash_value);
    transparent_crc(g_1170.f2, "g_1170.f2", print_hash_value);
    transparent_crc(g_1170.f3, "g_1170.f3", print_hash_value);
    transparent_crc(g_1170.f4, "g_1170.f4", print_hash_value);
    transparent_crc(g_1170.f5, "g_1170.f5", print_hash_value);
    transparent_crc(g_1170.f6, "g_1170.f6", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
