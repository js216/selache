// SPDX-License-Identifier: MIT
// cctest_csmith_61890428.c --- cctest case csmith_61890428 (csmith seed 1636369448)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x1352fec */
/* @exp_ticks 0x521c */

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

// Options:   -s 1636369448 -o /tmp/csmith_gen_t12mryp7/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int8_t  f0;
   const int32_t  f1;
   int32_t  f2;
   uint64_t  f3;
   int32_t  f4;
};

struct S1 {
   const uint64_t  f0;
   uint8_t  f1;
   uint32_t  f2;
   const uint16_t  f3;
};

union U2 {
   int32_t  f0;
   int16_t  f1;
   uint32_t  f2;
   uint32_t  f3;
};


static int8_t g_4 = 1L;
static uint32_t g_14 = 0x7F39CEE2L;
static uint32_t g_17 = 18446744073709551608UL;
static union U2 g_33[4] = {{1L},{1L},{1L},{1L}};
static int16_t g_38[2][1][2] = {{{0xF603L,0xF603L}},{{0xF603L,0xF603L}}};
static int64_t g_41 = 0x42EE1E3C1DC0AC77LL;
static uint8_t g_42 = 0xBEL;
static struct S0 g_48[3][1][3] = {{{{-5L,0x67A065BBL,5L,0x2923F8C0E5C5CC99LL,-1L},{0L,0x57C1F20CL,0x68020C28L,0x8A0E7B2E1D86E6AFLL,1L},{0L,0x57C1F20CL,0x68020C28L,0x8A0E7B2E1D86E6AFLL,1L}}},{{{-5L,0x67A065BBL,5L,0x2923F8C0E5C5CC99LL,-1L},{0L,0x57C1F20CL,0x68020C28L,0x8A0E7B2E1D86E6AFLL,1L},{0L,0x57C1F20CL,0x68020C28L,0x8A0E7B2E1D86E6AFLL,1L}}},{{{-5L,0x67A065BBL,5L,0x2923F8C0E5C5CC99LL,-1L},{0L,0x57C1F20CL,0x68020C28L,0x8A0E7B2E1D86E6AFLL,1L},{0L,0x57C1F20CL,0x68020C28L,0x8A0E7B2E1D86E6AFLL,1L}}}};
static int16_t g_82 = 0x1335L;
static uint64_t g_85[4][4][2] = {{{0x56265DC7DF6318FFLL,0xCB50322C85E55DFCLL},{18446744073709551607UL,0xBCB137123A7432CFLL},{18446744073709551607UL,0xCB50322C85E55DFCLL},{0x56265DC7DF6318FFLL,0x56265DC7DF6318FFLL}},{{0xCB50322C85E55DFCLL,18446744073709551607UL},{0xBCB137123A7432CFLL,18446744073709551607UL},{0xCB50322C85E55DFCLL,0x56265DC7DF6318FFLL},{0x56265DC7DF6318FFLL,0xCB50322C85E55DFCLL}},{{18446744073709551607UL,0xBCB137123A7432CFLL},{18446744073709551607UL,0xCB50322C85E55DFCLL},{0x56265DC7DF6318FFLL,0x56265DC7DF6318FFLL},{0xCB50322C85E55DFCLL,18446744073709551607UL}},{{0xBCB137123A7432CFLL,18446744073709551607UL},{0xCB50322C85E55DFCLL,0x56265DC7DF6318FFLL},{0x56265DC7DF6318FFLL,0xBCB137123A7432CFLL},{0xCB50322C85E55DFCLL,0UL}}};
static const struct S1 g_165 = {0UL,0xEEL,1UL,65531UL};
static int32_t g_170 = 0xDD7FD481L;
static uint32_t g_171[2] = {4294967294UL,4294967294UL};
static int32_t g_178 = 7L;
static struct S1 g_208 = {0xF0B5030AC00ABAC2LL,0UL,0x5BBCD160L,0x3313L};
static int32_t g_282 = 0x4F9F1FA6L;
static uint64_t g_285 = 18446744073709551612UL;
static int16_t g_296 = (-4L);
static uint32_t g_327 = 0UL;
static int32_t g_357 = 0xA8F85E5CL;
static uint32_t g_362 = 1UL;
static int64_t g_398 = 0x301F7C64EC25BE30LL;



static const uint32_t  func_1(void);
static uint64_t  func_5(const int8_t  p_6, uint8_t  p_7, int64_t  p_8);
static int8_t  func_28(const uint16_t  p_29, union U2  p_30, int8_t  p_31, int8_t  p_32);
static struct S0  func_36(int32_t  p_37);




static const uint32_t  func_1(void)
{ 
    uint64_t l_11 = 0x495761BE360DE574LL;
    int32_t l_12 = (-1L);
    int32_t l_13 = 0x63EC58F5L;
    struct S1 l_215 = {18446744073709551615UL,0x5DL,0UL,6UL};
    uint32_t l_241[1];
    int32_t l_319[2][5][2] = {{{0L,0x975902A8L},{0xA408D92DL,0x8403408BL},{0x82092190L,0x82092190L},{0L,0x82092190L},{0x82092190L,0x8403408BL}},{{0xA408D92DL,0x975902A8L},{0L,0xA408D92DL},{0x975902A8L,0x8403408BL},{0x975902A8L,0xA408D92DL},{0L,0x975902A8L}}};
    int32_t l_339 = 0x4BBDFA2EL;
    int16_t l_396 = 0x3A66L;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_241[i] = 9UL;
    if ((((g_17 = ((g_4 < (((((((func_5(g_4, (((g_14 = (l_13 = (0x4C924B541145714FLL > ((safe_div_func_uint64_t_u_u((l_12 = l_11), 18446744073709551615UL)) != l_11)))) , 0x2EL) && g_4), l_11) || g_14) , 0UL) >= g_4) <= g_4) || 0xB2C4EB0AL) | 4UL) != g_4)) < g_4)) == l_11) <= g_4))
    { 
        int32_t l_23 = 0x33D73C12L;
        uint16_t l_34 = 65535UL;
        int16_t l_220 = 0xCC7AL;
        int32_t l_261 = 1L;
        int32_t l_297[3][3][4] = {{{0x70AF4106L,0x9779F3C6L,0x70AF4106L,0x9779F3C6L},{0x70AF4106L,0x9779F3C6L,0x70AF4106L,0x9779F3C6L},{0x70AF4106L,0x9779F3C6L,0x70AF4106L,0x9779F3C6L}},{{0x70AF4106L,0x9779F3C6L,0x70AF4106L,0x9779F3C6L},{0x70AF4106L,0x9779F3C6L,0x70AF4106L,0x9779F3C6L},{0x70AF4106L,0x9779F3C6L,0x70AF4106L,0x9779F3C6L}},{{0x70AF4106L,0x9779F3C6L,0x70AF4106L,0x9779F3C6L},{0x70AF4106L,0x9779F3C6L,0x70AF4106L,0x9779F3C6L},{0x70AF4106L,0x9779F3C6L,0x70AF4106L,0x9779F3C6L}}};
        const union U2 l_310[5][4][2] = {{{{0x71A296F1L},{0x615BDB47L}},{{-7L},{-7L}},{{0x3B475195L},{-7L}},{{-7L},{0x615BDB47L}}},{{{0x71A296F1L},{0x27264FA5L}},{{0x3B475195L},{0x71A296F1L}},{{0x27264FA5L},{0x615BDB47L}},{{0x27264FA5L},{0x71A296F1L}}},{{{0x3B475195L},{0x27264FA5L}},{{0x71A296F1L},{0x615BDB47L}},{{-7L},{-7L}},{{0x3B475195L},{-7L}}},{{{-7L},{0x615BDB47L}},{{0x71A296F1L},{0x27264FA5L}},{{0x3B475195L},{0x71A296F1L}},{{0x27264FA5L},{0x615BDB47L}}},{{{0x27264FA5L},{0x71A296F1L}},{{0x3B475195L},{0x27264FA5L}},{{0x71A296F1L},{0x615BDB47L}},{{-7L},{-7L}}}};
        int16_t l_350 = (-10L);
        uint32_t l_395 = 4294967293UL;
        int i, j, k;
        if ((((((safe_div_func_uint8_t_u_u((!(g_4 = g_14)), (safe_div_func_int16_t_s_s(l_23, l_23)))) ^ (safe_mul_func_uint16_t_u_u((((safe_mod_func_int32_t_s_s((((func_28(l_11, g_33[0], l_12, l_34) & g_48[0][0][0].f2) >= l_13) && l_12), l_11)) < (-1L)) >= l_23), 9L))) < g_165.f3) , g_82) ^ l_34))
        { 
            int32_t l_238 = 0xC41774F4L;
            int32_t l_242 = 0xCB01C2EBL;
            int16_t l_247 = (-4L);
lbl_257:
            if (g_38[1][0][0])
            { 
                l_12 |= ((g_171[1] ^= (!(safe_rshift_func_uint8_t_u_s((l_34 , (safe_sub_func_int64_t_s_s((l_215 , (((l_13 = (safe_sub_func_uint8_t_u_u(g_38[1][0][0], (safe_div_func_uint32_t_u_u(g_208.f3, g_14))))) <= 0x9C14L) & g_165.f0)), l_220))), 2)))) , g_208.f0);
                return g_48[0][0][0].f1;
            }
            else
            { 
                int32_t l_235 = 0x85434852L;
                l_242 = ((safe_rshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_s(((safe_sub_func_uint64_t_u_u((safe_mod_func_uint16_t_u_u((safe_div_func_int16_t_s_s((((((l_13 = (safe_rshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(l_235, (safe_add_func_uint32_t_u_u((l_238 >= l_220), ((safe_rshift_func_uint16_t_u_u(((((func_36(g_14) , g_42) == g_48[0][0][0].f3) < 0xE955L) > (-9L)), 6)) >= g_208.f3))))), l_215.f2))) > 3UL) != g_208.f0) , l_13) <= l_23), 1UL)), g_208.f0)), l_235)) <= l_238), g_208.f3)), l_241[0])) != g_48[0][0][0].f3);
            }
            for (l_12 = (-8); (l_12 <= (-27)); l_12 = safe_sub_func_uint8_t_u_u(l_12, 5))
            { 
                uint32_t l_254[1][2];
                int32_t l_255 = 0L;
                int32_t l_256 = 0xA3EBE082L;
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_254[i][j] = 4UL;
                }
                if (l_23)
                    break;
                l_256 = (g_33[0].f0 = ((((l_242 || (l_247 < 0x852C9F556B58E442LL)) > ((safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((((safe_div_func_uint64_t_u_u((g_85[1][3][1] = (l_254[0][0] >= l_255)), 0x284081ED5E969112LL)) >= g_208.f2) >= l_254[0][0]), 0UL)), g_33[0].f1)) >= l_247)) == 0UL) && l_11));
                if (l_13)
                    goto lbl_257;
            }
        }
        else
        { 
            uint32_t l_260[1][2];
            int32_t l_266 = (-2L);
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_260[i][j] = 4294967295UL;
            }
            l_23 = ((safe_rshift_func_uint8_t_u_u(l_260[0][0], 4)) == (l_261 = l_23));
            l_23 ^= (((g_33[0].f1 < (safe_add_func_int64_t_s_s((l_260[0][1] & (safe_div_func_int64_t_s_s((-8L), (l_12 = (g_85[2][3][0] = l_220))))), l_266))) >= 0x0FDED41F1B08C51ELL) ^ 0x54678E96L);
            if ((l_266 ^ (safe_lshift_func_int16_t_s_u(g_171[1], 11))))
            { 
                int64_t l_269 = (-1L);
                int32_t l_283 = 0xC9E143BAL;
                int32_t l_284 = 0x004B4608L;
                l_269 = 0x7552E8ABL;
                g_33[0].f0 = (safe_mul_func_uint8_t_u_u(g_33[0].f2, ((safe_rshift_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(g_165.f0, ((safe_rshift_func_uint8_t_u_s(g_208.f0, g_208.f0)) >= g_165.f1))), 8)) < g_171[0])));
                l_297[0][2][2] = (l_23 = (g_171[0] >= ((safe_mod_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u(((--g_285) , ((((safe_mod_func_uint32_t_u_u(g_208.f1, (safe_rshift_func_int16_t_s_u(((((safe_rshift_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u((g_42 ^= (((-1L) >= l_34) >= 0UL)), 2UL)) , g_165.f1), l_34)) , g_33[0].f3) | l_34) ^ g_178), l_260[0][0])))) <= g_296) > 0x7DL) != l_215.f3)), g_33[0].f3)) != l_266), 0xA250L)) < g_48[0][0][0].f0)));
            }
            else
            { 
                uint64_t l_298 = 0xE878FDA2760C7681LL;
                l_298--;
            }
        }
        if (((0x3DBDL || ((safe_div_func_uint16_t_u_u(((((safe_lshift_func_uint16_t_u_s((~(((safe_mod_func_int16_t_s_s((safe_mul_func_int8_t_s_s((l_310[0][2][0] , (safe_mod_func_uint32_t_u_u(((safe_div_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((g_48[0][0][0] , 0UL), g_285)), g_48[0][0][0].f2)) , 0xB34EFDB9L), l_215.f0))), g_38[1][0][1])), 1UL)) , g_33[2]) , 0x0E8798E1627D1067LL)), l_12)) | g_38[1][0][1]) , 0x66L) != 0x81L), l_215.f0)) , l_261)) > l_215.f3))
        { 
            uint32_t l_322 = 0xBF9705C1L;
            for (l_261 = (-12); (l_261 >= (-8)); l_261++)
            { 
                int16_t l_320 = (-1L);
                int32_t l_321 = 1L;
                l_319[1][0][0] &= l_241[0];
                ++l_322;
            }
        }
        else
        { 
            int16_t l_325 = 7L;
            int32_t l_326 = 7L;
            g_327++;
            if (g_4)
                goto lbl_330;
lbl_330:
            l_326 &= (-1L);
            g_282 = l_310[0][2][0].f1;
        }
        if ((g_282 = (safe_sub_func_int16_t_s_s(g_282, g_327))))
        { 
            uint32_t l_361 = 7UL;
            for (l_12 = 0; (l_12 != 17); ++l_12)
            { 
                uint8_t l_358 = 0xFEL;
                g_282 = (((l_339 = (safe_lshift_func_uint16_t_u_u((l_310[0][2][0].f2 ^ (l_319[1][0][0] = g_85[0][2][0])), ((((-8L) && l_215.f1) != 0UL) || l_215.f0)))) < g_42) > 0x9B05E94A68FEA37FLL);
                g_357 &= (safe_mul_func_uint16_t_u_u(l_13, ((safe_div_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s(l_350, (safe_sub_func_int8_t_s_s(l_23, (safe_sub_func_uint16_t_u_u((safe_div_func_uint8_t_u_u((((g_178 || g_48[0][0][0].f2) == 0xD7L) || g_33[0].f2), g_165.f3)), g_85[1][1][1])))))), 5)), g_282)), l_215.f3)) > 0UL)));
                l_358++;
            }
            l_361 |= (g_33[0].f3 || l_310[0][2][0].f3);
            g_282 &= (g_85[0][1][0] == g_165.f3);
        }
        else
        { 
            int32_t l_367 = (-2L);
            --g_362;
            for (l_339 = 0; (l_339 > (-29)); l_339 = safe_sub_func_int16_t_s_s(l_339, 5))
            { 
                const int64_t l_370[2][5][2] = {{{0x6925B1CE934E2D67LL,0x6925B1CE934E2D67LL},{0x6925B1CE934E2D67LL,0x6925B1CE934E2D67LL},{0x6925B1CE934E2D67LL,0x6925B1CE934E2D67LL},{0x6925B1CE934E2D67LL,0x6925B1CE934E2D67LL},{0x6925B1CE934E2D67LL,0x6925B1CE934E2D67LL}},{{0x6925B1CE934E2D67LL,0x6925B1CE934E2D67LL},{0x6925B1CE934E2D67LL,0x6925B1CE934E2D67LL},{0x6925B1CE934E2D67LL,0x6925B1CE934E2D67LL},{0x6925B1CE934E2D67LL,0x6925B1CE934E2D67LL},{0x6925B1CE934E2D67LL,0x6925B1CE934E2D67LL}}};
                int32_t l_375 = 0xD83D5187L;
                int i, j, k;
                l_367 = 0x5F5E08FBL;
                l_297[2][0][2] = ((((((safe_lshift_func_uint8_t_u_u((l_370[1][4][1] && (safe_rshift_func_uint16_t_u_s((g_170 , 0xE5B9L), (l_23 = (-1L))))), g_208.f2)) & g_14) == g_208.f1) == 0xA8A3E8C22AD4DA4ALL) < 0x1B3A266CB6D5B299LL) | l_367);
                g_33[0].f0 = (safe_mod_func_uint64_t_u_u((l_375 = (g_285 = g_33[0].f1)), 0x18FFB8DD5268C0C0LL));
            }
            for (l_215.f2 = 0; (l_215.f2 <= 1); l_215.f2 += 1)
            { 
                uint32_t l_397 = 4294967295UL;
                g_398 &= (safe_add_func_uint8_t_u_u((safe_div_func_int16_t_s_s(((g_33[0].f3 | ((safe_mod_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u((((safe_sub_func_int16_t_s_s((+(((safe_sub_func_int16_t_s_s(1L, (((g_82 = ((safe_rshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s(((((((l_241[0] > 7L) || g_282) ^ l_310[0][2][0].f0) | g_48[0][0][0].f2) ^ 0xBF14L) , g_208.f3), l_319[1][3][1])), l_34)) == l_367)) > g_165.f1) ^ l_367))) , (-9L)) > l_395)), g_85[2][3][0])) == g_208.f2) & l_367), g_296)) < l_396), l_367)) == 0x1FE83854L)) <= (-4L)), l_397)), 0xD6L));
            }
        }
    }
    else
    { 
        uint8_t l_399 = 0x13L;
        int32_t l_400 = 0xFFB7BE2BL;
        l_319[1][0][0] |= (l_13 = l_399);
        l_400 |= (g_33[0].f0 = 1L);
        g_282 = 0xCDC07732L;
    }
    return l_12;
}



static uint64_t  func_5(const int8_t  p_6, uint8_t  p_7, int64_t  p_8)
{ 
    uint16_t l_15 = 7UL;
    int32_t l_16 = 0x81DDA8DBL;
    l_16 = (l_15 |= p_6);
    return g_4;
}



static int8_t  func_28(const uint16_t  p_29, union U2  p_30, int8_t  p_31, int8_t  p_32)
{ 
    uint32_t l_35 = 4294967295UL;
    int32_t l_61 = 0x1342F278L;
    int32_t l_135 = 3L;
    uint64_t l_137 = 1UL;
    const uint8_t l_177 = 1UL;
    struct S0 l_209[5] = {{0xB9L,0L,0x0D85DCC5L,0x15B4C5A253C7AF3FLL,6L},{0xB9L,0L,0x0D85DCC5L,0x15B4C5A253C7AF3FLL,6L},{0xB9L,0L,0x0D85DCC5L,0x15B4C5A253C7AF3FLL,6L},{0xB9L,0L,0x0D85DCC5L,0x15B4C5A253C7AF3FLL,6L},{0xB9L,0L,0x0D85DCC5L,0x15B4C5A253C7AF3FLL,6L}};
    int i;
    if (l_35)
    { 
        struct S0 l_51[2][2] = {{{0x17L,-1L,0x6DE1F29AL,1UL,0L},{0x17L,-1L,0x6DE1F29AL,1UL,0L}},{{0x17L,-1L,0x6DE1F29AL,1UL,0L},{0x17L,-1L,0x6DE1F29AL,1UL,0L}}};
        int i, j;
        if ((func_36(p_31) , ((p_30.f0 = (safe_mod_func_int64_t_s_s((-10L), (l_51[1][1] , g_48[0][0][0].f1)))) , 4L)))
        { 
            for (p_30.f0 = 8; (p_30.f0 >= 21); p_30.f0 = safe_add_func_uint64_t_u_u(p_30.f0, 1))
            { 
                int64_t l_60 = (-1L);
                g_33[0].f0 = (safe_sub_func_int32_t_s_s(g_48[0][0][0].f4, (p_30.f0 != (((safe_sub_func_uint64_t_u_u(((safe_div_func_uint8_t_u_u((l_60 | g_48[0][0][0].f2), 0xA6L)) | g_38[1][0][1]), p_31)) & 0xA1986173L) | g_41))));
            }
            return g_41;
        }
        else
        { 
            uint16_t l_62 = 0x4208L;
            l_62++;
        }
        g_33[0].f0 = p_30.f1;
    }
    else
    { 
        const int64_t l_81 = 0x4C54CFDD0FD02F95LL;
        uint32_t l_83 = 0x650DEC7DL;
        int32_t l_84[1][5][3] = {{{5L,5L,5L},{0x610DA34DL,0x6D3DFDFBL,0x610DA34DL},{5L,5L,5L},{0x610DA34DL,0x6D3DFDFBL,0x610DA34DL},{5L,5L,5L}}};
        int i, j, k;
        if ((p_30.f0 = ((safe_add_func_int64_t_s_s(((safe_mul_func_int16_t_s_s(((safe_div_func_int32_t_s_s(0x804E64A2L, ((safe_mul_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((((-9L) == (safe_add_func_int64_t_s_s(((l_61 ^ ((safe_sub_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((0x7E6D0914L <= 0x6B41A241L), 0)), 0x74122609L)) >= l_81)) > 4L), g_82))) || l_83), p_29)), 1UL)) ^ 9UL))) || l_83), l_81)) & l_61), g_38[1][0][0])) > 0xA3A0L)))
        { 
            ++g_85[2][3][0];
        }
        else
        { 
            int64_t l_90 = 0xCBF8205C77F51BCBLL;
            int32_t l_101[1][4][3] = {{{0x911A91DCL,0x911A91DCL,0x911A91DCL},{0xF75AEE60L,0xF75AEE60L,0xF75AEE60L},{0x911A91DCL,0x911A91DCL,0x911A91DCL},{0xF75AEE60L,0xF75AEE60L,0xF75AEE60L}}};
            int i, j, k;
            l_101[0][2][2] = ((((safe_div_func_uint64_t_u_u(l_90, (safe_sub_func_uint16_t_u_u((((((l_84[0][1][0] = ((safe_div_func_int64_t_s_s((safe_rshift_func_int8_t_s_s((g_48[0][0][0].f2 != (safe_rshift_func_uint16_t_u_s(p_31, 0))), 5)), (safe_rshift_func_uint16_t_u_s(l_83, 14)))) == p_29)) || 0UL) , p_29) != 1UL) | l_81), g_38[1][0][0])))) <= p_30.f0) | 0L) , p_30.f0);
        }
        if (p_31)
            goto lbl_205;
        return l_84[0][1][0];
    }
lbl_205:
    if ((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_u(((g_48[0][0][0].f2 || ((0x0EF1L != g_33[0].f2) ^ ((g_38[1][0][1] = (func_36((safe_add_func_int32_t_s_s(((safe_div_func_uint64_t_u_u((l_61 ^= ((l_35 == g_38[1][0][0]) && g_33[0].f0)), g_48[0][0][0].f1)) & 4294967295UL), 0UL))) , g_38[0][0][1])) != l_35))) || p_30.f3), 15)), 1)))
    { 
        int16_t l_122 = 0xD75BL;
        int32_t l_148[2];
        int16_t l_155 = 0L;
        int i;
        for (i = 0; i < 2; i++)
            l_148[i] = (-1L);
        for (l_61 = 0; (l_61 <= 3); l_61 += 1)
        { 
            int8_t l_112[2][5] = {{(-8L),5L,(-8L),0x61L,0x61L},{(-8L),5L,(-8L),0x61L,0x61L}};
            int i, j;
            for (g_82 = 0; (g_82 <= 3); g_82 += 1)
            { 
                int8_t l_121[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_121[i] = (-1L);
                l_112[0][3] = (-2L);
                l_122 = ((safe_div_func_uint64_t_u_u((((safe_sub_func_uint16_t_u_u((safe_add_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(0UL, 0UL)), 0L)), (g_33[0].f1 | 0x72F119E3L))) <= p_30.f2) , p_30.f1), l_121[0])) >= 0x394FL);
                if (g_85[0][1][0])
                    break;
            }
            for (l_122 = 3; (l_122 >= 0); l_122 -= 1)
            { 
                g_33[0].f0 = (safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u((l_135 |= (safe_mul_func_uint8_t_u_u(((((safe_lshift_func_uint16_t_u_u((g_33[0].f3 ^ l_61), 0)) < ((((safe_sub_func_uint32_t_u_u(g_33[0].f1, (safe_lshift_func_int8_t_s_s((g_14 != 0x71259696208B9B0ALL), 1)))) , p_29) == g_33[0].f2) && l_122)) , g_33[0].f3) != p_30.f1), p_30.f1))), 8)), 0x85D13469L));
                g_33[0].f0 = (g_33[0].f3 != g_85[0][0][0]);
            }
        }
        if ((!(g_38[0][0][0] ^= 0x0655L)))
        { 
            uint32_t l_147 = 0x9F3E2763L;
            l_137++;
            for (p_30.f0 = 0; (p_30.f0 < 24); ++p_30.f0)
            { 
                int64_t l_146 = 3L;
                if (g_85[2][1][0])
                    break;
                l_135 = 0x0DD118ECL;
                l_148[0] = (safe_mod_func_int8_t_s_s((p_30.f3 , g_33[0].f0), ((safe_div_func_uint8_t_u_u(l_146, (l_147 && 65535UL))) | 0x374A045A3BC6B9C5LL)));
            }
        }
        else
        { 
            p_30.f0 ^= ((safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((((g_48[0][0][0].f4 <= (65535UL <= l_155)) | (0x48EBA309L > 0xBAA6E91FL)) , l_35), 0)), 0x2FA6L)) , g_82);
            return p_29;
        }
    }
    else
    { 
        int32_t l_160[1];
        int32_t l_169 = 1L;
        int32_t l_189 = 0L;
        union U2 l_195 = {0x09B283B4L};
        int i;
        for (i = 0; i < 1; i++)
            l_160[i] = 0xC3A41A2CL;
        if ((g_48[1][0][1] , (safe_div_func_int64_t_s_s((l_135 = ((safe_mul_func_uint8_t_u_u(p_30.f2, l_160[0])) , (g_41 = 1L))), l_160[0]))))
        { 
            uint32_t l_168 = 18446744073709551606UL;
            int32_t l_174[4] = {0x999F76DDL,0x999F76DDL,0x999F76DDL,0x999F76DDL};
            int i;
            for (p_30.f3 = 0; (p_30.f3 <= 1); p_30.f3 += 1)
            { 
                l_168 |= ((safe_mul_func_uint16_t_u_u(0xEBB8L, ((g_33[0].f3--) || (g_165 , (g_33[0].f2 = p_32))))) != (++g_48[0][0][0].f3));
                g_171[1]++;
                if (g_165.f1)
                    break;
            }
            l_174[3] = p_30.f0;
        }
        else
        { 
            for (g_170 = (-4); (g_170 <= (-27)); g_170--)
            { 
                p_30.f0 = g_85[3][3][0];
                g_178 |= (g_33[0].f0 = (l_177 & p_30.f1));
            }
            l_189 &= ((safe_div_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(l_169, (((safe_sub_func_uint8_t_u_u((p_32 || 0x2CL), (g_38[1][0][0] && p_29))) , 0x75E3L) , 65527UL))), 4)) , 0x57L), 0x3BL)), l_169)) && 0xA5BBF8F4250F7268LL);
        }
        g_33[0].f0 = (safe_rshift_func_uint8_t_u_s((safe_div_func_int64_t_s_s(((g_41 , ((((l_160[0] >= (l_61 = ((+(l_195 , (l_189 = (l_135 & g_165.f0)))) && g_33[0].f0))) , 250UL) | l_35) , g_33[0].f2)) < g_171[0]), p_31)), p_32));
        l_195.f0 = (g_33[0].f0 = ((safe_lshift_func_int16_t_s_s((((safe_sub_func_int8_t_s_s((+p_29), ((safe_sub_func_int8_t_s_s(g_171[1], l_195.f3)) || ((((((-1L) || l_177) | g_42) | 0x0336C129L) >= g_41) > g_165.f1)))) != l_61) <= p_30.f2), 1)) | 0x1BL));
    }
    l_135 |= (func_36((safe_add_func_uint32_t_u_u(((g_208 , (0x5BDD16FCL != ((l_61 = (((l_209[1] , p_30.f0) > 4294967295UL) <= (-1L))) < p_31))) ^ l_177), 0x91520A11L))) , l_177);
    return g_178;
}



static struct S0  func_36(int32_t  p_37)
{ 
    int16_t l_39 = 0x8791L;
    int32_t l_40[5][2] = {{1L,(-10L)},{1L,1L},{1L,(-10L)},{1L,0x19116590L},{(-10L),0x19116590L}};
    uint8_t l_45 = 5UL;
    int i, j;
    ++g_42;
    ++l_45;
    return g_48[0][0][0];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_33[i].f0, "g_33[i].f0", print_hash_value);
        transparent_crc(g_33[i].f1, "g_33[i].f1", print_hash_value);
        transparent_crc(g_33[i].f2, "g_33[i].f2", print_hash_value);
        transparent_crc(g_33[i].f3, "g_33[i].f3", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_38[i][j][k], "g_38[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_48[i][j][k].f0, "g_48[i][j][k].f0", print_hash_value);
                transparent_crc(g_48[i][j][k].f1, "g_48[i][j][k].f1", print_hash_value);
                transparent_crc(g_48[i][j][k].f2, "g_48[i][j][k].f2", print_hash_value);
                transparent_crc(g_48[i][j][k].f3, "g_48[i][j][k].f3", print_hash_value);
                transparent_crc(g_48[i][j][k].f4, "g_48[i][j][k].f4", print_hash_value);

            }
        }
    }
    transparent_crc(g_82, "g_82", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_85[i][j][k], "g_85[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_165.f0, "g_165.f0", print_hash_value);
    transparent_crc(g_165.f1, "g_165.f1", print_hash_value);
    transparent_crc(g_165.f2, "g_165.f2", print_hash_value);
    transparent_crc(g_165.f3, "g_165.f3", print_hash_value);
    transparent_crc(g_170, "g_170", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_171[i], "g_171[i]", print_hash_value);

    }
    transparent_crc(g_178, "g_178", print_hash_value);
    transparent_crc(g_208.f0, "g_208.f0", print_hash_value);
    transparent_crc(g_208.f1, "g_208.f1", print_hash_value);
    transparent_crc(g_208.f2, "g_208.f2", print_hash_value);
    transparent_crc(g_208.f3, "g_208.f3", print_hash_value);
    transparent_crc(g_282, "g_282", print_hash_value);
    transparent_crc(g_285, "g_285", print_hash_value);
    transparent_crc(g_296, "g_296", print_hash_value);
    transparent_crc(g_327, "g_327", print_hash_value);
    transparent_crc(g_357, "g_357", print_hash_value);
    transparent_crc(g_362, "g_362", print_hash_value);
    transparent_crc(g_398, "g_398", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
