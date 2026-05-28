// SPDX-License-Identifier: MIT
// cctest_csmith_d3726ab8.c --- cctest case csmith_d3726ab8 (csmith seed 3547491000)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x7a649a5c */
/* @exp_ticks 0x53d2 */

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

// Options:   -s 3547491000 -o /tmp/csmith_gen_45u5ka1y/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint32_t  f0;
};

struct S1 {
   uint64_t  f0;
   const uint16_t  f1;
   uint64_t  f2;
   uint8_t  f3;
   uint64_t  f4;
};

#pragma pack(push)
#pragma pack(1)
struct S2 {
   struct S0  f0;
   const int16_t  f1;
   uint32_t  f2;
   int8_t  f3;
   uint32_t  f4;
   int64_t  f5;
};
#pragma pack(pop)

struct S3 {
   const uint32_t  f0;
   const uint32_t  f1;
};

#pragma pack(push)
#pragma pack(1)
struct S4 {
   uint16_t  f0;
};
#pragma pack(pop)

union U5 {
   int32_t  f0;
   uint16_t  f1;
   uint8_t  f2;
};


static int64_t g_3 = 9L;
static union U5 g_13 = {0x78F4F823L};
static uint32_t g_16[1] = {0x56DFC9B9L};
static struct S2 g_26 = {{0UL},0x9C14L,0x7A14A9C7L,1L,0xF9F3B06DL,0xE96BB645487972E7LL};
static int8_t g_43[4] = {0x51L,0x51L,0x51L,0x51L};
static uint32_t g_44[2][3][4] = {{{0x79A83ADAL,0xB6EF3BB5L,0x6F3A6950L,0x97A847E0L},{0x6F3A6950L,0x97A847E0L,0x6F3A6950L,0xB6EF3BB5L},{0x79A83ADAL,0x97A847E0L,0x581CA928L,0x97A847E0L}},{{0x79A83ADAL,0xB6EF3BB5L,0x6F3A6950L,0x97A847E0L},{0x6F3A6950L,0x97A847E0L,0x6F3A6950L,0xB6EF3BB5L},{0x79A83ADAL,0x97A847E0L,0x581CA928L,0x97A847E0L}}};
static int8_t g_51 = (-1L);
static uint32_t g_52 = 1UL;
static const struct S3 g_68[5][3] = {{{3UL,0x5F43C719L},{0x18558EF1L,6UL},{3UL,0x5F43C719L}},{{3UL,0x5F43C719L},{0xF9F05BB7L,5UL},{0x18558EF1L,6UL}},{{0xF9F05BB7L,5UL},{3UL,0x5F43C719L},{3UL,0x5F43C719L}},{{0x18558EF1L,6UL},{3UL,0x5F43C719L},{0UL,0x47B9DA01L}},{{0x5B503A71L,0x0FACDC9FL},{0xF9F05BB7L,5UL},{0x9E2F9DBCL,0x30632420L}}};
static uint64_t g_70 = 18446744073709551613UL;
static int8_t g_80 = 0xD5L;
static uint32_t g_81[1][3][1] = {{{0x72C61B7CL},{0x72C61B7CL},{0x72C61B7CL}}};
static uint64_t g_90 = 0x5E37C3E796DA1768LL;
static uint32_t g_92[4] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL};
static uint8_t g_129 = 0xFEL;
static int32_t g_135[2][3][1] = {{{0xB30E8A79L},{0L},{0L}},{{0xB30E8A79L},{0L},{0L}}};
static struct S1 g_164 = {0xEC63AA86CCD6D71ELL,65533UL,0x84F3720B211735A4LL,0x78L,0xCD55F75C09CCC0E6LL};
static uint32_t g_190 = 0UL;
static uint32_t g_218 = 0UL;
static int32_t g_251 = 1L;
static struct S4 g_255[2][3] = {{{0x9E38L},{0x9E38L},{0x9E38L}},{{0x9E38L},{0x9E38L},{0x9E38L}}};
static uint32_t g_264 = 0x19F3F146L;
static int8_t g_265[4] = {0xB9L,0xB9L,0xB9L,0xB9L};
static struct S0 g_271 = {0UL};
static uint64_t g_287 = 0xA1B66CBA3D675C65LL;



static int32_t  func_1(void);
static uint16_t  func_8(int32_t  p_9, uint8_t  p_10, union U5  p_11);
static int32_t  func_17(int32_t  p_18, union U5  p_19, int64_t  p_20, uint8_t  p_21);
static int8_t  func_22(struct S2  p_23, struct S3  p_24, struct S3  p_25);




static int32_t  func_1(void)
{ 
    struct S0 l_286 = {0x2C8051A5L};
    struct S4 l_288[1] = {{0xB79DL}};
    int16_t l_291 = 0x7F2CL;
    int i;
    if ((+g_3))
    { 
        uint32_t l_4 = 4294967295UL;
        union U5 l_14 = {-4L};
        int32_t l_285 = 0x58D0A81AL;
        l_4++;
        g_287 ^= ((+((((l_285 &= (func_8(g_3, (+g_3), (l_14 = g_13)) , 0x06L)) < g_218) , l_286) , 0x84L)) || 0xA2071430L);
    }
    else
    { 
        l_288[0] = g_255[0][2];
    }
    l_291 = (safe_mod_func_uint64_t_u_u(g_68[1][2].f0, l_286.f0));
    return g_13.f2;
}



static uint16_t  func_8(int32_t  p_9, uint8_t  p_10, union U5  p_11)
{ 
    int16_t l_15[4] = {0L,0L,0L,0L};
    int8_t l_269 = 0x17L;
    int32_t l_270 = 0x28120CE1L;
    int32_t l_283 = (-1L);
    int32_t l_284[3];
    int i;
    for (i = 0; i < 3; i++)
        l_284[i] = 1L;
    for (g_13.f0 = 3; (g_13.f0 >= 0); g_13.f0 -= 1)
    { 
        struct S3 l_27 = {0xB17B4D2CL,6UL};
        int i;
        p_11.f0 |= ((l_15[g_13.f0] , (g_16[0] &= g_13.f0)) || 0L);
        l_270 = (l_269 = func_17(((p_9 > func_22(g_26, l_27, l_27)) , 8L), p_11, g_129, l_27.f0));
    }
    for (g_129 = 0; (g_129 <= 1); g_129 += 1)
    { 
        if (p_10)
            break;
        for (g_26.f3 = 0; (g_26.f3 <= 0); g_26.f3 += 1)
        { 
            const struct S2 l_281 = {{3UL},0x2122L,0UL,-4L,0xC353FD0BL,0L};
            g_271 = g_26.f0;
            for (l_270 = 0; (l_270 >= 0); l_270 -= 1)
            { 
                int i, j, k;
                g_135[0][0][0] |= (g_81[g_26.f3][(g_26.f3 + 2)][l_270] | (safe_add_func_int64_t_s_s(((safe_mul_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s((safe_mod_func_int32_t_s_s((g_255[g_129][(g_129 + 1)] , (((safe_sub_func_uint16_t_u_u(0x550BL, ((l_281 , p_10) && p_10))) , l_281.f0.f0) != 0x34EB9A496BBBC259LL)), p_10)))), 9UL)) < 8L), l_270)));
                l_284[2] = ((p_10 = ((!((l_283 = (g_13.f1 = (p_11.f0 <= ((g_255[0][2].f0 != (1UL ^ 0x43D952B0L)) & 0x09L)))) & p_9)) , l_269)) == p_11.f1);
            }
        }
    }
    return l_15[1];
}



static int32_t  func_17(int32_t  p_18, union U5  p_19, int64_t  p_20, uint8_t  p_21)
{ 
    uint64_t l_268 = 0x18812C0AD67FAE14LL;
    for (g_164.f3 = 8; (g_164.f3 < 42); g_164.f3++)
    { 
        p_19.f0 |= g_68[1][2].f0;
    }
    return l_268;
}



static int8_t  func_22(struct S2  p_23, struct S3  p_24, struct S3  p_25)
{ 
    int32_t l_37[3];
    int32_t l_49[4][1] = {{0x4DB59FB1L},{0L},{0x4DB59FB1L},{0L}};
    int32_t l_142[4] = {0x14DBE924L,0x14DBE924L,0x14DBE924L,0x14DBE924L};
    struct S4 l_165 = {0UL};
    uint32_t l_250[3][3][2] = {{{0x1DCF8AABL,0x976463CAL},{0x1DCF8AABL,0x1DCF8AABL},{0x976463CAL,0x1DCF8AABL}},{{0x1DCF8AABL,0x976463CAL},{0x1DCF8AABL,0x1DCF8AABL},{0x976463CAL,0x1DCF8AABL}},{{0x1DCF8AABL,0x976463CAL},{0x1DCF8AABL,0x1DCF8AABL},{0x976463CAL,0x1DCF8AABL}}};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_37[i] = 7L;
    for (p_23.f3 = 0; (p_23.f3 <= 0); p_23.f3 += 1)
    { 
        struct S1 l_36 = {0x7E2192FE2CCF58D9LL,1UL,0xA8B1460DEEA39BA5LL,0UL,18446744073709551606UL};
        int32_t l_42 = (-1L);
        int32_t l_50[1][2][4] = {{{0x3517D3E8L,0x60F1475AL,0x60F1475AL,0x3517D3E8L},{0x60F1475AL,0x3517D3E8L,0x60F1475AL,0x60F1475AL}}};
        int i, j, k;
        if (((((255UL && g_16[p_23.f3]) | ((safe_sub_func_uint16_t_u_u(p_25.f0, p_23.f4)) > 0x16L)) < 0UL) , 0L))
        { 
            int8_t l_38 = 0x34L;
            g_26.f0 = p_23.f0;
            if (g_26.f0.f0)
                break;
            l_38 &= ((safe_add_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(p_23.f3, ((p_23.f0 = g_26.f0) , (l_36 , g_3)))), p_23.f2)) != l_37[1]);
        }
        else
        { 
            uint32_t l_39 = 0x7B8A5F03L;
            for (g_3 = 0; (g_3 >= 0); g_3 -= 1)
            { 
                l_39--;
                if (l_37[2])
                    continue;
            }
        }
        --g_44[0][2][2];
        if ((((safe_sub_func_int8_t_s_s(g_26.f1, 0x4CL)) , (g_44[1][0][1] ^ ((g_52++) <= 0x88L))) || g_26.f3))
        { 
            for (p_23.f2 = 0; (p_23.f2 <= 0); p_23.f2 += 1)
            { 
                uint32_t l_69 = 0x6586993EL;
                g_70 = (((safe_mul_func_int8_t_s_s((p_24.f0 || (safe_unary_minus_func_uint8_t_u((safe_sub_func_int8_t_s_s((l_49[2][0] < 0UL), ((safe_rshift_func_int8_t_s_u((((safe_mul_func_uint16_t_u_u((((((safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((g_68[1][2] , 0xC9L), 0)), p_25.f1)) < 0x4E4C4DC4L) , l_69) && (-1L)) >= g_26.f2), 0xD831L)) , 1UL) , 0x5AL), 7)) && 0x73647B8CEE114377LL)))))), l_50[0][0][0])) != p_24.f0) ^ g_51);
            }
        }
        else
        { 
            int32_t l_79 = (-7L);
            int32_t l_93 = 0x1A10FB8DL;
            uint32_t l_110 = 0xB53E36E8L;
            int i;
            if ((((g_70 <= ((g_16[p_23.f3]++) | (safe_mul_func_uint16_t_u_u(((safe_mod_func_int64_t_s_s((safe_rshift_func_int8_t_s_u((g_68[1][2].f0 & g_13.f2), 0)), 18446744073709551606UL)) && p_23.f1), g_13.f0)))) < 0xE4F1L) < (-1L)))
            { 
                ++g_81[0][1][0];
                if (g_13.f1)
                    break;
            }
            else
            { 
                uint16_t l_91 = 0xEB80L;
                int32_t l_94[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_94[i] = 5L;
                g_92[1] = (safe_mod_func_int16_t_s_s((((-5L) | (g_43[2] & (safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s((g_90 = ((l_42 > (l_79 ^= (((0xF631L || 7L) >= (-9L)) < 0x590BACEAEEF4A51DLL))) || l_36.f3)), l_36.f1)), l_91)))) && l_79), p_24.f1));
                if (g_44[0][2][2])
                    continue;
                l_94[0] = l_93;
            }
            if (g_81[0][1][0])
            { 
                int8_t l_111 = 1L;
                l_111 = ((safe_sub_func_int32_t_s_s((p_23.f2 < (safe_lshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((((safe_mod_func_int8_t_s_s((safe_mod_func_int32_t_s_s(((p_25 , g_26.f0) , (~(safe_sub_func_uint16_t_u_u(((l_110 ^= ((safe_mod_func_int64_t_s_s(p_25.f1, 0xF22B7714DF77CBFDLL)) >= g_92[1])) , 1UL), 0xA220L)))), (-1L))), l_49[1][0])) ^ l_49[2][0]) == p_23.f2), g_68[1][2].f1)), 8))), 0x616B5498L)) < p_24.f0);
            }
            else
            { 
                uint16_t l_128 = 6UL;
                int8_t l_130[2][4] = {{0x1EL,0x1EL,0x1EL,0x1EL},{0x1EL,0x1EL,0x1EL,0x1EL}};
                int32_t l_131 = (-1L);
                int i, j;
                l_131 = (safe_mod_func_int8_t_s_s(((safe_add_func_int64_t_s_s((((((safe_mod_func_uint32_t_u_u(((safe_sub_func_int32_t_s_s((l_36.f2 , ((g_26.f3 &= (safe_rshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((g_68[1][2].f0 , 0xC1L), (l_79 = (safe_mul_func_int16_t_s_s((safe_div_func_int64_t_s_s(g_16[p_23.f3], 5UL)), p_23.f1))))), p_25.f0))) >= g_70)), p_23.f5)) ^ g_16[p_23.f3]), l_128)) < g_129) , (-1L)) ^ p_23.f5) & p_24.f0), g_13.f0)) <= l_130[1][0]), 0xF3L));
                l_42 = (4UL >= (~65532UL));
                l_142[0] = (l_49[1][0] |= ((g_135[0][0][0] ^= (safe_lshift_func_int8_t_s_u(p_23.f3, 0))) > ((safe_mul_func_int8_t_s_s(((((safe_sub_func_uint8_t_u_u(l_128, p_24.f0)) <= (((safe_mod_func_int8_t_s_s(0x8BL, p_25.f1)) || 0UL) < 0x59496D93F2D2C60FLL)) || g_44[1][0][3]) , p_23.f0.f0), l_93)) ^ l_131)));
            }
        }
    }
    g_135[0][0][0] ^= ((1UL >= (0xADL && (g_26.f3 = (safe_rshift_func_int16_t_s_s(0x1F1CL, 13))))) < (safe_add_func_int64_t_s_s((safe_mul_func_int8_t_s_s((safe_unary_minus_func_uint16_t_u(65532UL)), 255UL)), p_25.f0)));
    if ((safe_div_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(((safe_rshift_func_int16_t_s_u((((safe_add_func_int32_t_s_s(l_49[2][0], (((safe_add_func_int16_t_s_s(((p_23.f4 = (((p_23.f0 , l_49[0][0]) <= ((g_13 , g_80) != 0L)) , 4294967294UL)) | 0x09261988L), 1L)) != l_37[0]) < l_37[2]))) >= g_129) , (-1L)), 10)) , p_25.f0), 1)), 0xADC2L)), l_142[0])), g_13.f1)))
    { 
        uint16_t l_167 = 0x597CL;
        int32_t l_192 = (-10L);
        const uint16_t l_217 = 0xA515L;
        int32_t l_222 = 0xFB790910L;
        int16_t l_229 = 0xB58FL;
        struct S0 l_235 = {0x8033DE54L};
        if ((p_23 , ((g_164 , p_25.f0) , (0x3325B3C6L && g_44[0][2][2]))))
        { 
            const struct S2 l_183 = {{18446744073709551615UL},0x3C3FL,0x057C5A96L,0L,0xCCC043B8L,0L};
            for (g_3 = 3; (g_3 >= 0); g_3 -= 1)
            { 
                struct S4 l_166 = {0UL};
                const struct S1 l_182[3] = {{0x33707CAD87FAE0A6LL,0xA7D3L,0UL,0xD3L,1UL},{0x33707CAD87FAE0A6LL,0xA7D3L,0UL,0xD3L,1UL},{0x33707CAD87FAE0A6LL,0xA7D3L,0UL,0xD3L,1UL}};
                int i;
                l_166 = l_165;
                g_135[0][0][0] = (((l_167++) , ((safe_lshift_func_uint8_t_u_s((((safe_sub_func_int16_t_s_s((l_142[0] |= (((((((g_43[g_3] <= (safe_mod_func_uint64_t_u_u((safe_div_func_int32_t_s_s(g_43[g_3], (safe_div_func_int64_t_s_s((safe_rshift_func_uint16_t_u_s((l_182[2] , (l_183 , 0x88ACL)), 14)), 0xD05F5F8C25799EF2LL)))), p_23.f1))) && l_182[2].f2) >= g_26.f1) != g_16[0]) < p_25.f0) || 0xB9L) & p_23.f0.f0)), 0x62B2L)) == g_51) & p_23.f4), 3)) | p_23.f4)) >= 0UL);
                if (l_167)
                    break;
            }
            return g_164.f2;
        }
        else
        { 
            uint32_t l_191 = 0UL;
            int32_t l_203 = 0x852CF7C8L;
            struct S1 l_204 = {0UL,0UL,1UL,246UL,18446744073709551615UL};
            l_192 = (safe_add_func_int32_t_s_s((safe_div_func_uint16_t_u_u(g_68[1][2].f1, 9L)), ((((g_190 = ((((((((((65535UL ^ (safe_lshift_func_int8_t_s_s(((6L ^ 1L) , p_23.f1), 1))) & g_135[1][0][0]) != p_23.f1) <= g_43[3]) , 8L) || p_23.f4) >= p_24.f1) , l_142[0]) | l_49[2][0]) | g_44[0][2][2])) , l_191) > 0x5BL) , g_3)));
            if (p_25.f0)
            { 
                uint32_t l_216 = 1UL;
                l_203 = ((safe_div_func_int16_t_s_s((safe_mul_func_int16_t_s_s((safe_add_func_uint32_t_u_u(0UL, (safe_sub_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(0xA829L, p_23.f3)), l_191)))), g_68[1][2].f0)), p_23.f4)) , p_24.f1);
                l_203 = ((l_204 , ((((safe_lshift_func_int8_t_s_u((~((safe_mod_func_int16_t_s_s(((l_204.f2 || (((safe_sub_func_int8_t_s_s(((g_52 = ((((safe_add_func_uint64_t_u_u(0xECD871682D74585ELL, (safe_sub_func_uint16_t_u_u(((((l_37[0] > g_26.f5) == l_37[0]) <= p_23.f4) != (-1L)), l_204.f2)))) && l_167) <= 0x2EL) <= l_216)) & p_25.f1), 0x36L)) >= l_217) | g_81[0][1][0])) > l_167), g_218)) <= p_23.f1)), 6)) & p_23.f2) | p_23.f3) <= g_26.f1)) <= g_164.f2);
                g_135[0][0][0] &= (safe_unary_minus_func_int8_t_s((p_23.f3 = (safe_add_func_int8_t_s_s((((l_222 |= (g_164.f4 = l_192)) ^ (((p_23.f0 , (p_24.f0 == (safe_mul_func_int16_t_s_s(p_24.f1, 8L)))) > p_25.f0) , l_204.f2)) == l_216), 0x0BL)))));
            }
            else
            { 
                uint64_t l_234 = 18446744073709551609UL;
                l_203 = (g_52 >= (safe_rshift_func_int16_t_s_s(0x529BL, p_24.f0)));
                l_203 = (safe_div_func_int32_t_s_s(((g_164.f3 = (l_229 = l_217)) >= ((((g_90 > 0x42L) || (((g_135[0][1][0] = (safe_add_func_int16_t_s_s(((0x7DDE3D06L && p_23.f5) , 0x0548L), l_234))) && 0x6B91CD5FL) < p_23.f0.f0)) < l_234) , g_164.f0)), 0x6DFE7475L));
            }
            g_26.f0 = l_235;
        }
        if (((safe_lshift_func_uint16_t_u_u(g_13.f0, 9)) || (l_192 = (((safe_sub_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_u(g_218, (((g_164.f1 == ((p_24 , l_235.f0) , g_44[0][2][2])) == g_16[0]) , l_222))) && 4294967295UL) < p_23.f1), 248UL)) || l_37[1]) <= p_24.f0))))
        { 
            g_251 = (g_135[0][2][0] |= ((((((safe_lshift_func_uint8_t_u_u((safe_div_func_int32_t_s_s((safe_div_func_uint16_t_u_u((0xED3431C94D6678A5LL > (-1L)), (safe_rshift_func_int16_t_s_u(p_23.f1, ((p_23.f5 , 0xF30843EA2915EF4DLL) , l_165.f0))))), p_23.f4)), 1)) == 0x38L) , p_23.f1) , l_217) >= 0x6D18A21EL) == l_250[1][1][0]));
            for (p_23.f4 = 0; (p_23.f4 == 5); ++p_23.f4)
            { 
                l_192 = p_25.f0;
                if (p_23.f5)
                    continue;
            }
        }
        else
        { 
            int8_t l_254 = 0x40L;
            struct S4 l_257 = {0xB32DL};
            for (g_190 = 0; (g_190 <= 3); g_190 += 1)
            { 
                struct S4 l_256 = {0x972EL};
                l_257 = (l_256 = (l_254 , g_255[0][2]));
                if (l_256.f0)
                    break;
            }
        }
        g_265[0] ^= (g_26.f0 , (((safe_mod_func_uint16_t_u_u(g_164.f4, (safe_rshift_func_int16_t_s_s((safe_mod_func_int32_t_s_s((g_264 = ((((g_135[1][0][0] = (p_25.f1 >= l_250[1][1][0])) > 0x5A6AC65BL) && g_51) || 1UL)), l_217)), 11)))) == (-1L)) >= p_25.f0));
    }
    else
    { 
        return l_250[1][1][0];
    }
    return l_165.f0;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_13.f1, "g_13.f1", print_hash_value);
    transparent_crc(g_13.f2, "g_13.f2", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_16[i], "g_16[i]", print_hash_value);

    }
    transparent_crc(g_26.f0.f0, "g_26.f0.f0", print_hash_value);
    transparent_crc(g_26.f1, "g_26.f1", print_hash_value);
    transparent_crc(g_26.f2, "g_26.f2", print_hash_value);
    transparent_crc(g_26.f3, "g_26.f3", print_hash_value);
    transparent_crc(g_26.f4, "g_26.f4", print_hash_value);
    transparent_crc(g_26.f5, "g_26.f5", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_43[i], "g_43[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_44[i][j][k], "g_44[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_68[i][j].f0, "g_68[i][j].f0", print_hash_value);
            transparent_crc(g_68[i][j].f1, "g_68[i][j].f1", print_hash_value);

        }
    }
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_81[i][j][k], "g_81[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_90, "g_90", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_92[i], "g_92[i]", print_hash_value);

    }
    transparent_crc(g_129, "g_129", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_135[i][j][k], "g_135[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_164.f0, "g_164.f0", print_hash_value);
    transparent_crc(g_164.f1, "g_164.f1", print_hash_value);
    transparent_crc(g_164.f2, "g_164.f2", print_hash_value);
    transparent_crc(g_164.f3, "g_164.f3", print_hash_value);
    transparent_crc(g_164.f4, "g_164.f4", print_hash_value);
    transparent_crc(g_190, "g_190", print_hash_value);
    transparent_crc(g_218, "g_218", print_hash_value);
    transparent_crc(g_251, "g_251", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_255[i][j].f0, "g_255[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(g_264, "g_264", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_265[i], "g_265[i]", print_hash_value);

    }
    transparent_crc(g_271.f0, "g_271.f0", print_hash_value);
    transparent_crc(g_287, "g_287", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
