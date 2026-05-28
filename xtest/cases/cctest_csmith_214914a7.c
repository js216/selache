// SPDX-License-Identifier: MIT
// cctest_csmith_214914a7.c --- cctest case csmith_214914a7 (csmith seed 558437543)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xc312cea7 */
/* @exp_ticks 0x40af */

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

// Options:   -s 558437543 -o /tmp/csmith_gen_u2pbdpbu/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int16_t  f0;
};

struct S1 {
   const int8_t  f0;
   uint16_t  f1;
   uint16_t  f2;
   int8_t  f3;
   int32_t  f4;
};

struct S2 {
   const uint16_t  f0;
   const int64_t  f1;
   int8_t  f2;
   int32_t  f3;
   int8_t  f4;
   uint32_t  f5;
};

union U3 {
   int64_t  f0;
   const int32_t  f1;
   int64_t  f2;
};

union U4 {
   int16_t  f0;
   uint32_t  f1;
   int32_t  f2;
};

union U5 {
   uint32_t  f0;
};


static int32_t g_2 = 0x15E1ABE8L;
static union U5 g_24 = {0xAFD47030L};
static int8_t g_26[5] = {0x37L,0x37L,0x37L,0x37L,0x37L};
static uint32_t g_35 = 18446744073709551615UL;
static uint64_t g_55 = 18446744073709551607UL;
static int64_t g_73 = 0L;
static union U4 g_78 = {0xA71AL};
static uint64_t g_89 = 0x0E1E3E4B84AAFB9ALL;
static int32_t g_113 = 0x1B3FF46EL;
static struct S1 g_129 = {0xA6L,0xFBDCL,7UL,-9L,0x2FC398B0L};
static const union U3 g_131[2] = {{0xC3DE63DF0479FFEDLL},{0xC3DE63DF0479FFEDLL}};
static uint64_t g_133 = 18446744073709551614UL;
static struct S0 g_137 = {0x194AL};
static int16_t g_157 = 5L;
static int32_t g_159 = (-6L);
static uint8_t g_160 = 0x55L;
static uint32_t g_185[5] = {0xE4EEA450L,0xE4EEA450L,0xE4EEA450L,0xE4EEA450L,0xE4EEA450L};
static struct S2 g_200[5] = {{0x9056L,1L,0x76L,0x3A7D8D9CL,0x3CL,0x96F6E79FL},{0x9056L,1L,0x76L,0x3A7D8D9CL,0x3CL,0x96F6E79FL},{0x9056L,1L,0x76L,0x3A7D8D9CL,0x3CL,0x96F6E79FL},{0x9056L,1L,0x76L,0x3A7D8D9CL,0x3CL,0x96F6E79FL},{0x9056L,1L,0x76L,0x3A7D8D9CL,0x3CL,0x96F6E79FL}};
static int64_t g_202 = 0x4E2F90C535739DC3LL;
static uint16_t g_203 = 65531UL;
static uint32_t g_245 = 0x4AF7A4CDL;
static int64_t g_274 = 2L;
static uint8_t g_275 = 0x51L;



static uint32_t  func_1(void);
static const uint16_t  func_8(struct S2  p_9, int32_t  p_10, int32_t  p_11, union U4  p_12);
static struct S2  func_13(struct S0  p_14, uint8_t  p_15, const union U4  p_16, union U3  p_17, union U5  p_18);
static int32_t  func_41(union U3  p_42, struct S2  p_43, uint16_t  p_44);




static uint32_t  func_1(void)
{ 
    uint16_t l_5 = 0xB74CL;
    struct S0 l_19[3] = {{0x94B7L},{0x94B7L},{0x94B7L}};
    union U3 l_23 = {0xE9F21C9B6CD04CD0LL};
    union U4 l_206 = {-6L};
    uint32_t l_261 = 0x869AB182L;
    int32_t l_273 = (-1L);
    int i;
    for (g_2 = (-16); (g_2 > (-13)); g_2 = safe_add_func_int8_t_s_s(g_2, 7))
    { 
        const union U4 l_22 = {-1L};
        uint32_t l_272 = 0UL;
        l_5 |= (-4L);
        if ((safe_rshift_func_int16_t_s_s(((255UL != (g_2 >= func_8(func_13(l_19[1], (safe_mod_func_uint16_t_u_u(0x8594L, 0x0E2BL)), l_22, l_23, g_24), g_129.f2, g_137.f0, l_206))) >= g_129.f4), g_129.f2)))
        { 
            int32_t l_244 = (-10L);
            g_245++;
            return l_22.f0;
        }
        else
        { 
            int32_t l_260 = 5L;
            for (g_129.f2 = 0; (g_129.f2 <= 7); g_129.f2 = safe_add_func_uint64_t_u_u(g_129.f2, 6))
            { 
                return g_35;
            }
            g_113 &= (safe_div_func_int8_t_s_s((safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((-2L), (((((((safe_unary_minus_func_uint8_t_u((g_200[3].f4 < (safe_div_func_int16_t_s_s(((0x51C14CA4L < (~l_260)) & l_23.f0), g_73))))) ^ g_78.f0) >= l_261) > g_200[3].f1) | 0x2AL) && g_35) <= 0x15A1C812L))), l_23.f2)), g_26[4]));
        }
        l_272 = (safe_lshift_func_uint8_t_u_s((safe_unary_minus_func_int16_t_s((((l_5 , g_137.f0) == (safe_mod_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(0x1BCBL, (safe_rshift_func_int16_t_s_s(((~(l_22.f0 , l_23.f2)) > 1UL), l_22.f0)))), l_23.f2))) == 0x9C62L))), 2));
    }
    --g_275;
    return l_23.f2;
}



static const uint16_t  func_8(struct S2  p_9, int32_t  p_10, int32_t  p_11, union U4  p_12)
{ 
    uint64_t l_207 = 1UL;
    int32_t l_222 = 0x96F18D49L;
    struct S0 l_224 = {0x751EL};
    l_207 &= 0xBD5290F8L;
    for (g_73 = 4; (g_73 >= 1); g_73 -= 1)
    { 
        int32_t l_218 = 1L;
        int32_t l_219[4] = {(-9L),(-9L),(-9L),(-9L)};
        int32_t l_220 = 1L;
        int32_t l_221[5][4][5] = {{{0x39BF05D6L,0xC1ADAD2FL,1L,(-7L),0xE8927BEDL},{(-7L),6L,0x8896D12CL,0x8896D12CL,6L},{0x0796BC05L,1L,0x5F190557L,0x8896D12CL,1L},{1L,1L,0xC9F17B18L,(-7L),0xC1ADAD2FL}},{{(-1L),9L,0x8896D12CL,0xC9F17B18L,(-10L)},{(-1L),0x5F190557L,(-10L),0x5F190557L,(-1L)},{1L,9L,(-10L),0x8896D12CL,0x39BF05D6L},{0xE8927BEDL,0x0796BC05L,0x8896D12CL,1L,1L}},{{1L,(-1L),(-4L),9L,0x39BF05D6L},{(-10L),1L,1L,(-10L),(-1L)},{0x39BF05D6L,1L,0x0DF1BF68L,(-2L),(-10L)},{9L,(-1L),0x39BF05D6L,1L,0xC9F17B18L}},{{0x0DF1BF68L,0x0796BC05L,(-7L),(-2L),(-2L)},{0x0796BC05L,9L,0x0796BC05L,(-10L),0xC1ADAD2FL},{0x0796BC05L,0x5F190557L,1L,9L,0x8896D12CL},{0x0DF1BF68L,(-7L),(-1L),1L,1L}},{{9L,(-2L),1L,0x8896D12CL,1L},{0x39BF05D6L,0x39BF05D6L,0x0796BC05L,0x5F190557L,1L},{(-10L),0xC1ADAD2FL,(-7L),0xC9F17B18L,1L},{1L,0xC9F17B18L,0x39BF05D6L,0xE8927BEDL,0x8896D12CL}}};
        struct S0 l_223[2][3] = {{{0x793AL},{0x793AL},{0x793AL}},{{0xBC6BL},{0xBC6BL},{0xBC6BL}}};
        int16_t l_230 = (-5L);
        int i, j, k;
        l_222 = (safe_mod_func_uint64_t_u_u((g_24 , (l_220 |= (safe_mod_func_int32_t_s_s(((((safe_mul_func_uint16_t_u_u(((l_219[2] = ((g_26[g_73] != (safe_lshift_func_int8_t_s_s(g_26[g_73], 4))) ^ ((safe_rshift_func_uint16_t_u_s((l_218 |= (0x0DC1B115L && g_185[3])), g_2)) , p_9.f0))) , 8UL), g_131[0].f2)) == 0x675AF439L) == g_26[4]) < g_26[g_73]), g_26[g_73])))), l_221[3][2][4]));
        l_224 = l_223[1][1];
        l_230 ^= ((g_160 = (~(0x659F9542L | (safe_div_func_int32_t_s_s((safe_mul_func_int8_t_s_s((((l_223[1][1].f0 != g_55) && p_10) & 4294967295UL), p_11)), l_220))))) ^ 0xF4L);
        for (p_9.f3 = 4; (p_9.f3 >= 1); p_9.f3 -= 1)
        { 
            for (l_218 = 4; (l_218 >= 0); l_218 -= 1)
            { 
                g_113 &= ((safe_mul_func_int8_t_s_s(((p_9.f2 <= g_129.f3) && (safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(p_9.f2, (((safe_unary_minus_func_int16_t_s(g_24.f0)) == p_10) , l_220))), l_224.f0))), 0xD1L)) ^ l_224.f0);
            }
        }
    }
    g_113 = (g_131[0].f1 || (p_12.f0 |= (+((safe_mul_func_int16_t_s_s((safe_sub_func_int32_t_s_s((-5L), (0x546BFD68B0343139LL && (((+((g_55 > 9UL) , l_222)) ^ (-1L)) , l_224.f0)))), l_207)) && g_129.f1))));
    return l_224.f0;
}



static struct S2  func_13(struct S0  p_14, uint8_t  p_15, const union U4  p_16, union U3  p_17, union U5  p_18)
{ 
    const int16_t l_25 = 0xA218L;
    int32_t l_34[1][2][4] = {{{0xED863780L,0xED863780L,0xED863780L,0xED863780L},{0xED863780L,0xED863780L,0xED863780L,0xED863780L}}};
    const struct S1 l_46 = {0xECL,0x13DBL,0UL,-1L,0x82E93B6AL};
    struct S2 l_47 = {65535UL,-1L,0x3FL,0x80C5262CL,0x85L,0x227CDBA0L};
    uint16_t l_48 = 0UL;
    int i, j, k;
lbl_30:
    g_26[2] = l_25;
    if ((safe_rshift_func_uint8_t_u_u((!(-1L)), 1)))
    { 
        if (l_25)
            goto lbl_30;
    }
    else
    { 
        const uint32_t l_31 = 0xE0F4C9FFL;
        if (((p_17.f1 >= ((((l_31 > (p_18.f0 ^= ((l_34[0][0][2] = (safe_mod_func_uint8_t_u_u((p_17.f0 & 0x02L), p_17.f2))) & p_17.f2))) , 1UL) , g_26[2]) >= g_26[2])) <= p_17.f2))
        { 
            g_35++;
        }
        else
        { 
            struct S2 l_38[4][3] = {{{0x7CF5L,0x38F5E691445A15B6LL,0x74L,1L,-8L,0UL},{0UL,0x6813F8C547FCE3BALL,-1L,1L,0xE9L,0xE1947684L},{0x7CF5L,0x38F5E691445A15B6LL,0x74L,1L,-8L,0UL}},{{1UL,-1L,0x08L,0xC3CB8784L,0xEFL,0xF3E16851L},{0xDF50L,0L,1L,0xE3CEC334L,0x72L,0x90F9CF50L},{1UL,-1L,0x08L,0xC3CB8784L,0xEFL,0xF3E16851L}},{{0x7CF5L,0x38F5E691445A15B6LL,0x74L,1L,-8L,0UL},{0UL,0x6813F8C547FCE3BALL,-1L,1L,0xE9L,0xE1947684L},{0x7CF5L,0x38F5E691445A15B6LL,0x74L,1L,-8L,0UL}},{{1UL,-1L,0x08L,0xC3CB8784L,0xEFL,0xF3E16851L},{0xDF50L,0L,1L,0xE3CEC334L,0x72L,0x90F9CF50L},{1UL,-1L,0x08L,0xC3CB8784L,0xEFL,0xF3E16851L}}};
            union U3 l_45 = {-1L};
            int i, j;
            if ((l_38[2][0] , ((safe_sub_func_int32_t_s_s(func_41(l_45, (l_46 , l_47), l_48), 0x8A431967L)) | 0x27033AF2L)))
            { 
                g_203++;
            }
            else
            { 
                p_14 = g_137;
            }
        }
    }
    return g_200[3];
}



static int32_t  func_41(union U3  p_42, struct S2  p_43, uint16_t  p_44)
{ 
    int32_t l_53[3][4][3] = {{{(-3L),0xE720F54FL,0x5504247EL},{0L,0x38DB2228L,0xFF0BA59AL},{(-3L),(-3L),0xFF0BA59AL},{0x38DB2228L,0L,0x5504247EL}},{{0xE720F54FL,(-3L),0xE720F54FL},{0xE720F54FL,0x38DB2228L,(-3L)},{0x38DB2228L,0xE720F54FL,0xE720F54FL},{(-3L),0xE720F54FL,0x5504247EL}},{{0L,0x38DB2228L,0xFF0BA59AL},{(-3L),(-3L),0xFF0BA59AL},{0x38DB2228L,0L,0x5504247EL},{0xE720F54FL,(-3L),0xE720F54FL}}};
    int32_t l_54[2][3];
    int32_t l_72 = 0x0F5D9662L;
    int32_t l_74 = 1L;
    uint32_t l_75 = 4294967289UL;
    union U5 l_124 = {0x750682C5L};
    struct S0 l_138[4] = {{0xC7B1L},{0xC7B1L},{0xC7B1L},{0xC7B1L}};
    struct S0 l_164 = {0xEA9BL};
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            l_54[i][j] = 0xCF5132FCL;
    }
lbl_201:
    if ((l_75 = (safe_add_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_u(((g_55--) | (safe_rshift_func_int16_t_s_s(l_54[0][1], (l_74 |= (safe_add_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((g_73 = (safe_rshift_func_int16_t_s_s(((((safe_div_func_int8_t_s_s((safe_sub_func_int64_t_s_s(l_54[0][1], (safe_sub_func_int16_t_s_s(((0x0C1829B6EDA74E99LL ^ (l_72 = ((0xE6L != g_2) | 6UL))) , g_24.f0), g_26[2])))), 0x0FL)) > g_26[2]) && (-7L)) , p_42.f0), 2))), 6)), g_35)))))), l_54[0][1])) | 1UL) < g_2), l_54[1][2]))))
    { 
        uint32_t l_87[2][2] = {{4294967295UL,4294967295UL},{4294967295UL,4294967295UL}};
        int32_t l_88 = 0xC0571713L;
        int i, j;
        l_88 = (p_42.f2 , (0x17L || (g_78 , ((safe_mod_func_uint64_t_u_u(((p_44 &= (((~((~((safe_mod_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(l_87[1][0], g_26[2])), 65530UL)) < 9UL)) & 0UL)) & g_26[2]) >= 0xAB3148BBL)) && p_43.f4), 0x29DAE866A738CF3ALL)) < 0xBF0D081C3794E43DLL))));
        for (l_74 = 2; (l_74 >= 0); l_74 -= 1)
        { 
            g_89--;
            for (l_88 = 0; (l_88 <= 2); l_88 += 1)
            { 
                struct S0 l_92 = {-4L};
                l_92 = (g_55 , l_92);
            }
        }
    }
    else
    { 
        uint8_t l_101 = 0x07L;
        int32_t l_111 = (-1L);
        int32_t l_125 = (-9L);
        int16_t l_132[4][1] = {{0L},{(-4L)},{0L},{(-4L)}};
        struct S0 l_145[1] = {{1L}};
        int32_t l_158 = 1L;
        int i, j;
        if ((safe_sub_func_uint64_t_u_u((safe_div_func_uint64_t_u_u(p_44, ((safe_lshift_func_uint16_t_u_s(((g_35 && 0xDF68L) & 249UL), p_42.f2)) , 0xE79906C8188D8CC6LL))), 0xF9D625AE403142C0LL)))
        { 
            l_54[0][0] ^= ((safe_mod_func_int8_t_s_s(l_101, (p_43.f4 || (safe_div_func_int32_t_s_s((!((g_73 >= (safe_lshift_func_uint16_t_u_u(p_43.f2, p_44))) && 65530UL)), 0x1C4CBDEFL))))) != g_35);
        }
        else
        { 
            for (g_24.f0 = 0; (g_24.f0 <= 1); g_24.f0 += 1)
            { 
                if (p_43.f3)
                    break;
            }
        }
        g_113 = ((-3L) < ((p_43.f0 < (safe_mod_func_int16_t_s_s(((l_111 ^= l_101) & (((((p_43.f3 = (+l_75)) , l_101) == g_89) | l_101) | l_75)), 65532UL))) != p_43.f4));
        for (l_111 = 27; (l_111 == (-7)); l_111 = safe_sub_func_int64_t_s_s(l_111, 7))
        { 
            uint8_t l_121 = 0x61L;
            int32_t l_130 = 0x5795A903L;
            const int32_t l_155 = 0L;
            if ((+(p_43.f4 = ((safe_div_func_uint16_t_u_u(((safe_add_func_int64_t_s_s(l_54[1][2], (g_35 && ((g_26[2] >= l_121) && g_24.f0)))) && g_35), g_78.f0)) < g_73))))
            { 
                union U3 l_126 = {-2L};
                l_125 = ((safe_add_func_uint32_t_u_u((l_124 , 0x3A23B2ADL), p_43.f0)) & p_42.f2);
                l_130 = (((l_125 = (l_126 , (g_35 = ((g_89 &= l_125) & (safe_div_func_int16_t_s_s(((g_129 , l_111) != p_43.f3), (-1L))))))) , l_126.f1) || g_26[2]);
            }
            else
            { 
                uint32_t l_136 = 0xCE42A8B0L;
                l_74 = (g_131[0] , (l_130 = 0xAF7B95B8L));
                g_133--;
                if (l_136)
                    continue;
            }
            l_138[3] = g_137;
            if (p_43.f3)
            { 
                uint32_t l_146 = 0x88D7AC8CL;
                struct S0 l_147 = {0x90E4L};
                l_145[0] = (((((safe_div_func_int64_t_s_s((safe_lshift_func_int8_t_s_u((((safe_add_func_uint8_t_u_u(((((g_26[2] | p_42.f1) & (l_74 | ((l_145[0] , p_42.f0) && p_43.f5))) > 1UL) & l_146), 0x69L)) || l_132[1][0]) >= 1UL), 0)), g_78.f0)) <= p_43.f5) == (-4L)) ^ 0x4D0F49ACL) , l_147);
                g_113 |= (l_125 = (((g_89 = (safe_rshift_func_int16_t_s_u(((((~0UL) != ((safe_rshift_func_int16_t_s_u(((-6L) ^ (((((g_78 , g_73) < l_111) & 0x59L) ^ l_155) && 0x5DA70D91B73B22A7LL)), p_43.f0)) == g_131[0].f0)) ^ g_131[0].f1) | 0xE8CF944FL), 11))) || p_43.f5) <= 1UL));
                l_72 |= ((-1L) < (!(--g_160)));
            }
            else
            { 
                uint8_t l_163 = 252UL;
                if (l_163)
                    break;
            }
        }
    }
    l_138[3] = l_164;
    if ((+(safe_mul_func_uint16_t_u_u((0xB269L < (safe_mul_func_int8_t_s_s(((l_72 |= (g_78.f0 = l_75)) == (safe_rshift_func_int16_t_s_s(((p_44 == ((safe_mul_func_uint8_t_u_u(g_131[0].f2, l_74)) <= 8L)) >= 0xAEE11363L), l_54[0][2]))), 1L))), p_43.f3))))
    { 
        int32_t l_178[1];
        int32_t l_184 = 1L;
        struct S0 l_188 = {0x2317L};
        int i;
        for (i = 0; i < 1; i++)
            l_178[i] = 0xB72F02FFL;
        if ((((safe_div_func_int64_t_s_s((safe_lshift_func_int8_t_s_s((l_178[0] <= (~p_44)), 2)), ((g_129.f1 <= ((((g_73 = (safe_rshift_func_uint8_t_u_u(((p_43.f3 , p_42.f2) >= 0xF99F95BDL), 4))) == l_178[0]) != g_129.f4) < 1UL)) && 0x32CBD3E61D3DFD4CLL))) , l_178[0]) && 0UL))
        { 
            struct S0 l_189 = {7L};
            int32_t l_196 = 0x79E369C8L;
            for (g_89 = (-7); (g_89 == 52); g_89 = safe_add_func_int32_t_s_s(g_89, 2))
            { 
                g_185[3]++;
                l_189 = l_188;
            }
            g_113 = p_43.f4;
            for (l_124.f0 = 0; (l_124.f0 > 6); l_124.f0++)
            { 
                uint32_t l_194 = 0x1E26954DL;
                int32_t l_199 = 0x9EF021E7L;
                l_199 = (safe_mod_func_int16_t_s_s(((l_196 &= (l_194 && (~g_26[1]))) || ((((safe_sub_func_int8_t_s_s((-3L), (((g_129.f3 = ((p_44 = (g_131[0].f0 > p_42.f1)) <= l_196)) >= p_43.f1) > g_131[0].f0))) != l_196) | 0x56L) >= p_42.f1)), 1UL));
                if (l_199)
                    break;
            }
        }
        else
        { 
            g_113 = (g_200[3] , 1L);
            for (l_124.f0 = 0; (l_124.f0 <= 3); l_124.f0 += 1)
            { 
                int i;
                if (g_185[(l_124.f0 + 1)])
                    break;
            }
        }
    }
    else
    { 
        if (g_160)
            goto lbl_201;
    }
    return l_74;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_24.f0, "g_24.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_26[i], "g_26[i]", print_hash_value);

    }
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_78.f0, "g_78.f0", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_129.f0, "g_129.f0", print_hash_value);
    transparent_crc(g_129.f1, "g_129.f1", print_hash_value);
    transparent_crc(g_129.f2, "g_129.f2", print_hash_value);
    transparent_crc(g_129.f3, "g_129.f3", print_hash_value);
    transparent_crc(g_129.f4, "g_129.f4", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_131[i].f0, "g_131[i].f0", print_hash_value);
        transparent_crc(g_131[i].f1, "g_131[i].f1", print_hash_value);
        transparent_crc(g_131[i].f2, "g_131[i].f2", print_hash_value);

    }
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_137.f0, "g_137.f0", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_160, "g_160", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_185[i], "g_185[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_200[i].f0, "g_200[i].f0", print_hash_value);
        transparent_crc(g_200[i].f1, "g_200[i].f1", print_hash_value);
        transparent_crc(g_200[i].f2, "g_200[i].f2", print_hash_value);
        transparent_crc(g_200[i].f3, "g_200[i].f3", print_hash_value);
        transparent_crc(g_200[i].f4, "g_200[i].f4", print_hash_value);
        transparent_crc(g_200[i].f5, "g_200[i].f5", print_hash_value);

    }
    transparent_crc(g_202, "g_202", print_hash_value);
    transparent_crc(g_203, "g_203", print_hash_value);
    transparent_crc(g_245, "g_245", print_hash_value);
    transparent_crc(g_274, "g_274", print_hash_value);
    transparent_crc(g_275, "g_275", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
