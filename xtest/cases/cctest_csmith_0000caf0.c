// SPDX-License-Identifier: MIT
// cctest_csmith_0000caf0.c --- cctest case csmith_0000caf0 (csmith seed 51952)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x11a76e8f */
/* @exp_ticks 0x33df */

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

// Options:   -s 51952 -o /tmp/csmith_gen_mxvr9y6h/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   const int32_t  f0;
};

struct S1 {
   uint32_t  f0;
   uint16_t  f1;
   uint64_t  f2;
   int32_t  f3;
   uint32_t  f4;
};

union U4 {
   uint32_t  f0;
};

union U5 {
   uint8_t  f0;
   struct S0  f1;
   struct S0  f2;
};


static int8_t g_9 = 0x98L;
static int16_t g_15 = 0x1C58L;
static union U5 g_17 = {0x26L};
static int32_t g_25 = 0x3423637BL;
static int32_t g_27 = 0x28EAF608L;
static int8_t g_29[2] = {0xD0L,0xD0L};
static int64_t g_30 = 0xA7AB5BF7C295A527LL;
static int32_t g_31 = 0x353EA3A7L;
static uint32_t g_40 = 0x895C4B79L;
static uint16_t g_45 = 65531UL;
static uint64_t g_63 = 0x71356723FF4914D8LL;
static struct S1 g_66 = {0xD02BD444L,0x677CL,0xB2DC50754B492BB7LL,0x07968679L,0xD5AE9098L};
static union U4 g_138 = {0UL};



static const uint8_t  func_1(void);
static uint16_t  func_4(int64_t  p_5, union U5  p_6, struct S0  p_7, uint32_t  p_8);
static union U5  func_11(uint16_t  p_12);
static int32_t  func_48(uint16_t  p_49);




static const uint8_t  func_1(void)
{ 
    uint16_t l_10 = 65530UL;
    struct S0 l_18 = {0x18C9A01CL};
    int32_t l_124 = 0x7BB3E8CBL;
    int8_t l_130 = (-9L);
    uint32_t l_139 = 0UL;
    if ((l_124 = (safe_div_func_uint16_t_u_u(func_4(((0x0A7084BC9C3D069FLL >= (g_9 = 7L)) & l_10), func_11(((safe_lshift_func_int8_t_s_u((g_15 == 0UL), 6)) <= g_15)), l_18, l_18.f0), g_29[1]))))
    { 
        struct S0 l_127 = {0x3FD71FAFL};
        struct S1 l_135[3] = {{0x27105428L,65534UL,0x9328A2DDD9115465LL,-4L,0xE863DC2CL},{0x27105428L,65534UL,0x9328A2DDD9115465LL,-4L,0xE863DC2CL},{0x27105428L,65534UL,0x9328A2DDD9115465LL,-4L,0xE863DC2CL}};
        int32_t l_136 = (-8L);
        int i;
        l_136 = (safe_sub_func_int8_t_s_s((l_127 , ((safe_add_func_int32_t_s_s(l_130, ((safe_div_func_int64_t_s_s(((safe_add_func_uint64_t_u_u(((l_135[0] = g_66) , (g_9 >= 0UL)), 1UL)) == l_127.f0), l_127.f0)) || l_130))) && g_66.f0)), g_30));
    }
    else
    { 
        l_139 &= ((6UL > (0x9E52L | 0L)) <= (!(g_138 , g_66.f1)));
    }
    return l_124;
}



static uint16_t  func_4(int64_t  p_5, union U5  p_6, struct S0  p_7, uint32_t  p_8)
{ 
    int32_t l_28 = 7L;
    int32_t l_32 = 0x5F93BE41L;
    int32_t l_34 = 0x709E8E54L;
    int32_t l_38 = (-1L);
    int32_t l_39 = 0xDB553A81L;
    struct S1 l_65 = {0xB7D07A12L,0UL,18446744073709551609UL,0L,0x3F408375L};
    for (p_8 = (-15); (p_8 < 42); p_8 = safe_add_func_uint8_t_u_u(p_8, 1))
    { 
        int32_t l_23 = 0L;
        int32_t l_24 = 0x511EC1FCL;
        int32_t l_26 = (-1L);
        int32_t l_33 = 0xEBB1BB30L;
        int32_t l_37 = (-5L);
        for (p_6.f0 = 29; (p_6.f0 <= 48); p_6.f0++)
        { 
            int8_t l_35[4];
            int32_t l_36 = (-1L);
            int i;
            for (i = 0; i < 4; i++)
                l_35[i] = 1L;
            --g_40;
            for (g_40 = 7; (g_40 != 26); ++g_40)
            { 
                return p_5;
            }
            for (g_27 = 0; (g_27 <= 1); g_27 += 1)
            { 
                int i;
                return l_35[(g_27 + 1)];
            }
        }
        ++g_45;
        if (p_6.f0)
            continue;
    }
    if (((((g_9 <= l_39) || p_5) >= p_6.f0) , p_7.f0))
    { 
        const uint64_t l_57 = 18446744073709551615UL;
        int32_t l_64[3][5] = {{0xF6251CA2L,2L,0xF6251CA2L,2L,0xF6251CA2L},{0x36403AC4L,0x36403AC4L,0x36403AC4L,0x36403AC4L,0x36403AC4L},{0xF6251CA2L,2L,0xF6251CA2L,2L,0xF6251CA2L}};
        int32_t l_99[2];
        int i, j;
        for (i = 0; i < 2; i++)
            l_99[i] = 1L;
        l_64[0][4] ^= (l_38 = func_48((l_28 = (((~((0x4E0C42EFL > (safe_rshift_func_int8_t_s_u(((safe_div_func_int64_t_s_s(p_5, g_40)) > (safe_rshift_func_uint8_t_u_u((g_45 ^ p_6.f0), g_27))), g_40))) >= 7UL)) || 4294967295UL) | l_57))));
        for (g_15 = 2; (g_15 >= 0); g_15 -= 1)
        { 
            for (p_6.f0 = 0; (p_6.f0 <= 2); p_6.f0 += 1)
            { 
                int32_t l_74 = 0xC84746BAL;
                int i, j;
                if (l_64[g_15][(p_6.f0 + 2)])
                    break;
                g_66 = l_65;
                l_64[g_15][(g_15 + 1)] = ((safe_rshift_func_int16_t_s_u(l_64[g_15][p_6.f0], l_64[g_15][p_6.f0])) || (safe_mod_func_int32_t_s_s((safe_mul_func_int16_t_s_s((-1L), ((!0x440AFAA93538B87BLL) > l_74))), g_29[1])));
            }
            for (g_66.f1 = 0; (g_66.f1 <= 1); g_66.f1 += 1)
            { 
                int32_t l_75 = 0x6B30262AL;
                int i;
                l_75 = g_29[g_66.f1];
            }
        }
        l_99[1] = (p_7.f0 && ((safe_add_func_int32_t_s_s((((g_17.f0 = (safe_div_func_int64_t_s_s((!l_65.f4), (safe_add_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u(g_30, 0)) | ((safe_mod_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s((((safe_rshift_func_int8_t_s_u(((l_64[0][4] = (safe_sub_func_int16_t_s_s(1L, l_57))) < g_29[1]), 1)) , l_32) ^ p_7.f0), p_8)), 7)), l_38)), l_57)) <= g_40)), 0x0374L))))) != l_57) > l_57), l_57)) >= g_29[1]));
    }
    else
    { 
        struct S1 l_103 = {0x0F57B567L,65535UL,0UL,2L,1UL};
        union U4 l_112[3] = {{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL}};
        uint32_t l_117[5];
        uint32_t l_119 = 4294967286UL;
        int i;
        for (i = 0; i < 5; i++)
            l_117[i] = 4294967287UL;
        for (l_65.f1 = 0; (l_65.f1 == 35); ++l_65.f1)
        { 
            struct S1 l_102 = {7UL,0xD896L,18446744073709551615UL,-6L,0xE781FF1CL};
            if (p_8)
                break;
            l_103 = l_102;
        }
        for (g_66.f4 = (-22); (g_66.f4 != 8); g_66.f4 = safe_add_func_int8_t_s_s(g_66.f4, 5))
        { 
            uint16_t l_113[3][5][2] = {{{0x4734L,0xC109L},{0x4734L,0UL},{0xE345L,0UL},{0x4734L,0xC109L},{0x4734L,0UL}},{{0xE345L,0UL},{0x4734L,0xC109L},{0x4734L,0UL},{0xE345L,0UL},{0x4734L,0xC109L}},{{0x4734L,0UL},{0xE345L,0xC109L},{0xE345L,65535UL},{0xE345L,0xC109L},{0xEE39L,0xC109L}}};
            int i, j, k;
            l_113[2][2][1] = (safe_div_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(65529UL, 2)), l_103.f3)), (l_112[2] , (p_5 & l_65.f2))));
            if ((safe_sub_func_uint16_t_u_u(((((g_15 = 0L) != (~(((l_65.f2 != 0x26BD8041L) == ((((g_29[1] ^ p_7.f0) || l_103.f1) < g_66.f2) && l_117[4])) <= p_8))) <= l_103.f2) & l_113[2][2][1]), l_113[2][1][1])))
            { 
                int16_t l_118[4] = {0x195EL,0x195EL,0x195EL,0x195EL};
                int i;
                l_119++;
            }
            else
            { 
                if (l_113[1][1][0])
                    break;
                l_103 = l_65;
                if (p_6.f0)
                    continue;
            }
            for (g_45 = 23; (g_45 == 59); g_45 = safe_add_func_uint16_t_u_u(g_45, 5))
            { 
                if (l_117[4])
                    break;
                l_34 &= (p_7.f0 ^ p_8);
            }
        }
    }
    return p_5;
}



static union U5  func_11(uint16_t  p_12)
{ 
    uint16_t l_16 = 0x9B85L;
    l_16 = g_15;
    return g_17;
}



static int32_t  func_48(uint16_t  p_49)
{ 
    for (g_45 = 0; (g_45 >= 45); g_45++)
    { 
        uint8_t l_60 = 253UL;
        l_60--;
    }
    return g_63;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_17.f0, "g_17.f0", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_27, "g_27", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_29[i], "g_29[i]", print_hash_value);

    }
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_66.f0, "g_66.f0", print_hash_value);
    transparent_crc(g_66.f1, "g_66.f1", print_hash_value);
    transparent_crc(g_66.f2, "g_66.f2", print_hash_value);
    transparent_crc(g_66.f3, "g_66.f3", print_hash_value);
    transparent_crc(g_66.f4, "g_66.f4", print_hash_value);
    transparent_crc(g_138.f0, "g_138.f0", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
