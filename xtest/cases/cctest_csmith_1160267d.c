// SPDX-License-Identifier: MIT
// cctest_csmith_1160267d.c --- cctest case csmith_1160267d (csmith seed 291513981)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x94ee19ed */

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

// Options:   -s 291513981 -o /tmp/csmith_gen_rie1hlq4/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   uint64_t  f0;
   uint16_t  f1;
   int16_t  f2;
   const uint8_t  f3;
};

union U1 {
   uint16_t  f0;
   uint64_t  f1;
   const int16_t  f2;
};

union U2 {
   uint32_t  f0;
   uint16_t  f1;
   int8_t  f2;
   int8_t * const  f3;
};


static int16_t g_2 = (-10L);
static int8_t g_26[1] = {0x65L};
static int8_t * const g_25 = &g_26[0];
static struct S0 g_31 = {0x00CA3C47AA296768LL,1UL,0x0A64L,1UL};
static uint32_t g_41 = 0x40C41AB7L;
static int32_t g_43 = 0L;
static int32_t g_57 = 0x5EFF85A0L;
static uint8_t g_60 = 0xC0L;
static int32_t g_109 = 0xCBCAB5D9L;
static uint8_t g_122 = 0x28L;
static int64_t g_127 = (-1L);
static int8_t g_130[3] = {(-1L),(-1L),(-1L)};
static int16_t g_131[5] = {8L,8L,8L,8L,8L};
static union U1 g_136 = {1UL};
static int8_t g_145[2][1][4] = {{{0xE2L,1L,0xE2L,0xE2L}},{{1L,1L,3L,1L}}};
static int64_t g_147 = 0x530B48A4C82FA94DLL;
static int64_t g_150 = 0L;
static int32_t g_151 = (-1L);
static int16_t g_153 = 0x582EL;
static uint32_t g_154 = 1UL;
static int8_t g_165 = 0x9CL;
static int16_t g_166 = 0xFC47L;
static int64_t g_168 = 0x7E322D52091D0556LL;
static uint64_t g_169 = 0xA1D096303E4D4EBDLL;
static int16_t *g_181 = (void*)0;
static union U1 g_212 = {0x3E1AL};
static union U1 *g_211 = &g_212;
static int8_t **g_218 = (void*)0;
static union U2 g_221 = {0xAEE0F389L};
static int32_t g_249 = 0xB2346245L;
static union U1 g_261 = {0xAD86L};
static struct S0 g_264 = {0x72D44C0C1DFA2340LL,3UL,6L,255UL};
static uint32_t g_279 = 0UL;
static uint32_t g_304 = 1UL;
static union U2 g_331 = {8UL};
static union U2 *g_330 = &g_331;
static int32_t *g_333 = &g_43;
static int16_t **g_359 = &g_181;
static int16_t **g_360[5][2][2] = {{{(void*)0,(void*)0},{&g_181,&g_181}},{{&g_181,&g_181},{&g_181,(void*)0}},{{(void*)0,&g_181},{&g_181,(void*)0}},{{&g_181,(void*)0},{&g_181,(void*)0}},{{&g_181,&g_181},{(void*)0,(void*)0}}};
static int64_t g_406[5] = {0x11EA45025916FA61LL,0x11EA45025916FA61LL,0x11EA45025916FA61LL,0x11EA45025916FA61LL,0x11EA45025916FA61LL};
static uint16_t g_408 = 1UL;
static const int8_t ***g_464 = (void*)0;
static uint64_t g_472 = 18446744073709551615UL;
static uint64_t g_525 = 0x8E0D7B228BFD3ABALL;
static uint16_t g_528[6] = {1UL,1UL,1UL,1UL,1UL,1UL};
static const int32_t g_537[5] = {4L,4L,4L,4L,4L};
static union U1 g_542 = {65530UL};
static int32_t g_586[2][3][5] = {{{0xC59E434AL,(-1L),0x9D2EB056L,0xC560F953L,0L},{0xC59E434AL,0xB3CB56F7L,0x990EE0F5L,0xC560F953L,0xC560F953L},{0x9D2EB056L,0xB3CB56F7L,0x9D2EB056L,0L,0xC560F953L}},{{0xC59E434AL,(-1L),0x9D2EB056L,0xC560F953L,0L},{0xC59E434AL,0xB3CB56F7L,0x990EE0F5L,0xC560F953L,0xC560F953L},{0x9D2EB056L,0xB3CB56F7L,0x9D2EB056L,0L,0xC560F953L}}};
static uint64_t g_587[1] = {3UL};
static const union U1 g_619 = {0xF226L};
static uint16_t g_662 = 0xAB76L;
static const uint32_t g_687[1][6] = {{0xCCACDC15L,0UL,0xCCACDC15L,0xCCACDC15L,0UL,0xCCACDC15L}};
static int16_t g_728 = 0x8D15L;
static int32_t g_729 = 0xE034D1B3L;
static int64_t g_730 = 0L;
static uint16_t g_731 = 1UL;
static int64_t g_745 = 1L;
static int64_t g_746 = 8L;
static int32_t g_747 = 0L;
static int64_t g_748[7] = {1L,0L,1L,1L,0L,1L,1L};
static const uint8_t *g_759 = (void*)0;
static const uint8_t **g_758 = &g_759;
static int16_t ** const ***g_792 = (void*)0;
static int16_t ***g_795 = (void*)0;
static int16_t ****g_794 = &g_795;
static int16_t *****g_793 = &g_794;
static uint64_t *g_818[7][1][5] = {{{&g_136.f1,&g_136.f1,&g_136.f1,&g_136.f1,&g_136.f1}},{{&g_136.f1,&g_136.f1,&g_136.f1,&g_136.f1,&g_136.f1}},{{&g_136.f1,&g_136.f1,&g_136.f1,&g_136.f1,&g_136.f1}},{{&g_136.f1,&g_136.f1,&g_136.f1,&g_136.f1,&g_136.f1}},{{&g_136.f1,&g_136.f1,&g_136.f1,&g_136.f1,&g_136.f1}},{{&g_136.f1,&g_136.f1,&g_136.f1,&g_136.f1,&g_136.f1}},{{&g_136.f1,&g_136.f1,&g_136.f1,&g_136.f1,&g_136.f1}}};
static int16_t g_891 = (-7L);
static uint32_t g_892 = 0UL;
static uint32_t g_944 = 0x7CBFB81DL;
static int32_t **g_987 = &g_333;
static union U2 **g_1023 = &g_330;
static uint64_t **g_1066 = &g_818[0][0][1];
static uint64_t ***g_1065 = &g_1066;
static uint64_t g_1144 = 0UL;
static int8_t g_1157 = 0x5FL;
static uint32_t g_1158 = 0x9B86C39AL;
static int32_t g_1162 = 0L;
static int8_t g_1163 = (-10L);
static uint8_t g_1166 = 248UL;
static uint8_t *g_1171 = &g_1166;
static uint8_t **g_1170 = &g_1171;
static int64_t *g_1173 = &g_748[3];
static int64_t **g_1172 = &g_1173;
static int8_t g_1192 = 0x28L;
static uint64_t g_1223 = 18446744073709551607UL;
static uint16_t g_1265 = 1UL;
static int16_t g_1290 = 0x58CBL;
static int64_t g_1291 = 0x1B4E4AE3BEA30522LL;
static uint64_t g_1294 = 0x5F33186E4948828CLL;
static uint64_t g_1355 = 0x8CFE7F3D71229759LL;
static int32_t g_1377 = 1L;
static uint32_t g_1378[4][1] = {{18446744073709551606UL},{0x8C888788L},{18446744073709551606UL},{0x8C888788L}};
static uint16_t *** const g_1382 = (void*)0;
static union U1 g_1389 = {0UL};
static union U1 **g_1399[6] = {&g_211,&g_211,&g_211,&g_211,&g_211,&g_211};
static union U1 *** const g_1398 = &g_1399[5];
static uint8_t ****g_1450 = (void*)0;
static uint8_t *****g_1449 = &g_1450;
static int32_t g_1464 = 1L;
static int32_t g_1518 = (-7L);
static int64_t g_1519[2] = {0x81D911BB3C993566LL,0x81D911BB3C993566LL};
static uint32_t g_1526 = 2UL;
static int64_t g_1543 = 6L;
static uint8_t g_1545 = 1UL;
static uint16_t *g_1549 = &g_221.f1;
static uint16_t **g_1548[2][2] = {{&g_1549,&g_1549},{&g_1549,&g_1549}};
static union U2 ***g_1598 = &g_1023;
static uint8_t g_1630 = 3UL;
static int64_t *** const g_1654[7] = {&g_1172,&g_1172,&g_1172,&g_1172,&g_1172,&g_1172,&g_1172};
static int64_t *** const *g_1653[4][1] = {{&g_1654[2]},{&g_1654[2]},{&g_1654[2]},{&g_1654[2]}};
static int64_t *** const **g_1652 = &g_1653[1][0];
static const int64_t *g_1659 = &g_150;
static const int64_t **g_1658 = &g_1659;
static const int64_t ***g_1657[2] = {&g_1658,&g_1658};
static const int64_t ****g_1656 = &g_1657[0];
static const int64_t *****g_1655 = &g_1656;
static uint16_t g_1673[6][4] = {{0x13CAL,0UL,0UL,0x13CAL},{0UL,0x13CAL,0UL,0UL},{0x13CAL,0x13CAL,0xE99EL,0x13CAL},{0x13CAL,0UL,0UL,0x13CAL},{0UL,0x13CAL,0UL,0UL},{0x13CAL,0x13CAL,0xE99EL,0x13CAL}};
static struct S0 g_1680 = {4UL,0x9DF6L,0x2538L,0x3AL};
static uint16_t g_1698 = 65533UL;
static uint8_t g_1752 = 0xC0L;
static uint32_t g_1755 = 0x584C8B0BL;
static int64_t g_1765 = (-10L);
static int32_t g_1766 = (-4L);
static int8_t g_1770 = 0xD2L;
static int32_t g_1771 = 0xC7A93BE7L;
static int32_t g_1772[1][2][1] = {{{0x77F251BFL},{0x77F251BFL}}};
static int64_t g_1775 = (-3L);
static uint32_t g_1776 = 1UL;
static uint8_t g_1874 = 0xC2L;
static int32_t *g_1883 = &g_1377;
static int64_t g_1886 = 0x0E38A4681CE1D27ELL;
static int64_t g_1887 = 1L;
static uint8_t g_1888 = 0x15L;
static const union U2 *g_1911 = (void*)0;
static const union U2 **g_1910 = &g_1911;
static const int32_t g_2014 = 0x62EC3053L;
static int32_t g_2156 = 0x24D74A88L;
static uint32_t g_2187 = 18446744073709551612UL;
static union U1 *g_2192 = &g_542;
static uint16_t ****g_2264 = (void*)0;
static uint8_t g_2278 = 248UL;
static const uint16_t *g_2317 = &g_1673[3][1];
static const uint16_t **g_2316 = &g_2317;
static const uint16_t ***g_2315 = &g_2316;
static int32_t g_2352[4] = {0x0BAD6E28L,0x0BAD6E28L,0x0BAD6E28L,0x0BAD6E28L};
static struct S0 g_2383 = {0x0276759BF50EE36BLL,0x428DL,1L,1UL};
static struct S0 *g_2382 = &g_2383;
static union U1 g_2486[7] = {{65529UL},{65529UL},{65529UL},{65529UL},{65529UL},{65529UL},{65529UL}};
static uint16_t g_2521 = 0xACDEL;
static uint16_t * const g_2520 = &g_2521;
static uint16_t * const *g_2519 = &g_2520;
static uint16_t * const **g_2518 = &g_2519;
static uint16_t * const ***g_2517[4][7] = {{&g_2518,&g_2518,&g_2518,&g_2518,&g_2518,&g_2518,&g_2518},{&g_2518,&g_2518,&g_2518,&g_2518,&g_2518,&g_2518,&g_2518},{&g_2518,&g_2518,&g_2518,&g_2518,&g_2518,&g_2518,&g_2518},{&g_2518,&g_2518,&g_2518,&g_2518,&g_2518,&g_2518,&g_2518}};
static uint16_t * const ****g_2516 = &g_2517[2][3];
static const int32_t *g_2670 = &g_1377;
static uint32_t g_2681 = 0x6B5A8C6EL;
static int8_t g_2696 = 0x8FL;
static uint64_t g_2698[2][3][3] = {{{0xEFA4ED9E6264A05ALL,0xEFA4ED9E6264A05ALL,18446744073709551606UL},{0UL,0UL,0xEE2B40743585F1C2LL},{0xEFA4ED9E6264A05ALL,0xEFA4ED9E6264A05ALL,18446744073709551606UL}},{{0UL,0UL,0UL},{0x46DFF61739BB5F37LL,0x46DFF61739BB5F37LL,0xEFA4ED9E6264A05ALL},{0xC3A871D1BA057618LL,0xC3A871D1BA057618LL,0UL}}};
static int32_t g_2736 = 2L;
static union U2 ****g_2816 = (void*)0;
static uint8_t g_2837[3][4][2] = {{{0UL,255UL},{0UL,0UL},{0UL,255UL},{0UL,0UL}},{{0UL,255UL},{0UL,0UL},{0UL,255UL},{0UL,0UL}},{{0UL,255UL},{0UL,0UL},{0UL,255UL},{0UL,0UL}}};
static int64_t *g_2859 = &g_1291;
static const int32_t *g_2867 = (void*)0;
static int64_t g_2882 = (-5L);
static int32_t *g_2923 = &g_1464;
static int32_t **g_2922[7][7] = {{(void*)0,&g_2923,&g_2923,(void*)0,(void*)0,&g_2923,&g_2923},{&g_2923,&g_2923,&g_2923,&g_2923,&g_2923,&g_2923,&g_2923},{(void*)0,(void*)0,&g_2923,&g_2923,(void*)0,(void*)0,&g_2923},{&g_2923,&g_2923,&g_2923,&g_2923,&g_2923,&g_2923,&g_2923},{(void*)0,&g_2923,&g_2923,(void*)0,(void*)0,&g_2923,&g_2923},{&g_2923,&g_2923,&g_2923,&g_2923,&g_2923,&g_2923,&g_2923},{(void*)0,(void*)0,&g_2923,&g_2923,(void*)0,(void*)0,&g_2923}};
static uint64_t g_2942 = 0xE5139653B595C745LL;
static int32_t g_2993 = 0x9BD5838FL;
static int32_t g_2994 = 0x49C85D9AL;
static const union U1 g_3127 = {0x9B76L};
static int8_t * const *g_3148 = &g_25;
static int8_t * const **g_3147[4] = {&g_3148,&g_3148,&g_3148,&g_3148};
static int8_t * const ***g_3146 = &g_3147[2];
static uint64_t g_3199 = 18446744073709551615UL;
static uint64_t * const *g_3215 = &g_818[0][0][1];
static uint64_t * const **g_3214 = &g_3215;
static uint64_t * const ***g_3213 = &g_3214;
static uint64_t * const **** const g_3212 = &g_3213;
static uint16_t g_3228 = 0x454BL;
static uint32_t g_3271 = 0x5D52D19FL;
static struct S0 *g_3282 = (void*)0;



static union U1  func_1(void);
static struct S0  func_3(uint8_t  p_4, int8_t * p_5);
static int8_t * func_7(union U1  p_8, int32_t  p_9, int8_t * p_10, int8_t * p_11, int8_t * p_12);
static union U2  func_20(int8_t * const  p_21, int64_t  p_22, int8_t * p_23, int8_t * p_24);
static int8_t * func_27(int8_t * p_28, uint32_t  p_29, struct S0  p_30);
static int32_t  func_63(int32_t  p_64, uint8_t  p_65);
static const uint16_t  func_72(union U2  p_73, int32_t  p_74, uint16_t * p_75, struct S0  p_76);
static union U2  func_80(int32_t * p_81);




static union U1  func_1(void)
{ 
    uint32_t l_6[4][4][4] = {{{3UL,0xF38D927FL,4294967292UL,0x7E44142BL},{0xF38D927FL,0x39C7C6F1L,0UL,0x9008CF5AL},{0UL,3UL,0x7E44142BL,0x9008CF5AL},{0xBFBD3AEBL,0x39C7C6F1L,0xBFBD3AEBL,0x7E44142BL}},{{0x193C1DE6L,0xF38D927FL,4294967295UL,0x193C1DE6L},{0UL,0x7E44142BL,4294967292UL,0xF38D927FL},{0x7E44142BL,0x39C7C6F1L,4294967292UL,4294967292UL},{0UL,0UL,4294967295UL,0x9008CF5AL}},{{0x193C1DE6L,0UL,0xBFBD3AEBL,0xF38D927FL},{0xBFBD3AEBL,0xF38D927FL,0x7E44142BL,0xBFBD3AEBL},{0UL,0xF38D927FL,0UL,0xF38D927FL},{0xF38D927FL,0UL,4294967292UL,0x9008CF5AL}},{{3UL,0UL,0x7E44142BL,4294967292UL},{0x193C1DE6L,0x39C7C6F1L,1UL,0xF38D927FL},{0x193C1DE6L,0x7E44142BL,0x7E44142BL,0x193C1DE6L},{3UL,0xF38D927FL,4294967292UL,0x7E44142BL}}};
    union U1 l_13 = {1UL};
    int8_t *l_2498 = (void*)0;
    int8_t **l_2497 = &l_2498;
    int8_t *l_2499[4][1][5] = {{{(void*)0,&g_165,&g_1157,&g_1157,&g_165}},{{&g_1163,&g_26[0],&g_26[0],&g_26[0],&g_26[0]}},{{(void*)0,&g_165,&g_1157,&g_1157,&g_165}},{{&g_1163,&g_26[0],&g_26[0],&g_26[0],&g_26[0]}}};
    int8_t l_2772 = 4L;
    uint8_t l_2786 = 0x7FL;
    int16_t *l_2793 = &g_2383.f2;
    int16_t *l_2794 = (void*)0;
    int64_t l_2797 = 0xA64CE0CA3B740F3BLL;
    int32_t l_2817 = 0xEACE3552L;
    int16_t **l_2818[3];
    int64_t l_2840 = 0L;
    union U1 l_2853 = {0xFE17L};
    int32_t *l_2865 = &g_586[0][1][0];
    int64_t ****l_2869[2];
    int64_t *****l_2868 = &l_2869[0];
    struct S0 l_2876 = {0x782676FA98CA1500LL,0UL,-1L,255UL};
    int32_t l_2879 = (-10L);
    int32_t l_2880[1][2];
    union U1 l_2893[1][1] = {{{0xA76EL}}};
    int8_t l_2896[1];
    int32_t l_2969[4][1] = {{1L},{0xB7927283L},{1L},{0xB7927283L}};
    int32_t ***l_2987 = &g_987;
    int64_t l_2992 = 0x4501DFA63558F219LL;
    uint32_t l_2999 = 4294967295UL;
    union U1 **l_3002 = &g_2192;
    uint32_t l_3004[5][7][5] = {{{18446744073709551615UL,18446744073709551615UL,18446744073709551608UL,0xB9AF5E4EL,1UL},{0xCE21AACAL,18446744073709551615UL,0x6AE204A0L,18446744073709551611UL,0x48541361L},{0x1D9BDEC7L,3UL,1UL,1UL,3UL},{0xF08D1571L,0UL,0UL,18446744073709551608UL,0xF4DD614EL},{1UL,18446744073709551608UL,0x7553275EL,0x477D9DF5L,0xD22CCE88L},{0xA83C03B8L,0xDE1C764DL,0x328635BDL,0x77EDE555L,0x1D9BDEC7L},{1UL,18446744073709551615UL,0x6AE204A0L,0x8D1B5793L,0x9EF7AD86L}},{{1UL,0x28F74DE0L,18446744073709551615UL,0UL,18446744073709551614UL},{18446744073709551615UL,0xADC0C72FL,0x9D9B008DL,18446744073709551613UL,0x8D1B5793L},{0UL,18446744073709551615UL,4UL,0x1D9BDEC7L,0x0B20D059L},{1UL,18446744073709551614UL,0xCE21AACAL,18446744073709551615UL,1UL},{0x9D9B008DL,0x4DFE6B94L,0x9EF7AD86L,0x0B20D059L,18446744073709551608UL},{0x4DFE6B94L,18446744073709551610UL,0xC87887CBL,18446744073709551608UL,0x77EDE555L},{0x28F74DE0L,1UL,18446744073709551615UL,18446744073709551608UL,0UL}},{{0xA83C03B8L,0x1D9BDEC7L,0x1DE429D4L,0x0B20D059L,18446744073709551613UL},{0UL,0xB4E69716L,18446744073709551613UL,18446744073709551615UL,0x9EF7AD86L},{7UL,18446744073709551615UL,0x7553275EL,0x1D9BDEC7L,0xD67D59ADL},{0xC87887CBL,0xD22CCE88L,0xA83C03B8L,18446744073709551613UL,0x28F74DE0L},{0xD67D59ADL,18446744073709551615UL,0x77EDE555L,0UL,0x77EDE555L},{0xE672B21FL,0xE672B21FL,0xCE21AACAL,0x8D1B5793L,18446744073709551615UL},{0xC87887CBL,1UL,0UL,0x77EDE555L,1UL}},{{1UL,18446744073709551610UL,0x865ADF17L,0x477D9DF5L,0x0B20D059L},{0xD22CCE88L,1UL,9UL,18446744073709551608UL,18446744073709551615UL},{0xA83C03B8L,0xE672B21FL,18446744073709551615UL,0xF4DD614EL,0xDE1C764DL},{0xADC0C72FL,18446744073709551615UL,18446744073709551615UL,0xADC0C72FL,0x9EF7AD86L},{18446744073709551608UL,0xD22CCE88L,9UL,18446744073709551613UL,1UL},{0x9D9B008DL,18446744073709551615UL,0xE14CEF64L,18446744073709551613UL,0UL},{0x1D9BDEC7L,0xB4E69716L,18446744073709551610UL,0xE672B21FL,0xF4DD614EL}},{{0xDE1C764DL,0x1D9BDEC7L,0xCE21AACAL,0x28F74DE0L,1UL},{18446744073709551615UL,1UL,0x0B20D059L,0xF4DD614EL,1UL},{0x477D9DF5L,18446744073709551610UL,0x342A7E81L,0x4DFE6B94L,0xF4DD614EL},{0x8D1B5793L,0x4DFE6B94L,0x7553275EL,1UL,0UL},{0xA83C03B8L,18446744073709551614UL,18446744073709551610UL,0x77EDE555L,1UL},{18446744073709551615UL,18446744073709551615UL,0x8ABC2B3CL,1UL,0x9EF7AD86L},{1UL,0xADC0C72FL,18446744073709551615UL,0xDE1C764DL,0xDE1C764DL}}};
    uint32_t l_3034 = 1UL;
    int32_t l_3035 = 0L;
    int32_t l_3056 = (-1L);
    uint16_t l_3087 = 0x0A32L;
    union U1 *l_3104 = &g_1389;
    const union U1 *l_3126 = &g_3127;
    uint16_t **l_3178 = &g_1549;
    uint16_t **l_3179 = (void*)0;
    int32_t l_3227 = (-7L);
    int32_t l_3229 = 0x31FF9C4AL;
    struct S0 l_3249 = {0x76BFC4CF91E71C99LL,0UL,0x1472L,0x10L};
    uint8_t ** const *l_3251[1];
    uint8_t *l_3260 = &g_1630;
    int32_t l_3276 = 0x3EDB204BL;
    struct S0 **l_3281[5];
    int32_t l_3286 = (-1L);
    const int16_t l_3287[4][7] = {{0x3178L,0xEA73L,0x3178L,0xEA73L,0x3178L,0xEA73L,0x3178L},{1L,1L,1L,1L,1L,1L,1L},{0x3178L,0xEA73L,0x3178L,0xEA73L,0x3178L,0xEA73L,0x3178L},{1L,1L,1L,1L,1L,1L,1L}};
    int64_t l_3288 = 0L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_2818[i] = &l_2793;
    for (i = 0; i < 2; i++)
        l_2869[i] = (void*)0;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_2880[i][j] = 4L;
    }
    for (i = 0; i < 1; i++)
        l_2896[i] = 1L;
    for (i = 0; i < 1; i++)
        l_3251[i] = &g_1170;
    for (i = 0; i < 5; i++)
        l_3281[i] = (void*)0;
    if ((g_2 || (func_3(l_6[0][0][0], func_7(l_13, ((safe_sub_func_int64_t_s_s((safe_add_func_int16_t_s_s((safe_add_func_int16_t_s_s(l_6[0][0][0], (func_20(g_25, l_13.f2, ((*l_2497) = func_27(&g_26[0], l_13.f2, g_31)), l_2499[0][0][3]) , l_13.f0))), 0x17F1L)), l_13.f0)) ^ 0L), &g_1157, l_2499[0][0][3], l_2499[0][0][3])) , 0x83BE9465D988D013LL)))
    { 
        int8_t l_2777 = 0L;
        int32_t l_2787 = 0xA8A01F12L;
        const int64_t ****l_2790 = (void*)0;
        union U2 l_2796 = {18446744073709551611UL};
        union U1 l_2801[6][3][4] = {{{{0xD116L},{0x9DD9L},{0x65EBL},{0x9DD9L}},{{0xD116L},{0x0287L},{0x65EBL},{5UL}},{{0x65EBL},{5UL},{0x65EBL},{0x0287L}}},{{{0UL},{5UL},{0xD116L},{5UL}},{{0UL},{0x0287L},{0x65EBL},{5UL}},{{0x65EBL},{5UL},{0x65EBL},{0x0287L}}},{{{0UL},{5UL},{0xD116L},{5UL}},{{0UL},{0x0287L},{0x65EBL},{5UL}},{{0x65EBL},{5UL},{0x65EBL},{0x0287L}}},{{{0UL},{5UL},{0xD116L},{5UL}},{{0UL},{0x0287L},{0x65EBL},{5UL}},{{0x65EBL},{5UL},{0x65EBL},{0x0287L}}},{{{0UL},{5UL},{0xD116L},{5UL}},{{0UL},{0x0287L},{0x65EBL},{5UL}},{{0x65EBL},{5UL},{0x65EBL},{0x0287L}}},{{{0UL},{5UL},{0xD116L},{5UL}},{{0UL},{0x0287L},{0x65EBL},{5UL}},{{0x65EBL},{5UL},{0x65EBL},{0x0287L}}}};
        uint8_t l_2841 = 255UL;
        int32_t *l_2842 = &g_2352[2];
        int8_t **l_2860 = &l_2498;
        int32_t l_2878[6][7] = {{0xF43DDE75L,0xF43DDE75L,0x2C5786C6L,(-1L),0xDBD19848L,0x2C5786C6L,0xDBD19848L},{(-1L),(-1L),(-1L),(-1L),(-6L),0x86501103L,(-1L)},{0x86501103L,0xDBD19848L,(-6L),(-6L),0xDBD19848L,0x86501103L,(-1L)},{0xDBD19848L,(-1L),0x2C5786C6L,0xF43DDE75L,0xF43DDE75L,0x2C5786C6L,(-1L)},{0xDBD19848L,(-1L),0x86501103L,0xDBD19848L,(-6L),(-6L),0xDBD19848L},{0x86501103L,(-1L),0x86501103L,(-6L),(-1L),(-1L),(-1L)}};
        uint8_t l_2883 = 0xBEL;
        uint16_t *l_2886 = (void*)0;
        uint64_t l_2895 = 0xD26EDBF72F53F702LL;
        int64_t l_2897 = (-1L);
        uint8_t l_2951 = 0UL;
        int32_t *l_2970[5];
        int64_t l_2995 = 0x1054E44DDB46B1EALL;
        uint64_t l_3033 = 0x7D0D4D99733C2BF1LL;
        union U1 l_3060 = {0x1E54L};
        uint32_t l_3077[7] = {7UL,7UL,7UL,7UL,7UL,7UL,7UL};
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_2970[i] = &l_2969[0][0];
        if ((((l_2787 |= (safe_mul_func_uint16_t_u_u(l_13.f2, ((*g_2520) = ((safe_mul_func_uint16_t_u_u((((l_2772 = 1L) , ((((((safe_mul_func_uint16_t_u_u((((safe_mod_func_uint32_t_u_u(4294967295UL, l_2777)) , &g_1065) == ((((*g_1883) &= ((safe_rshift_func_uint16_t_u_s((**g_2316), 13)) > ((!((!(safe_sub_func_int64_t_s_s((safe_mul_func_int8_t_s_s(l_2772, l_2777)), 18446744073709551606UL))) <= l_2772)) & l_2786))) > 0x5982E876L) , (void*)0)), 0x0E0AL)) <= l_2777) ^ 0UL) != l_2786) >= l_2777) <= (*g_25))) , 0UL), l_2777)) | 249UL))))) , 0x0BL) < (*g_1171)))
        { 
lbl_2788:
            (*g_1883) = l_2787;
        }
        else
        { 
            int16_t l_2795[1];
            int64_t l_2798 = (-4L);
            union U1 *l_2805 = &g_2486[6];
            int i;
            for (i = 0; i < 1; i++)
                l_2795[i] = (-10L);
            if (g_2681)
                goto lbl_2788;
            if (((((l_2777 != (+((*g_1652) == ((*g_1655) = l_2790)))) > l_2777) == (((((((safe_rshift_func_uint16_t_u_s(((l_2793 = l_2793) != ((*g_359) = l_2794)), (((*g_1171) == l_2795[0]) <= 1UL))) , l_2796) , l_2797) , (*g_1883)) && l_6[0][2][2]) , l_2777) , l_2798)) ^ l_2796.f1))
            { 
                union U1 l_2804 = {0x7010L};
                for (g_279 = 0; (g_279 < 60); ++g_279)
                { 
                    l_2787 = (*g_1883);
                    return l_2801[1][2][3];
                }
                for (g_1771 = 25; (g_1771 < 17); g_1771 = safe_sub_func_uint8_t_u_u(g_1771, 1))
                { 
                    return l_2804;
                }
                if ((*g_1883))
                { 
                    (**g_1398) = l_2805;
                }
                else
                { 
                    (*g_987) = &l_2787;
                    return l_2804;
                }
            }
            else
            { 
                uint64_t **** const *l_2806 = (void*)0;
                l_2806 = l_2806;
            }
        }
lbl_2971:
        for (g_57 = 0; (g_57 < 3); ++g_57)
        { 
            int16_t * const ****l_2813 = (void*)0;
            const int32_t l_2814 = 0x8B79B9A5L;
            union U2 ****l_2815 = &g_1598;
            l_2817 = (safe_div_func_int32_t_s_s((safe_div_func_int64_t_s_s((((l_2813 != (void*)0) ^ l_2814) && (((g_2816 = (l_2815 = (void*)0)) == &g_1598) > ((((l_6[0][0][0] & 0xEDEDAE182EB92604LL) > l_2796.f0) , 1L) , l_2796.f1))), (**g_1658))), 0xC9075F29L));
            l_2818[2] = &l_2793;
            if (((65535UL < (--(*g_2520))) , (((safe_div_func_int16_t_s_s(((l_2814 || (safe_sub_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(((safe_sub_func_int16_t_s_s((safe_add_func_int32_t_s_s((safe_mod_func_int16_t_s_s((l_13.f0 != ((safe_rshift_func_uint16_t_u_s(((l_2787 = (safe_rshift_func_int16_t_s_s(g_2837[0][2][1], ((**g_2316) , 1L)))) ^ (safe_mod_func_uint32_t_u_u(l_2772, l_2801[1][2][3].f2))), 15)) >= 0xFAL)), 1UL)), l_2814)), l_2814)) <= l_2840), 0x4FB8BF2FL)), l_2801[1][2][3].f2))) < 0xA42F718EL), l_2841)) ^ l_2814) != g_528[2])))
            { 
                const uint32_t l_2845 = 0x700449F6L;
                (*g_987) = (l_2842 = &l_2817);
                (*g_1883) ^= ((safe_add_func_int32_t_s_s((**g_987), (l_2845 || ((*g_1171) = 0x47L)))) || (safe_mod_func_uint8_t_u_u(0x7DL, l_2786)));
                for (g_1158 = (-30); (g_1158 < 53); ++g_1158)
                { 
                    return (*g_211);
                }
            }
            else
            { 
                return l_2801[1][2][3];
            }
            for (g_1265 = 0; (g_1265 <= 1); g_1265 += 1)
            { 
                (*l_2842) |= 9L;
                for (g_1389.f0 = 0; (g_1389.f0 <= 0); g_1389.f0 += 1)
                { 
                    int64_t l_2852[1][2];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_2852[i][j] = 1L;
                    }
                    (*g_987) = (void*)0;
                    (*g_1883) = (safe_rshift_func_int16_t_s_s(l_2852[0][1], 14));
                    if ((*l_2842))
                        break;
                    (*g_987) = (*g_987);
                }
                return l_2853;
            }
        }
        (*l_2842) = (safe_mod_func_uint8_t_u_u(((**g_1658) == ((!(((safe_mod_func_uint16_t_u_u((0xC3F9L || 0xAFE7L), (l_2797 ^ ((((*l_2793) ^= ((l_2817 != l_2853.f2) > (((****g_1652) = g_2859) == (void*)0))) != 4UL) | 1UL)))) || l_2853.f0) <= 0xCD73731C8D9C584DLL)) < (*l_2842))), l_6[1][3][0]));
        if (((l_2853.f0 , l_2860) != (void*)0))
        { 
            int32_t **l_2866 = &l_2865;
            int32_t l_2875 = (-7L);
            int32_t *l_2877[7] = {&g_109,&g_1518,&g_1518,&g_109,&g_1518,&g_1518,&g_109};
            int64_t l_2881[1];
            int8_t *l_2890 = &g_165;
            union U2 l_2931 = {0x4B9B8584L};
            struct S0 *l_2936 = (void*)0;
            int i;
            for (i = 0; i < 1; i++)
                l_2881[i] = 0L;
            (*g_1883) = (safe_lshift_func_int16_t_s_u(((*l_2793) &= (safe_add_func_int64_t_s_s(((*g_1173) = ((((*l_2866) = l_2865) != (g_2867 = &g_1464)) || ((((((void*)0 != l_2868) == (+(*l_2842))) >= (safe_lshift_func_uint16_t_u_s((((safe_lshift_func_uint8_t_u_s((0x6E3D5B6DL || (((*g_1171) = (*l_2842)) > l_13.f0)), 4)) ^ (*l_2842)) != l_2875), (*l_2842)))) , l_2876) , l_2875))), (*g_1659)))), 6));
            --l_2883;
            if ((l_2793 != l_2886))
            { 
                struct S0 **l_2889 = &g_2382;
                int32_t l_2894[5] = {9L,9L,9L,9L,9L};
                uint16_t l_2917 = 2UL;
                int i;
                for (g_1766 = (-13); (g_1766 < 20); g_1766++)
                { 
                    return l_2801[5][2][0];
                }
                (*l_2889) = &g_264;
                (*g_1883) = ((func_3((*l_2842), l_2890) , ((safe_mod_func_int64_t_s_s((((((((((l_2893[0][0] , ((((**g_1172) ^= l_2894[0]) || ((*g_25) | (*l_2842))) < (*l_2842))) || g_2352[2]) != l_6[0][0][0]) == l_2895) , (*g_25)) && l_2896[0]) < l_2894[0]) > 0x1CAFL) >= l_2853.f0), l_2894[1])) | l_13.f0)) != (-3L));
                for (l_2841 = 0; (l_2841 <= 0); l_2841 += 1)
                { 
                    uint64_t **l_2909 = (void*)0;
                    uint64_t ***l_2908 = &l_2909;
                    const int32_t l_2916 = 2L;
                    int32_t ***l_2924 = &g_2922[3][5];
                    int32_t l_2932 = 0xC00AAD98L;
                    uint32_t l_2933 = 6UL;
                    (*g_1883) = ((((l_2897 & (safe_add_func_int8_t_s_s(((safe_sub_func_int16_t_s_s(((*g_1171) | (0x9075D6D8L == ((l_2880[0][1] = ((safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u(((safe_sub_func_int64_t_s_s((((*g_1065) == ((*l_2908) = (*g_1065))) >= (((+(safe_add_func_int8_t_s_s(0x41L, (((!(safe_mul_func_uint8_t_u_u(5UL, 1L))) < l_2916) <= 0xF5L)))) < 0x778AEA7EL) == l_2917)), l_6[0][1][1])) , 1UL), (*l_2842))), (*g_1883))) == 0xC3L)) != (*l_2842)))), 65528UL)) | g_1775), (*l_2842)))) < 0x539B9ACD65DFEDC4LL) > 0xEFL) , 0x9AC1F892L);
                    l_2894[0] = ((*g_1883) = (safe_rshift_func_int16_t_s_u((*l_2842), 14)));
                    (*g_1883) |= (g_127 < (safe_lshift_func_int8_t_s_u(((((*l_2924) = g_2922[3][5]) != &l_2865) ^ (safe_rshift_func_uint8_t_u_u(l_2894[4], 6))), ((safe_rshift_func_uint8_t_u_u(((0x3FL & (safe_lshift_func_uint8_t_u_u(l_2916, 5))) > ((*l_2793) = (l_2931 , 0xEBBBL))), l_2894[1])) && (*l_2842)))));
                    l_2933--;
                    (*l_2889) = l_2936;
                }
                (*g_1883) = (*g_1883);
            }
            else
            { 
                int32_t l_2939[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_2939[i] = 3L;
                for (g_166 = 0; (g_166 > (-25)); g_166--)
                { 
                    int64_t l_2940 = 0x82B2137453C66BB1LL;
                    int32_t l_2941 = 0x7D78C674L;
                    uint32_t *l_2956[2][5];
                    union U2 ****l_2959 = &g_1598;
                    union U2 *****l_2960 = &l_2959;
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 5; j++)
                            l_2956[i][j] = (void*)0;
                    }
                    g_2942++;
                    (*l_2842) = ((void*)0 == (*g_758));
                    (*g_1883) |= (safe_lshift_func_int16_t_s_s(l_2939[0], (safe_add_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((*l_2842), l_2951)), (((--(**g_1170)) ^ (((--g_2681) | (*l_2842)) , (((*l_2960) = l_2959) == (void*)0))) <= (safe_rshift_func_uint16_t_u_u((safe_add_func_int64_t_s_s((safe_lshift_func_int16_t_s_s(((0UL & 0UL) , l_2969[0][0]), 14)), l_13.f2)), 3)))))));
                    (*g_987) = l_2970[1];
                    return l_2801[0][0][3];
                }
                return l_2801[1][2][3];
            }
            if (g_31.f2)
                goto lbl_2971;
        }
        else
        { 
            const uint64_t l_2991 = 0x2B8A07E2560BBA30LL;
            int32_t l_2996 = (-1L);
            int32_t l_2997 = 0x47408FA7L;
            int32_t l_2998[3];
            uint32_t *l_3074 = &l_6[0][0][0];
            int i;
            for (i = 0; i < 3; i++)
                l_2998[i] = (-1L);
            (*l_2842) = (-3L);
            (*l_2842) &= ((*g_1883) >= (safe_sub_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(l_2969[2][0], (l_2996 = ((!(((safe_mod_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u(((safe_mod_func_int64_t_s_s((((safe_add_func_int16_t_s_s((safe_add_func_uint32_t_u_u(((void*)0 != &g_1883), ((0xECD43694L ^ (l_2987 != ((safe_rshift_func_int8_t_s_u(((safe_unary_minus_func_uint8_t_u((*g_1171))) , l_2991), 4)) , l_2987))) != 2L))), l_2992)) , (*****g_1652)) <= g_2993), 0x831C4C9FA8FE3F0ELL)) , 0xC98CL), 0xFB70L)) || g_2994), g_31.f0)) || l_2991) == l_2995)) > 0x88L)))), 1UL)));
            l_2999--;
            for (g_147 = 0; (g_147 <= 1); g_147 += 1)
            { 
                uint64_t l_3022 = 18446744073709551609UL;
                int64_t l_3032 = 0x14A0E6AF30FDBB33LL;
                const uint8_t ***l_3048[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_3048[i] = &g_758;
                if (((*g_25) & ((*g_1398) == l_3002)))
                { 
                    int32_t l_3003[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_3003[i] = 1L;
                    l_3004[3][6][1]++;
                }
                else
                { 
                    union U1 ***l_3008 = &g_1399[5];
                    union U1 ****l_3007 = &l_3008;
                    (*l_3007) = &g_1399[2];
                }
                for (g_2383.f2 = 1; (g_2383.f2 >= 0); g_2383.f2 -= 1)
                { 
                    int16_t l_3015 = 0x42FDL;
                    int32_t l_3023 = 9L;
                    int32_t **l_3038 = &l_2842;
                    uint8_t *l_3045 = &g_2278;
                    l_2996 = (safe_add_func_uint16_t_u_u((((((*l_2842) = ((safe_rshift_func_uint16_t_u_s(((safe_sub_func_int8_t_s_s(l_3015, (safe_sub_func_uint64_t_u_u((safe_add_func_uint64_t_u_u(((safe_mod_func_uint32_t_u_u(((((((l_3022 || (((((l_3023 = 6UL) && ((((~(((*g_2520)++) == (safe_mod_func_uint8_t_u_u(((void*)0 != (*l_2860)), (~(safe_mod_func_int32_t_s_s(l_3015, l_2996))))))) < 18446744073709551615UL) & l_3032) < l_3033)) < l_3034) > g_619.f0) > l_3022)) >= 0UL) <= (*l_2842)) ^ l_3015) != (*g_1171)) > l_2998[1]), (*l_2842))) | 0x4CBD5D1643CD7049LL), 3L)), l_3035)))) && 0xD2L), l_3015)) && l_2998[1])) || 0x1C18EDC4L) && 3L) < 0xE6L), 1L));
                    (*g_1883) = (&l_3015 != (void*)0);
                    (*l_3038) = ((**l_2987) = ((safe_div_func_uint16_t_u_u(l_2991, (l_3023 = 0xFD56L))) , &l_2878[0][2]));
                    (**g_987) = (safe_lshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(((*l_3045) = (++(*g_1171))), 1)), (safe_lshift_func_int16_t_s_u((l_3048[0] != (void*)0), l_3032))));
                    if ((*g_333))
                        continue;
                }
            }
            if ((+(safe_div_func_uint32_t_u_u(g_145[1][0][2], g_537[3]))))
            { 
                int32_t *l_3057[4] = {&l_2787,&l_2787,&l_2787,&l_2787};
                uint16_t l_3061[5] = {0x655CL,0x655CL,0x655CL,0x655CL,0x655CL};
                int i;
                for (g_1389.f1 = 0; (g_1389.f1 <= 0); g_1389.f1 += 1)
                { 
                    int32_t **l_3058 = (void*)0;
                    int32_t **l_3059 = &l_2970[1];
                    (**l_2987) = ((safe_lshift_func_int16_t_s_u((safe_sub_func_uint64_t_u_u(l_3056, (*l_2842))), 0)) , l_3057[3]);
                    (*l_3059) = ((**l_2987) = (void*)0);
                    return l_3060;
                }
                ++l_3061[3];
            }
            else
            { 
                uint32_t **l_3075 = &l_3074;
                int32_t l_3076 = (-3L);
                l_3076 = (((safe_add_func_uint16_t_u_u((safe_div_func_int32_t_s_s((((((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u((((((*l_3075) = l_3074) == &g_2681) || (-5L)) ^ (-6L)), 3)), l_2997)), ((*g_25) = l_3076))) && (*g_2859)) , l_3076) , l_3077[6]) & (-1L)), l_3076)), l_2991)) , g_1192) > g_1294);
                return (*g_211);
            }
        }
    }
    else
    { 
        int8_t ***l_3078 = &g_218;
        int32_t *l_3079 = &l_2879;
        int32_t l_3080 = (-1L);
        int32_t l_3085 = 0xD3002268L;
        int32_t l_3086 = 0L;
        uint16_t *****l_3098 = &g_2264;
        uint16_t l_3105 = 1UL;
        int8_t l_3106 = 0xE0L;
        union U2 l_3221 = {6UL};
        (**l_2987) = (void*)0;
        (*g_987) = (*g_987);
        if (((*g_1883) = ((((*l_3078) = g_218) == &g_25) != 1UL)))
        { 
            (*g_987) = l_3079;
        }
        else
        { 
            int32_t l_3081 = (-1L);
            int32_t *l_3082 = (void*)0;
            int32_t *l_3083 = &g_1377;
            int32_t *l_3084[2][7];
            uint16_t *****l_3099[3][3][2] = {{{(void*)0,&g_2264},{(void*)0,&g_2264},{(void*)0,&g_2264}},{{(void*)0,&g_2264},{(void*)0,&g_2264},{(void*)0,&g_2264}},{{(void*)0,&g_2264},{(void*)0,&g_2264},{(void*)0,&g_2264}}};
            int32_t *l_3128 = (void*)0;
            int16_t *l_3134 = &g_153;
            int8_t * const *l_3145 = &l_2499[2][0][0];
            int8_t * const **l_3144 = &l_3145;
            int8_t * const ***l_3143 = &l_3144;
            int32_t l_3167 = (-1L);
            int16_t l_3168 = 0x7B2CL;
            uint64_t l_3180 = 0x26E6B2F180849CD3LL;
            int32_t l_3240 = (-7L);
            union U1 l_3275 = {0xF0B2L};
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 7; j++)
                    l_3084[i][j] = &l_2880[0][0];
            }
            ++l_3087;
        }
    }
    for (g_136.f0 = 0; (g_136.f0 < 32); g_136.f0 = safe_add_func_uint8_t_u_u(g_136.f0, 2))
    { 
        (**g_3212) = (**g_3212);
    }
    if ((l_3288 ^= ((safe_div_func_uint32_t_u_u((((g_3282 = &l_3249) != (g_2382 = &g_1680)) ^ (l_3286 |= (((((safe_unary_minus_func_uint32_t_u(0UL)) | (*g_1171)) , (safe_rshift_func_int16_t_s_s((l_3251[0] != l_3251[0]), 14))) | 1L) ^ (**g_2316)))), l_3287[0][6])) > (*g_25))))
    { 
        int32_t *l_3289[3][1][7] = {{{&l_2879,&l_3056,&l_3056,&l_2879,&l_3056,&l_3056,&l_2879}},{{&l_3056,&l_2879,&l_3056,&l_3056,&l_2879,&l_3056,&l_3056}},{{&l_2879,&l_2879,&l_3056,&l_2879,&l_2879,&l_3056,&l_2879}}};
        uint64_t l_3290 = 1UL;
        union U1 *l_3309 = &g_2486[0];
        int i, j, k;
        l_3290--;
        for (g_165 = (-3); (g_165 > 23); g_165++)
        { 
            int32_t l_3296 = 0xB49C5220L;
            int32_t l_3297 = 3L;
            int32_t l_3298 = 1L;
            int32_t l_3299 = 0xCBB6BFBFL;
            int32_t l_3302[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
            int i;
            for (g_279 = 0; (g_279 <= 0); g_279 += 1)
            { 
                int32_t l_3295 = (-1L);
                int32_t l_3300 = 6L;
                int32_t l_3301[2];
                int32_t l_3303[3];
                uint32_t l_3304 = 4294967292UL;
                int32_t *l_3307 = (void*)0;
                int i;
                for (i = 0; i < 2; i++)
                    l_3301[i] = 2L;
                for (i = 0; i < 3; i++)
                    l_3303[i] = 0x837A93C6L;
                if (l_2896[g_279])
                    break;
                l_3304++;
                for (g_1192 = 0; (g_1192 <= 0); g_1192 += 1)
                { 
                    uint8_t l_3308 = 1UL;
                    (**l_2987) = (l_3307 = &g_1377);
                    (**g_987) = (-8L);
                    if ((*l_3307))
                        break;
                    if (l_3308)
                        continue;
                }
            }
            (**g_1398) = l_3309;
            (*g_1883) = l_3299;
        }
    }
    else
    { 
        return (*l_3126);
    }
    (**l_2987) = (void*)0;
    return (*g_2192);
}



static struct S0  func_3(uint8_t  p_4, int8_t * p_5)
{ 
    int32_t *l_2674 = &g_729;
    int32_t l_2679 = 4L;
    int32_t l_2680 = (-6L);
    int32_t l_2691 = 0x1A63893EL;
    int32_t l_2692 = 1L;
    uint32_t l_2693 = 0x79EBF754L;
    int32_t l_2697[4] = {1L,1L,1L,1L};
    struct S0 l_2701 = {18446744073709551615UL,65532UL,1L,255UL};
    uint8_t *** const l_2709 = (void*)0;
    uint8_t *** const *l_2708 = &l_2709;
    union U2 ***l_2760 = &g_1023;
    union U2 l_2761 = {0x1A2B6528L};
    union U2 *l_2765 = &g_331;
    union U2 ** const l_2764 = &l_2765;
    union U2 ** const *l_2763 = &l_2764;
    union U2 ** const **l_2762 = &l_2763;
    uint8_t *l_2766[4][3] = {{&g_1545,&g_1545,&g_1545},{&g_1545,&g_1545,&g_1545},{&g_1545,&g_1545,&g_1545},{&g_1545,&g_1545,&g_1545}};
    int32_t *l_2767 = &g_109;
    int i, j;
    for (g_1163 = 0; (g_1163 > 13); g_1163 = safe_add_func_uint32_t_u_u(g_1163, 9))
    { 
        int32_t l_2678[2];
        int i;
        for (i = 0; i < 2; i++)
            l_2678[i] = 0x25C3E4E9L;
        (*g_987) = l_2674;
        for (g_892 = 0; (g_892 > 58); g_892++)
        { 
            int32_t *l_2677[7] = {&g_2352[2],&g_1518,&g_1518,&g_2352[2],&g_1518,&g_1518,&g_2352[2]};
            int i;
            --g_2681;
        }
    }
    for (g_60 = 0; (g_60 <= 4); g_60 += 1)
    { 
        int16_t l_2684 = 0L;
        int32_t *l_2685 = &g_1377;
        int32_t *l_2686 = &g_2352[2];
        int32_t *l_2687 = (void*)0;
        int32_t *l_2688 = &g_2352[2];
        int32_t *l_2689 = &l_2679;
        int32_t *l_2690[4] = {&g_2352[2],&g_2352[2],&g_2352[2],&g_2352[2]};
        int8_t ***l_2719 = (void*)0;
        int8_t ****l_2718 = &l_2719;
        int i;
        --l_2693;
        g_2698[0][1][2]++;
        for (g_168 = 0; (g_168 <= 4); g_168 += 1)
        { 
            uint8_t l_2712 = 0x55L;
            for (l_2679 = 0; (l_2679 <= 1); l_2679 += 1)
            { 
                uint8_t ***l_2707 = &g_1170;
                uint8_t ****l_2706 = &l_2707;
                uint8_t *** const **l_2710 = &l_2708;
                int16_t **** const l_2713[6][6] = {{&g_795,&g_795,&g_795,&g_795,&g_795,&g_795},{&g_795,&g_795,&g_795,&g_795,&g_795,&g_795},{&g_795,&g_795,&g_795,&g_795,&g_795,&g_795},{&g_795,&g_795,&g_795,&g_795,&g_795,&g_795},{&g_795,&g_795,&g_795,&g_795,&g_795,&g_795},{&g_795,&g_795,&g_795,&g_795,&g_795,&g_795}};
                union U2 *l_2715 = &g_331;
                int32_t *l_2716[5][3] = {{&l_2679,&l_2679,&l_2679},{&g_729,&l_2680,&g_729},{&l_2679,&l_2679,&l_2679},{&g_729,&l_2680,&g_729},{&l_2679,&l_2679,&l_2679}};
                int i, j;
                if (((*g_1883) ^= ((((l_2701 , ((*p_5) = (safe_mod_func_uint8_t_u_u(g_131[g_168], (safe_rshift_func_uint16_t_u_s(((*g_1549) |= (g_131[g_168] > ((l_2706 == ((*l_2710) = l_2708)) , ((safe_unary_minus_func_uint8_t_u(((**g_1170) &= (((*l_2674) = p_4) > p_4)))) != p_4)))), l_2712)))))) < 0x2FL) >= (-1L)) < g_1265)))
                { 
                    int16_t *****l_2714 = &g_794;
                    (*l_2714) = l_2713[1][4];
                    if ((*l_2688))
                        continue;
                }
                else
                { 
                    (**g_1598) = l_2715;
                    (*g_987) = l_2716[0][2];
                    return l_2701;
                }
            }
        }
        (*l_2674) ^= (+((((*l_2685) != ((*l_2688) < (l_2718 == ((safe_rshift_func_uint8_t_u_s((((safe_sub_func_int16_t_s_s(((safe_add_func_uint32_t_u_u((safe_div_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((-10L), (safe_mod_func_int8_t_s_s((safe_sub_func_int64_t_s_s(((*****g_1652) , (0x0BAFL <= (safe_div_func_uint32_t_u_u(g_2736, g_145[0][0][2])))), p_4)), p_4)))), 0x1049L)), g_57)) ^ p_4), p_4)) & 18446744073709551615UL) , (*g_1171)), (*g_25))) , &g_464)))) , p_4) != g_304));
        (*l_2674) |= (((safe_unary_minus_func_uint8_t_u(p_4)) || (**g_2519)) & ((safe_div_func_int16_t_s_s((*l_2689), 0x0C34L)) == p_4));
    }
    (*l_2767) |= (safe_mul_func_int16_t_s_s((((safe_rshift_func_uint8_t_u_s((((0xE7DBL <= (+(safe_sub_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s((safe_mod_func_int32_t_s_s((l_2701 , (safe_sub_func_uint32_t_u_u(((safe_mod_func_uint64_t_u_u(((*g_2382) , (((!(p_4 || (safe_mod_func_uint32_t_u_u(((l_2760 = l_2760) != ((*l_2762) = (((l_2761 , (*g_211)) , 1UL) , &g_1023))), (-1L))))) , l_2766[2][1]) != &p_4)), (-1L))) , (*l_2674)), (*g_1883)))), g_406[2])), 3)) <= g_1771), (*p_5))) ^ (*l_2674)), (*l_2674))))) || (-4L)) == p_4), 6)) >= p_4) != 7L), p_4));
    return l_2701;
}



static int8_t * func_7(union U1  p_8, int32_t  p_9, int8_t * p_10, int8_t * p_11, int8_t * p_12)
{ 
    return &g_26[0];
}



static union U2  func_20(int8_t * const  p_21, int64_t  p_22, int8_t * p_23, int8_t * p_24)
{ 
    uint32_t l_2513[6];
    uint16_t *****l_2523 = &g_2264;
    int32_t l_2524 = 1L;
    int32_t l_2563 = 0x915B29CAL;
    const int8_t *l_2581 = (void*)0;
    const int8_t **l_2580 = &l_2581;
    const int8_t ***l_2579 = &l_2580;
    uint16_t * const l_2582 = (void*)0;
    uint8_t **l_2606[1];
    union U2 l_2671 = {0xF2D04C4EL};
    int i;
    for (i = 0; i < 6; i++)
        l_2513[i] = 0x954D5F40L;
    for (i = 0; i < 1; i++)
        l_2606[i] = (void*)0;
lbl_2597:
    (*g_333) &= 0x68234FA1L;
    for (g_41 = 0; (g_41 <= 1); g_41 += 1)
    { 
        uint64_t ****l_2542 = &g_1065;
        uint64_t *****l_2541 = &l_2542;
        int32_t l_2558 = (-1L);
        int32_t l_2632[7][2] = {{0L,0L},{0xE6E0F5AAL,0xE6E0F5AAL},{0xE6E0F5AAL,0L},{0L,0xDAC8054EL},{0L,0xDAC8054EL},{0L,0L},{0xE6E0F5AAL,0xE6E0F5AAL}};
        int16_t l_2642 = 0x0B74L;
        uint16_t l_2643 = 0x1A6DL;
        union U2 l_2646 = {18446744073709551614UL};
        int i, j;
        for (g_1290 = 1; (g_1290 >= 0); g_1290 -= 1)
        { 
            int i;
            (*g_1883) = g_748[(g_41 + 3)];
            for (g_728 = 0; (g_728 <= 1); g_728 += 1)
            { 
                const int8_t l_2512 = 0x6FL;
                for (g_261.f1 = 0; (g_261.f1 <= 1); g_261.f1 += 1)
                { 
                    int i, j, k;
                    if (g_586[g_1290][(g_1290 + 1)][g_1290])
                        break;
                    (*g_333) |= (1L != (safe_sub_func_uint8_t_u_u((safe_add_func_int8_t_s_s(g_586[g_1290][(g_1290 + 1)][(g_728 + 3)], ((0xF0L != (safe_div_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(0x8592L, ((safe_sub_func_int64_t_s_s(0xB356A249700430E0LL, ((**g_1066) = ((p_22 >= (((*****g_1652) = (((((safe_mod_func_int8_t_s_s(l_2512, l_2512)) != p_22) > p_22) != g_748[(g_41 + 3)]) >= 5UL)) || g_586[g_1290][(g_1290 + 1)][g_1290])) , p_22)))) ^ 18446744073709551615UL))), p_22))) <= 0xAEL))), l_2513[1])));
                }
            }
        }
        for (g_542.f1 = 0; (g_542.f1 <= 1); g_542.f1 += 1)
        { 
            uint16_t *****l_2522[4][6] = {{(void*)0,&g_2264,(void*)0,&g_2264,&g_2264,&g_2264},{(void*)0,&g_2264,&g_2264,&g_2264,&g_2264,(void*)0},{(void*)0,(void*)0,&g_2264,&g_2264,(void*)0,&g_2264},{(void*)0,&g_2264,(void*)0,&g_2264,&g_2264,&g_2264}};
            int32_t l_2533 = (-8L);
            uint32_t *l_2534 = &g_1158;
            uint8_t ***l_2556 = &g_1170;
            int8_t ** const *l_2583 = &g_218;
            union U2 l_2584 = {0xA08056DBL};
            union U1 l_2598[5][5][4] = {{{{0x1B1EL},{0x4412L},{1UL},{1UL}},{{0x1927L},{0x1927L},{0xDBFCL},{0x4412L}},{{0x4412L},{0x1B1EL},{0xBC84L},{0xFB86L}},{{7UL},{1UL},{1UL},{0xBC84L}},{{0xFB86L},{1UL},{0UL},{0xFB86L}}},{{{1UL},{0x1B1EL},{7UL},{0x4412L}},{{0x3257L},{0x1927L},{0x3257L},{1UL}},{{0xFB86L},{0x4412L},{0xA4D3L},{0UL}},{{0x1927L},{7UL},{0xBC84L},{0x4412L}},{{65533UL},{0xFB86L},{0xBC84L},{0x1B1EL}}},{{{0x1927L},{1UL},{0xA4D3L},{0UL}},{{0xFB86L},{0x3257L},{0x3257L},{0xFB86L}},{{0x3257L},{0xFB86L},{7UL},{65533UL}},{{1UL},{0x1927L},{0UL},{0UL}},{{0xFB86L},{65533UL},{1UL},{0UL}}},{{{7UL},{0x1927L},{0xBC84L},{65533UL}},{{0x4412L},{0xFB86L},{0xDBFCL},{0xFB86L}},{{0x1927L},{0x3257L},{1UL},{0UL}},{{0x1B1EL},{1UL},{0x3257L},{0x1B1EL}},{{1UL},{0xFB86L},{0UL},{0x4412L}}},{{{1UL},{7UL},{0x3257L},{0UL}},{{0x1B1EL},{1UL},{0xDBFCL},{0xDBFCL}},{{0x20B5L},{0x20B5L},{0x1927L},{1UL}},{{1UL},{0UL},{0UL},{0x3257L}},{{65534UL},{65533UL},{0xDBFCL},{0UL}}}};
            const struct S0 l_2657[2][7] = {{{0xB0F93260BA60E571LL,4UL,0L,0x21L},{0UL,0UL,0xF14FL,0x1DL},{0UL,0UL,0xF14FL,0x1DL},{0xB0F93260BA60E571LL,4UL,0L,0x21L},{0x66DF74AA6395A36BLL,0xCB81L,0x3585L,0x53L},{0UL,8UL,-1L,1UL},{0x66DF74AA6395A36BLL,0xCB81L,0x3585L,0x53L}},{{0xB0F93260BA60E571LL,4UL,0L,0x21L},{0UL,0UL,0xF14FL,0x1DL},{0UL,0UL,0xF14FL,0x1DL},{0xB0F93260BA60E571LL,4UL,0L,0x21L},{0x66DF74AA6395A36BLL,0xCB81L,0x3585L,0x53L},{0UL,8UL,-1L,1UL},{0x66DF74AA6395A36BLL,0xCB81L,0x3585L,0x53L}}};
            int i, j, k;
            if ((((*g_1549) >= ((((safe_add_func_uint8_t_u_u(((g_2516 = (void*)0) != (l_2523 = l_2522[1][1])), (l_2524 |= (*g_25)))) , (((safe_add_func_uint32_t_u_u((safe_div_func_uint64_t_u_u((1UL | ((*g_333) ^= (safe_mod_func_int8_t_s_s((((*l_2534) = (((safe_mod_func_uint8_t_u_u((g_728 && p_22), l_2533)) , &g_2382) == &g_2382)) < p_22), 0x74L)))), 0x5F13FBAC8C46654BLL)), 0UL)) || 0x5AL) || 0x976C57BCL)) | (*g_2520)) >= p_22)) <= l_2513[3]))
            { 
                uint64_t ****l_2540 = (void*)0;
                uint64_t *****l_2539 = &l_2540;
                int16_t *l_2555 = &g_264.f2;
                int32_t l_2557 = 0x5F5B9406L;
                union U2 l_2585 = {0xC5484C4DL};
                l_2558 = ((*g_333) ^= ((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_s(((((***l_2556) = ((l_2539 == l_2541) & (l_2533 <= (((((safe_div_func_int16_t_s_s(((0xDA254E4CL >= (((((safe_mul_func_int8_t_s_s(((++(*g_2520)) , (-6L)), (l_2513[1] || ((*l_2555) = ((safe_rshift_func_uint8_t_u_s(((safe_lshift_func_uint16_t_u_u(((0x62L < l_2533) < 0x826E13E8597C1EC8LL), p_22)) & 1UL), 4)) || p_22))))) || 0xCFL) != l_2533) , l_2556) != l_2556)) < 0L), 0x727AL)) >= p_22) != (*g_1883)) <= l_2557) == 0x85L)))) <= l_2513[1]) >= p_22), 11)), l_2524)) & 1UL));
                if (((0x47D9B0ADL & ((safe_rshift_func_uint16_t_u_u((p_22 != g_1291), ((l_2513[1] < ((p_22 > (((l_2563 || (!(safe_mod_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_s((safe_div_func_uint16_t_u_u(0x8CC2L, p_22)), 5)), (**g_1658))))) <= 65535UL) , l_2558)) , 2UL)) , p_22))) | l_2557)) | p_22))
                { 
                    (**g_987) |= (((safe_lshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(9UL, 4)), (safe_mod_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s((0xC09E1EC40119206DLL == l_2557), (((*g_1549) & (l_2557 > (l_2579 == ((l_2555 == l_2582) , l_2583)))) , l_2513[1]))), 7L)))) > 1L) >= 255UL);
                    if ((*g_333))
                        continue;
                    (**g_987) = ((*g_1883) ^= 0x4DD352C0L);
                    return l_2584;
                }
                else
                { 
                    if (p_22)
                        break;
                    return l_2585;
                }
            }
            else
            { 
                int32_t ***l_2595 = &g_987;
                uint8_t *l_2613 = &g_60;
                const union U2 l_2614[2][3] = {{{0x582F258AL},{0x582F258AL},{0x582F258AL}},{{0x582F258AL},{0x582F258AL},{0x582F258AL}}};
                int16_t *l_2618 = (void*)0;
                uint64_t **** const *l_2619 = &l_2542;
                int32_t *l_2623 = (void*)0;
                int32_t *l_2624 = &g_109;
                int32_t *l_2625 = &g_43;
                int32_t *l_2626 = &g_729;
                int32_t *l_2627 = &g_1518;
                int32_t *l_2628 = &g_729;
                int32_t *l_2629 = &g_43;
                int32_t *l_2630 = (void*)0;
                int32_t l_2631 = 0x00757392L;
                int32_t *l_2633 = &g_2352[2];
                int32_t *l_2634 = &g_729;
                int32_t *l_2635 = &l_2563;
                int32_t *l_2636 = &l_2632[1][1];
                int32_t *l_2637 = (void*)0;
                int32_t *l_2638 = &l_2524;
                int64_t l_2639 = 0xF0FF344EA818B1B7LL;
                int32_t l_2640 = (-4L);
                int32_t *l_2641[6] = {&l_2631,&g_729,&l_2631,&l_2631,&g_729,&l_2631};
                int i, j;
                if ((((safe_div_func_int8_t_s_s(0x39L, l_2513[5])) , (((((-1L) <= (((safe_sub_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(p_22, (p_22 >= ((*g_2520)++)))), (safe_unary_minus_func_int16_t_s(l_2563)))) > l_2558) ^ p_22)) <= (*g_333)) , &g_987) == l_2595)) && l_2513[4]))
                { 
                    if (l_2513[3])
                        break;
                }
                else
                { 
                    (*g_333) &= 0x173DA075L;
                }
                for (g_151 = 0; (g_151 <= 4); g_151 += 1)
                { 
                    union U2 *l_2596[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int i, j, k;
                    (*g_1023) = l_2596[4];
                    if (g_1290)
                        goto lbl_2597;
                    (***l_2595) ^= g_586[g_542.f1][(g_41 + 1)][(g_41 + 3)];
                    (**g_987) = ((l_2598[2][4][3] , (((((safe_div_func_uint8_t_u_u(((void*)0 != &g_2517[2][3]), g_586[g_41][g_41][(g_41 + 2)])) && ((safe_add_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u((((safe_unary_minus_func_uint64_t_u(((((((g_406[(g_41 + 1)] == ((**g_2519) ^= g_406[(g_542.f1 + 2)])) , l_2606[0]) == (void*)0) & (*p_23)) && 0x6BL) < (***l_2595)))) > p_22) , 0x92F3L), (*g_1549))), 7UL)) == l_2558)) & 0x89DA54515D355620LL) >= (***l_2595)) > (*p_21))) && 0L);
                }
                for (g_1752 = 0; (g_1752 <= 1); g_1752 += 1)
                { 
                    int32_t l_2615 = 9L;
                    int i, j, k;
                    l_2615 = (g_586[g_542.f1][(g_542.f1 + 1)][(g_41 + 3)] , ((***l_2595) , (l_2563 & ((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(((safe_div_func_int16_t_s_s(g_586[g_542.f1][(g_542.f1 + 1)][(g_41 + 3)], ((((void*)0 != l_2613) , l_2614[1][1]) , l_2558))) | (*g_25)), l_2558)), p_22)) >= 0xC5F7L))));
                    (***l_2595) = ((void*)0 != (*g_1598));
                    (*g_1883) = ((safe_lshift_func_int8_t_s_s((*p_21), 5)) > l_2584.f0);
                }
                l_2524 &= ((**g_987) = (((((*g_359) = (void*)0) != l_2618) && (l_2619 != (void*)0)) <= (safe_mul_func_int16_t_s_s(l_2513[1], (!(*g_1171))))));
                --l_2643;
            }
            for (g_1766 = 1; (g_1766 >= 0); g_1766 -= 1)
            { 
                return l_2646;
            }
            for (g_1680.f0 = 0; (g_1680.f0 <= 1); g_1680.f0 += 1)
            { 
                union U2 ***l_2651 = &g_1023;
                const int32_t *l_2668 = (void*)0;
                for (g_127 = 1; (g_127 >= 0); g_127 -= 1)
                { 
                    return l_2646;
                }
                for (g_1771 = 1; (g_1771 >= 0); g_1771 -= 1)
                { 
                    union U2 ***l_2650[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    union U2 ****l_2652 = (void*)0;
                    union U2 ****l_2653 = (void*)0;
                    union U2 ****l_2654 = &l_2651;
                    const int32_t **l_2669[6] = {&l_2668,&l_2668,&l_2668,&l_2668,&l_2668,&l_2668};
                    int i, j, k;
                    (**g_987) ^= ((g_586[g_41][(g_41 + 1)][(g_1680.f0 + 1)] <= ((safe_unary_minus_func_uint32_t_u(((*l_2534) ^= (safe_lshift_func_int8_t_s_u(((l_2650[1] != ((*l_2654) = l_2651)) , ((((safe_rshift_func_uint8_t_u_u(p_22, (**g_1170))) , l_2657[0][0]) , (safe_add_func_int8_t_s_s(((((safe_rshift_func_uint16_t_u_u((((((safe_mod_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((safe_div_func_int64_t_s_s(((g_528[2] , (-1L)) == p_22), p_22)), 0xEE85L)), 0x76L)) | 0x5DL) && 0x696A9A000D5BB2F6LL) >= 0xB8480F09L) | 0xFDF56049L), (**g_2316))) & 1UL) != 0xE091L) < 0x486518D3L), l_2524))) && 0x6679EF42D0108638LL)), l_2584.f2))))) > l_2642)) , p_22);
                    l_2668 = l_2668;
                    g_2670 = l_2668;
                }
            }
        }
    }
    return l_2671;
}



static int8_t * func_27(int8_t * p_28, uint32_t  p_29, struct S0  p_30)
{ 
    uint32_t l_38 = 0x925F8A41L;
    int32_t l_54 = 0xE151060FL;
    int32_t l_55 = 0L;
    int32_t l_56 = 0L;
    int64_t l_58[5] = {0x9717E5ED535453F2LL,0x9717E5ED535453F2LL,0x9717E5ED535453F2LL,0x9717E5ED535453F2LL,0x9717E5ED535453F2LL};
    int32_t l_59 = 0x3575542EL;
    union U1 *l_258 = &g_212;
    union U1 *l_260 = &g_261;
    uint16_t *l_263 = &g_212.f0;
    int16_t * const *l_1186 = (void*)0;
    union U2 *l_1187 = &g_331;
    uint8_t l_1200 = 0xDEL;
    int16_t l_1278 = 0L;
    int32_t *l_1288 = &l_56;
    int64_t l_1292 = 0x129B9044E83E27DALL;
    int32_t l_1320 = (-1L);
    uint8_t ***l_1348[6][4][4] = {{{&g_1170,&g_1170,&g_1170,&g_1170},{&g_1170,&g_1170,&g_1170,&g_1170},{&g_1170,&g_1170,&g_1170,&g_1170},{&g_1170,&g_1170,&g_1170,&g_1170}},{{&g_1170,&g_1170,&g_1170,&g_1170},{&g_1170,&g_1170,&g_1170,&g_1170},{&g_1170,&g_1170,&g_1170,&g_1170},{&g_1170,&g_1170,&g_1170,&g_1170}},{{&g_1170,&g_1170,&g_1170,&g_1170},{&g_1170,&g_1170,&g_1170,&g_1170},{&g_1170,&g_1170,&g_1170,&g_1170},{&g_1170,&g_1170,&g_1170,&g_1170}},{{&g_1170,&g_1170,&g_1170,&g_1170},{&g_1170,&g_1170,&g_1170,&g_1170},{&g_1170,&g_1170,&g_1170,&g_1170},{&g_1170,&g_1170,&g_1170,&g_1170}},{{&g_1170,&g_1170,&g_1170,&g_1170},{&g_1170,&g_1170,&g_1170,&g_1170},{&g_1170,&g_1170,&g_1170,&g_1170},{&g_1170,&g_1170,&g_1170,&g_1170}},{{&g_1170,&g_1170,&g_1170,&g_1170},{&g_1170,&g_1170,&g_1170,&g_1170},{&g_1170,&g_1170,&g_1170,&g_1170},{&g_1170,&g_1170,&g_1170,&g_1170}}};
    union U1 * const *l_1393 = (void*)0;
    union U1 * const **l_1392 = &l_1393;
    int64_t ***l_1437 = &g_1172;
    int64_t l_1485 = 0x184C671FD55AFF36LL;
    uint32_t *l_1493 = &g_41;
    uint32_t *l_1498 = (void*)0;
    uint32_t *l_1499 = &g_944;
    union U2 ***l_1500 = &g_1023;
    const int32_t *l_1508 = &l_54;
    int32_t l_1520 = 0xA4F2E51CL;
    int32_t l_1521 = 1L;
    int32_t l_1523 = 0xB32A0EC9L;
    int32_t l_1524 = 0x2F3D6346L;
    int16_t *l_1557 = &g_166;
    const uint32_t l_1565 = 0x5E4C9A31L;
    int8_t l_1621[5][3] = {{0L,0L,0L},{0x46L,0x46L,0x46L},{0L,0L,0L},{0x46L,0x46L,0x46L},{0L,0L,0L}};
    union U2 **l_1903 = &g_330;
    union U2 ***l_1902 = &l_1903;
    union U1 l_1909 = {0xEE7CL};
    const union U2 ***l_1912 = (void*)0;
    int16_t *l_1918 = &l_1278;
    int16_t l_2108 = 0x1EE7L;
    int32_t l_2109 = 8L;
    int8_t l_2113[7][4] = {{9L,(-2L),0x34L,0x34L},{0xC4L,0xC4L,0L,(-2L)},{(-2L),9L,0L,9L},{0xC4L,1L,0x34L,0L},{1L,(-2L),(-2L),1L},{(-2L),1L,1L,0x34L},{(-2L),1L,(-2L),0L}};
    int32_t l_2114 = 0L;
    int32_t l_2115 = 0xF890E1A3L;
    int32_t l_2116 = 1L;
    int32_t l_2117 = (-6L);
    int32_t l_2118 = 0xFCE322A4L;
    int64_t ** const l_2134 = (void*)0;
    int64_t ** const *l_2133 = &l_2134;
    int64_t ** const **l_2132 = &l_2133;
    int8_t l_2219 = 0xD0L;
    uint64_t *l_2330 = &g_1144;
    int8_t l_2459 = (-1L);
    const union U2 l_2483 = {18446744073709551613UL};
    union U1 *l_2484 = &g_1389;
    int i, j, k;
    return p_28;
}



static int32_t  func_63(int32_t  p_64, uint8_t  p_65)
{ 
    union U2 *l_361 = &g_221;
    int32_t l_362[5];
    uint64_t l_365 = 1UL;
    int16_t *l_366 = &g_166;
    int8_t ***l_457 = (void*)0;
    union U1 *l_468 = &g_261;
    const uint8_t *l_491 = &g_264.f3;
    int64_t *l_520 = (void*)0;
    int64_t *l_521 = &g_127;
    uint64_t l_524 = 0xD590C7D2AA3C1244LL;
    const int32_t *l_539 = (void*)0;
    uint16_t l_648 = 0x165CL;
    int8_t *l_691[4];
    int16_t **l_823 = &g_181;
    const int16_t *l_840[1];
    const int16_t **l_839 = &l_840[0];
    const int16_t ***l_838[2][4][1] = {{{(void*)0},{&l_839},{(void*)0},{&l_839}},{{(void*)0},{&l_839},{(void*)0},{&l_839}}};
    const int16_t ****l_837 = &l_838[1][2][0];
    int8_t l_848 = 1L;
    int32_t l_849 = 0x1B51E203L;
    const uint64_t *l_864[6];
    const uint64_t **l_863 = &l_864[3];
    const uint64_t ***l_862 = &l_863;
    int16_t ***l_897 = &g_360[2][0][1];
    int16_t ****l_896 = &l_897;
    int8_t **l_1003[3];
    uint16_t l_1008 = 0x7DD2L;
    uint64_t l_1024[1];
    uint8_t l_1045 = 0x91L;
    struct S0 l_1074[7] = {{2UL,1UL,0x5337L,0UL},{2UL,1UL,0x5337L,0UL},{2UL,1UL,0x5337L,0UL},{2UL,1UL,0x5337L,0UL},{2UL,1UL,0x5337L,0UL},{2UL,1UL,0x5337L,0UL},{2UL,1UL,0x5337L,0UL}};
    uint8_t *l_1117[4];
    uint8_t * const *l_1116[6] = {&l_1117[0],&l_1117[0],&l_1117[0],&l_1117[0],&l_1117[0],&l_1117[0]};
    uint8_t * const **l_1115[4][4][2];
    int16_t *****l_1121 = (void*)0;
    uint64_t l_1149 = 18446744073709551614UL;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_362[i] = 0x3498E7A9L;
    for (i = 0; i < 4; i++)
        l_691[i] = &g_26[0];
    for (i = 0; i < 1; i++)
        l_840[i] = &g_261.f2;
    for (i = 0; i < 6; i++)
        l_864[i] = &g_587[0];
    for (i = 0; i < 3; i++)
        l_1003[i] = &l_691[1];
    for (i = 0; i < 1; i++)
        l_1024[i] = 0x038DFBBA3C416557LL;
    for (i = 0; i < 4; i++)
        l_1117[i] = &l_1045;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 2; k++)
                l_1115[i][j][k] = &l_1116[4];
        }
    }
    return p_65;
}



static const uint16_t  func_72(union U2  p_73, int32_t  p_74, uint16_t * p_75, struct S0  p_76)
{ 
    uint8_t l_268 = 0x6BL;
    int32_t l_282 = 0L;
    int8_t *l_308 = (void*)0;
    int8_t **l_307[7][7] = {{&l_308,&l_308,&l_308,&l_308,&l_308,&l_308,&l_308},{&l_308,(void*)0,&l_308,&l_308,&l_308,&l_308,&l_308},{&l_308,&l_308,&l_308,&l_308,(void*)0,(void*)0,&l_308},{&l_308,&l_308,&l_308,&l_308,&l_308,&l_308,&l_308},{&l_308,&l_308,&l_308,&l_308,(void*)0,(void*)0,&l_308},{&l_308,&l_308,&l_308,(void*)0,&l_308,&l_308,&l_308},{&l_308,&l_308,&l_308,(void*)0,&l_308,&l_308,&l_308}};
    int8_t *l_309[5][5][5] = {{{&g_26[0],(void*)0,&g_26[0],(void*)0,&g_165},{(void*)0,&g_165,&g_145[1][0][2],&g_26[0],&g_130[2]},{&g_130[1],&g_130[1],&g_145[1][0][2],&g_130[1],&g_130[1]},{&g_26[0],&g_26[0],&g_26[0],&g_26[0],&g_221.f2},{&g_130[1],&g_145[1][0][2],&g_145[1][0][2],&g_145[1][0][2],&g_26[0]}},{{&g_145[1][0][2],&g_26[0],&g_130[0],&g_26[0],&g_221.f2},{&g_221.f2,&g_145[1][0][2],&g_130[1],&g_221.f2,&g_130[1]},{&g_221.f2,(void*)0,&g_130[1],&g_130[1],&g_130[2]},{&g_130[0],(void*)0,(void*)0,&g_130[0],&g_165},{&g_26[0],&g_145[1][0][2],&g_130[1],&g_221.f2,&g_26[0]}},{{&g_26[0],&g_26[0],&g_130[1],&g_145[0][0][3],&g_130[1]},{&g_130[1],&g_145[1][0][2],&g_130[2],&g_221.f2,&g_130[1]},{(void*)0,&g_26[0],&g_26[0],&g_130[0],&g_145[1][0][2]},{(void*)0,&g_130[1],(void*)0,&g_130[1],&g_130[1]},{(void*)0,&g_165,(void*)0,&g_221.f2,&g_26[0]}},{{(void*)0,(void*)0,&g_145[0][0][3],&g_26[0],&g_26[0]},{&g_130[1],&g_130[1],&g_26[0],&g_145[1][0][2],(void*)0},{&g_26[0],(void*)0,&g_145[0][0][3],&g_26[0],(void*)0},{&g_26[0],&g_26[0],(void*)0,&g_130[1],(void*)0},{&g_130[0],&g_145[1][0][2],(void*)0,&g_26[0],(void*)0}},{{&g_221.f2,&g_221.f2,&g_26[0],(void*)0,(void*)0},{&g_221.f2,(void*)0,&g_130[2],(void*)0,&g_165},{&g_145[1][0][2],&g_221.f2,(void*)0,(void*)0,&g_130[2]},{(void*)0,&g_145[1][0][2],&g_26[0],&g_26[0],(void*)0},{&g_221.f2,&g_26[0],&g_130[1],&g_26[0],(void*)0}}};
    int8_t *l_310[6] = {&g_130[0],&g_145[1][0][2],&g_145[1][0][2],&g_130[0],&g_145[1][0][2],&g_145[1][0][2]};
    int16_t * const *l_313 = (void*)0;
    uint32_t l_317[6][2][5] = {{{0x45FFFDE4L,0xB8CC0056L,1UL,0xB8CC0056L,0x45FFFDE4L},{1UL,0xA635BB5EL,0x6B48F8A6L,0UL,0UL}},{{0UL,0xB8CC0056L,0UL,0x50D652F3L,0UL},{1UL,0UL,0xA635BB5EL,0xA635BB5EL,0UL}},{{0x45FFFDE4L,0x50D652F3L,1UL,0x50D652F3L,0x45FFFDE4L},{0UL,0xA635BB5EL,0xA635BB5EL,0UL,1UL}},{{0UL,0x50D652F3L,0UL,0xB8CC0056L,0UL},{0UL,0UL,0x6B48F8A6L,0xA635BB5EL,1UL}},{{0x45FFFDE4L,0xB8CC0056L,1UL,0xB8CC0056L,0x45FFFDE4L},{1UL,0xA635BB5EL,0x6B48F8A6L,0UL,0UL}},{{0UL,0xB8CC0056L,0UL,0x50D652F3L,0UL},{1UL,0UL,0xA635BB5EL,0xA635BB5EL,0UL}}};
    union U1 *l_344 = &g_136;
    union U2 l_351 = {0x3EE7A5ABL};
    int32_t l_356 = 0x39457032L;
    int i, j, k;
    for (g_43 = 28; (g_43 >= 26); g_43 = safe_sub_func_int8_t_s_s(g_43, 2))
    { 
        int32_t *l_267[7] = {&g_109,(void*)0,(void*)0,&g_109,(void*)0,(void*)0,&g_109};
        int i;
        l_268 ^= (-6L);
        if (g_150)
            break;
        for (g_261.f1 = 0; (g_261.f1 != 7); ++g_261.f1)
        { 
            uint8_t l_271 = 0x5BL;
            int32_t **l_274 = &l_267[3];
            int32_t l_301 = 0x1986E9DEL;
            int64_t l_302 = 0x8C5FC2A831BCBC30LL;
            int32_t l_303 = 0L;
            l_271--;
            (*l_274) = (void*)0;
            for (l_271 = (-25); (l_271 > 31); ++l_271)
            { 
                uint32_t l_300[6][1] = {{0UL},{0xC3CB9F91L},{0UL},{0xC3CB9F91L},{0UL},{0xC3CB9F91L}};
                int i, j;
                for (g_154 = 0; (g_154 >= 7); g_154 = safe_add_func_uint64_t_u_u(g_154, 7))
                { 
                    ++g_279;
                    l_282 &= 0x77698987L;
                    (*l_274) = &g_109;
                }
                for (g_153 = (-8); (g_153 < 29); ++g_153)
                { 
                    uint16_t l_299 = 0x4B72L;
                    l_300[3][0] ^= (g_109 = (((safe_sub_func_uint64_t_u_u((safe_mod_func_uint16_t_u_u((1UL >= (safe_sub_func_uint16_t_u_u((g_41 == (-5L)), p_73.f0))), (safe_mul_func_int8_t_s_s((*g_25), ((safe_rshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(0x89L, (safe_sub_func_uint64_t_u_u((g_212.f2 >= p_76.f3), p_76.f0)))), l_299)) < p_73.f1))))), g_60)) < p_73.f2) | g_151));
                }
            }
            l_282 = g_122;
            g_304++;
        }
        return l_282;
    }
    if (((((l_310[4] = (l_309[4][4][2] = (void*)0)) != &g_26[0]) >= ((safe_div_func_int64_t_s_s((((((l_282 = 0xC256FB42CD97A3D9LL) , l_313) == (void*)0) > ((safe_add_func_uint16_t_u_u((p_73.f1 ^ ((*p_75) = (safe_unary_minus_func_int8_t_s((l_268 != l_317[4][1][3]))))), g_122)) ^ 0x4D76L)) ^ l_317[1][0][0]), (-9L))) ^ l_317[2][0][1])) & l_317[2][0][1]))
    { 
        int8_t ***l_322 = &l_307[2][2];
        int32_t *l_323 = &l_282;
        uint8_t *l_324 = &g_60;
        const union U2 l_325 = {18446744073709551615UL};
        (*l_323) &= (safe_sub_func_int64_t_s_s((safe_rshift_func_uint16_t_u_s((&l_309[3][4][4] != ((*l_322) = &l_310[4])), 2)), 0xF50B0D8113C6DC5CLL));
        (*l_323) |= ((l_324 == (l_325 , l_324)) || l_317[4][1][3]);
    }
    else
    { 
        uint64_t l_326 = 9UL;
        int32_t *l_328 = &g_43;
        union U1 *l_345 = (void*)0;
        for (g_147 = 2; (g_147 <= 6); g_147 += 1)
        { 
            int32_t *l_327 = &g_109;
            int32_t **l_329 = &l_327;
            (*l_327) ^= l_326;
            (*l_329) = l_328;
            g_330 = (void*)0;
            (*l_329) = (*l_329);
            for (l_282 = 6; (l_282 >= 1); l_282 -= 1)
            { 
                int32_t *l_332[2];
                uint8_t l_355 = 0x4CL;
                int i, j;
                for (i = 0; i < 2; i++)
                    l_332[i] = &g_43;
                g_333 = l_332[1];
                for (g_60 = 1; (g_60 <= 6); g_60 += 1)
                { 
                    union U1 **l_346 = &l_345;
                    uint64_t *l_352 = (void*)0;
                    uint64_t *l_353 = &g_31.f0;
                    int64_t *l_354 = &g_150;
                    int i, j;
                    (*l_329) = l_328;
                    g_109 ^= (safe_lshift_func_int16_t_s_s(((((g_168 &= ((safe_add_func_int16_t_s_s(l_317[4][1][3], (((((*l_354) = (safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_s((p_74 > ((*g_25) ^= (l_344 == ((*l_346) = l_345)))), 13)), 5)), (safe_div_func_int16_t_s_s((safe_add_func_int32_t_s_s(((*g_333) = (l_317[4][1][3] == ((((*l_353) = (l_351 , p_76.f1)) & p_74) > 7UL))), g_31.f2)), 0xD996L))))) , l_355) == 0x53L) || 0x75B1A384F825FF6BLL))) , p_73.f1)) > 0xFCCDC5DAD05FFB82LL) ^ (-1L)) >= p_73.f2), 2));
                }
                (*l_327) = (&g_26[0] != (void*)0);
                l_356 = ((*g_333) = l_351.f2);
            }
        }
    }
    return l_351.f0;
}



static union U2  func_80(int32_t * p_81)
{ 
    int32_t *l_99 = &g_43;
    uint8_t l_102 = 0x48L;
    int32_t l_125[5][4][7] = {{{0xF3CB375AL,1L,(-4L),0xD5FF68F1L,(-1L),0x511B60CEL,0x6AD70287L},{(-1L),0x7CC5E97EL,0xA861DE5BL,0x5B557241L,0x7CC5E97EL,1L,(-1L)},{0x044FF48DL,0xB4E36C85L,(-4L),(-1L),(-10L),0x4FAD4083L,(-1L)},{0xD5FF68F1L,0x901DBA86L,0x88466DECL,(-10L),1L,0x511B60CEL,3L}},{{0x310FB7A0L,0x5B557241L,1L,1L,1L,0L,1L},{0x6551E483L,0x6AD70287L,0x6AD70287L,0x6551E483L,(-10L),1L,0x310FB7A0L},{1L,1L,(-10L),(-5L),0x7CC5E97EL,0x6AD70287L,(-5L)},{1L,0x044FF48DL,0x2559FCE9L,1L,(-1L),0xA861DE5BL,0x310FB7A0L}},{{0x044FF48DL,0x511B60CEL,0xD5FF68F1L,0x901DBA86L,0x88466DECL,(-10L),1L},{0x4FAD4083L,(-1L),(-10L),0xF3CB375AL,0x6AC4A701L,0xB4E36C85L,3L},{(-1L),(-1L),0L,0x5B557241L,0x5B557241L,0L,(-1L)},{0x7CC5E97EL,0x511B60CEL,0x4FAD4083L,1L,(-4L),1L,(-1L)}},{{0x6AD70287L,0x044FF48DL,0x88466DECL,0x4FAD4083L,0x261CAE20L,3L,0x6AD70287L},{(-1L),1L,2L,1L,(-1L),0x6AC4A701L,(-5L)},{(-10L),1L,0L,0x6AD70287L,1L,0L,1L},{5L,0x6AD70287L,(-1L),0x250F4D7AL,3L,0L,0L}},{{0xB4E36C85L,3L,0x310FB7A0L,3L,0xB4E36C85L,0x6AC4A701L,0xF3CB375AL},{0xD5FF68F1L,0L,0L,0x511B60CEL,0xA861DE5BL,5L,0xB4E36C85L},{1L,(-5L),1L,1L,3L,0x525E98B5L,0x2559FCE9L},{0xD5FF68F1L,0x511B60CEL,0x044FF48DL,0x4FAD4083L,(-5L),0x6551E483L,0x4FAD4083L}}};
    const int8_t *l_199 = &g_26[0];
    const int8_t **l_198 = &l_199;
    int8_t l_203 = 7L;
    union U1 *l_213 = &g_212;
    int64_t *l_214 = &g_168;
    union U2 l_231 = {1UL};
    uint32_t l_250 = 0x82143E87L;
    int32_t **l_253 = &l_99;
    int i, j, k;
    for (g_31.f2 = 0; (g_31.f2 <= 0); g_31.f2 += 1)
    { 
        int32_t l_90 = 0x1232C2F6L;
        int8_t *l_107 = &g_26[0];
        int8_t **l_106 = &l_107;
        int32_t l_126 = 0xEC6B6B0DL;
        int32_t l_128[7] = {1L,1L,1L,1L,1L,1L,1L};
        uint8_t *l_200[2][3][6] = {{{&g_122,&g_122,&g_122,&g_60,(void*)0,&g_122},{(void*)0,(void*)0,&g_60,(void*)0,(void*)0,(void*)0},{&g_60,&g_122,(void*)0,(void*)0,&g_122,&g_60}},{{(void*)0,(void*)0,(void*)0,&g_60,(void*)0,(void*)0},{&g_122,(void*)0,&g_60,&g_122,&g_122,&g_122},{&g_122,&g_122,&g_122,&g_60,(void*)0,&g_122}}};
        int i, j, k;
        for (g_60 = 0; (g_60 <= 0); g_60 += 1)
        { 
            int32_t *l_100 = &l_90;
            int32_t **l_101 = &l_100;
            union U2 l_110 = {0x7EF93BB0L};
            int32_t l_121 = 0L;
            int32_t l_129 = (-5L);
            union U1 *l_135 = &g_136;
            int32_t l_167 = 1L;
            uint16_t *l_194 = &g_136.f0;
            int i;
            if ((safe_add_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_u((safe_div_func_int8_t_s_s(g_26[g_60], 1L)), g_26[g_60])), l_90)), (safe_mod_func_uint64_t_u_u((safe_mod_func_uint16_t_u_u((((0x56L <= (((*p_81) = ((safe_mul_func_uint8_t_u_u((safe_div_func_uint64_t_u_u((l_99 != ((*l_101) = l_100)), g_26[0])), g_26[g_60])) , (-1L))) <= g_60)) , g_43) >= g_31.f1), (-1L))), g_31.f2)))))
            { 
                int16_t *l_108 = &g_2;
                int32_t l_111 = 0x988C8CF6L;
                uint8_t l_132 = 0xC1L;
                union U1 **l_137 = &l_135;
                l_102 = (*l_99);
                if ((g_31.f3 <= ((safe_unary_minus_func_int16_t_s((g_109 = ((*l_108) = (((*p_81) != (0UL & (safe_rshift_func_uint16_t_u_u(g_2, 1)))) || ((void*)0 != l_106)))))) == l_90)))
                { 
                    return l_110;
                }
                else
                { 
                    int32_t *l_112 = &g_109;
                    int32_t *l_113 = &g_43;
                    int32_t *l_114 = (void*)0;
                    int32_t *l_115 = &g_109;
                    int32_t *l_116 = &l_111;
                    int32_t *l_117 = (void*)0;
                    int32_t *l_118 = &g_109;
                    int32_t *l_119 = &g_109;
                    int32_t *l_120[6][6] = {{&g_109,&g_109,&g_43,&l_111,&g_43,&g_109},{&g_43,&g_109,&l_111,&l_111,&g_109,&g_43},{&g_109,&g_43,&l_111,&g_43,&g_109,&g_109},{(void*)0,&g_43,&g_43,(void*)0,&g_109,(void*)0},{(void*)0,&g_109,(void*)0,&g_43,&g_43,(void*)0},{&g_109,&g_109,&g_43,&l_111,&g_43,&g_109}};
                    int i, j;
                    g_122--;
                    l_132++;
                }
                (*l_137) = l_135;
            }
            else
            { 
                int32_t l_143 = 1L;
                int32_t l_144 = 0L;
                int32_t l_146 = 0L;
                int32_t l_148 = 0L;
                int32_t l_149 = 0x7B429FF7L;
                int32_t l_152[3][6] = {{(-8L),5L,0xBB508EA8L,0xCC51AB32L,5L,0xCC51AB32L},{(-8L),0x6AB53605L,(-8L),0xCC51AB32L,0x6AB53605L,0xBB508EA8L},{(-8L),8L,0xCC51AB32L,0xCC51AB32L,8L,(-8L)}};
                int32_t *l_157 = &l_152[1][3];
                int32_t *l_158 = &g_109;
                int32_t *l_159 = &l_143;
                int32_t *l_160 = &l_152[2][3];
                int32_t *l_161 = &l_125[3][0][4];
                int32_t *l_162 = (void*)0;
                int32_t *l_163 = &l_129;
                int32_t *l_164[7][1] = {{&l_121},{&l_128[4]},{&l_128[4]},{&l_121},{&l_128[4]},{&l_128[4]},{&l_121}};
                int16_t *l_180[6][4] = {{&g_131[2],(void*)0,&g_131[2],&g_131[2]},{&g_153,&g_153,&g_131[2],&g_131[2]},{&g_131[3],(void*)0,&g_131[3],&g_131[2]},{&g_131[3],&g_131[2],&g_131[2],&g_131[3]},{&g_153,&g_131[2],&g_131[2],&g_131[2]},{&g_131[2],(void*)0,&g_131[2],&g_131[2]}};
                int16_t **l_179[7][4] = {{(void*)0,(void*)0,&l_180[4][3],(void*)0},{(void*)0,&l_180[0][2],&l_180[0][2],(void*)0},{&l_180[0][2],(void*)0,&l_180[0][2],&l_180[0][2]},{(void*)0,(void*)0,&l_180[4][3],(void*)0},{(void*)0,&l_180[0][2],&l_180[4][3],&l_180[0][2]},{&l_180[4][3],&l_180[0][2],&l_180[4][3],&l_180[4][3]},{&l_180[0][2],&l_180[0][2],(void*)0,&l_180[0][2]}};
                int i, j;
                l_128[4] = 0L;
                for (g_31.f1 = 0; (g_31.f1 <= 0); g_31.f1 += 1)
                { 
                    int32_t *l_138 = &l_125[1][2][3];
                    int32_t *l_139 = &l_125[1][2][2];
                    int32_t *l_140 = &l_126;
                    int32_t *l_141 = (void*)0;
                    int32_t *l_142[3][7] = {{&l_90,&l_126,&l_90,&g_109,(void*)0,(void*)0,&g_109},{&l_90,&l_126,&l_90,&g_109,(void*)0,(void*)0,&g_109},{&l_90,&l_126,&l_90,&g_109,(void*)0,(void*)0,&g_109}};
                    int i, j;
                    --g_154;
                }
                --g_169;
                (*p_81) = (((safe_unary_minus_func_int8_t_s((l_110 , ((((safe_mul_func_int8_t_s_s(0x3CL, 0x97L)) , 0x9AL) != ((safe_mul_func_uint16_t_u_u(((((((safe_div_func_uint16_t_u_u(((g_181 = &g_153) != &g_131[3]), 65531UL)) && 0x85887548L) , g_109) | g_43) <= (*l_157)) , 0x893DL), (*l_99))) > 1UL)) == l_128[6])))) ^ 3UL) || (*l_160));
            }
            (*l_100) = ((*l_99) ^= (safe_div_func_uint32_t_u_u(6UL, ((1L == (((*l_194) ^= (safe_mul_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((safe_div_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(0xE11BCF49L, (-9L))), (((((safe_lshift_func_int16_t_s_u(1L, 3)) , &g_136) == &g_136) | 0x88825DA560F88FCELL) && g_122))), l_126)), (*l_100)))) && 6L)) | (*l_100)))));
        }
    }
    (*l_253) = p_81;
    for (g_150 = 0; (g_150 >= 12); g_150++)
    { 
        if (g_169)
        { 
            union U2 l_256 = {1UL};
            return l_256;
        }
        else
        { 
            (*l_253) = p_81;
        }
        (*p_81) = (*l_99);
    }
    return g_221;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_26[i], "g_26[i]", print_hash_value);

    }
    transparent_crc(g_31.f0, "g_31.f0", print_hash_value);
    transparent_crc(g_31.f1, "g_31.f1", print_hash_value);
    transparent_crc(g_31.f2, "g_31.f2", print_hash_value);
    transparent_crc(g_31.f3, "g_31.f3", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_130[i], "g_130[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_131[i], "g_131[i]", print_hash_value);

    }
    transparent_crc(g_136.f0, "g_136.f0", print_hash_value);
    transparent_crc(g_136.f2, "g_136.f2", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_145[i][j][k], "g_145[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_150, "g_150", print_hash_value);
    transparent_crc(g_151, "g_151", print_hash_value);
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_154, "g_154", print_hash_value);
    transparent_crc(g_165, "g_165", print_hash_value);
    transparent_crc(g_166, "g_166", print_hash_value);
    transparent_crc(g_168, "g_168", print_hash_value);
    transparent_crc(g_169, "g_169", print_hash_value);
    transparent_crc(g_212.f0, "g_212.f0", print_hash_value);
    transparent_crc(g_212.f2, "g_212.f2", print_hash_value);
    transparent_crc(g_221.f1, "g_221.f1", print_hash_value);
    transparent_crc(g_221.f2, "g_221.f2", print_hash_value);
    transparent_crc(g_249, "g_249", print_hash_value);
    transparent_crc(g_261.f0, "g_261.f0", print_hash_value);
    transparent_crc(g_261.f2, "g_261.f2", print_hash_value);
    transparent_crc(g_264.f0, "g_264.f0", print_hash_value);
    transparent_crc(g_264.f1, "g_264.f1", print_hash_value);
    transparent_crc(g_264.f2, "g_264.f2", print_hash_value);
    transparent_crc(g_264.f3, "g_264.f3", print_hash_value);
    transparent_crc(g_279, "g_279", print_hash_value);
    transparent_crc(g_304, "g_304", print_hash_value);
    transparent_crc(g_331.f0, "g_331.f0", print_hash_value);
    transparent_crc(g_331.f1, "g_331.f1", print_hash_value);
    transparent_crc(g_331.f2, "g_331.f2", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_406[i], "g_406[i]", print_hash_value);

    }
    transparent_crc(g_408, "g_408", print_hash_value);
    transparent_crc(g_472, "g_472", print_hash_value);
    transparent_crc(g_525, "g_525", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_528[i], "g_528[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_537[i], "g_537[i]", print_hash_value);

    }
    transparent_crc(g_542.f0, "g_542.f0", print_hash_value);
    transparent_crc(g_542.f2, "g_542.f2", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_586[i][j][k], "g_586[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_587[i], "g_587[i]", print_hash_value);

    }
    transparent_crc(g_619.f0, "g_619.f0", print_hash_value);
    transparent_crc(g_619.f2, "g_619.f2", print_hash_value);
    transparent_crc(g_662, "g_662", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_687[i][j], "g_687[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_728, "g_728", print_hash_value);
    transparent_crc(g_729, "g_729", print_hash_value);
    transparent_crc(g_730, "g_730", print_hash_value);
    transparent_crc(g_731, "g_731", print_hash_value);
    transparent_crc(g_745, "g_745", print_hash_value);
    transparent_crc(g_746, "g_746", print_hash_value);
    transparent_crc(g_747, "g_747", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_748[i], "g_748[i]", print_hash_value);

    }
    transparent_crc(g_891, "g_891", print_hash_value);
    transparent_crc(g_892, "g_892", print_hash_value);
    transparent_crc(g_944, "g_944", print_hash_value);
    transparent_crc(g_1144, "g_1144", print_hash_value);
    transparent_crc(g_1157, "g_1157", print_hash_value);
    transparent_crc(g_1158, "g_1158", print_hash_value);
    transparent_crc(g_1162, "g_1162", print_hash_value);
    transparent_crc(g_1163, "g_1163", print_hash_value);
    transparent_crc(g_1166, "g_1166", print_hash_value);
    transparent_crc(g_1192, "g_1192", print_hash_value);
    transparent_crc(g_1223, "g_1223", print_hash_value);
    transparent_crc(g_1265, "g_1265", print_hash_value);
    transparent_crc(g_1290, "g_1290", print_hash_value);
    transparent_crc(g_1291, "g_1291", print_hash_value);
    transparent_crc(g_1294, "g_1294", print_hash_value);
    transparent_crc(g_1355, "g_1355", print_hash_value);
    transparent_crc(g_1377, "g_1377", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_1378[i][j], "g_1378[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1389.f0, "g_1389.f0", print_hash_value);
    transparent_crc(g_1389.f2, "g_1389.f2", print_hash_value);
    transparent_crc(g_1464, "g_1464", print_hash_value);
    transparent_crc(g_1518, "g_1518", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1519[i], "g_1519[i]", print_hash_value);

    }
    transparent_crc(g_1526, "g_1526", print_hash_value);
    transparent_crc(g_1543, "g_1543", print_hash_value);
    transparent_crc(g_1545, "g_1545", print_hash_value);
    transparent_crc(g_1630, "g_1630", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_1673[i][j], "g_1673[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1680.f0, "g_1680.f0", print_hash_value);
    transparent_crc(g_1680.f1, "g_1680.f1", print_hash_value);
    transparent_crc(g_1680.f2, "g_1680.f2", print_hash_value);
    transparent_crc(g_1680.f3, "g_1680.f3", print_hash_value);
    transparent_crc(g_1698, "g_1698", print_hash_value);
    transparent_crc(g_1752, "g_1752", print_hash_value);
    transparent_crc(g_1755, "g_1755", print_hash_value);
    transparent_crc(g_1765, "g_1765", print_hash_value);
    transparent_crc(g_1766, "g_1766", print_hash_value);
    transparent_crc(g_1770, "g_1770", print_hash_value);
    transparent_crc(g_1771, "g_1771", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_1772[i][j][k], "g_1772[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1775, "g_1775", print_hash_value);
    transparent_crc(g_1776, "g_1776", print_hash_value);
    transparent_crc(g_1874, "g_1874", print_hash_value);
    transparent_crc(g_1886, "g_1886", print_hash_value);
    transparent_crc(g_1887, "g_1887", print_hash_value);
    transparent_crc(g_1888, "g_1888", print_hash_value);
    transparent_crc(g_2014, "g_2014", print_hash_value);
    transparent_crc(g_2156, "g_2156", print_hash_value);
    transparent_crc(g_2187, "g_2187", print_hash_value);
    transparent_crc(g_2278, "g_2278", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_2352[i], "g_2352[i]", print_hash_value);

    }
    transparent_crc(g_2383.f0, "g_2383.f0", print_hash_value);
    transparent_crc(g_2383.f1, "g_2383.f1", print_hash_value);
    transparent_crc(g_2383.f2, "g_2383.f2", print_hash_value);
    transparent_crc(g_2383.f3, "g_2383.f3", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_2486[i].f0, "g_2486[i].f0", print_hash_value);
        transparent_crc(g_2486[i].f2, "g_2486[i].f2", print_hash_value);

    }
    transparent_crc(g_2521, "g_2521", print_hash_value);
    transparent_crc(g_2681, "g_2681", print_hash_value);
    transparent_crc(g_2696, "g_2696", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_2698[i][j][k], "g_2698[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_2736, "g_2736", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_2837[i][j][k], "g_2837[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_2882, "g_2882", print_hash_value);
    transparent_crc(g_2942, "g_2942", print_hash_value);
    transparent_crc(g_2993, "g_2993", print_hash_value);
    transparent_crc(g_2994, "g_2994", print_hash_value);
    transparent_crc(g_3127.f0, "g_3127.f0", print_hash_value);
    transparent_crc(g_3127.f2, "g_3127.f2", print_hash_value);
    transparent_crc(g_3199, "g_3199", print_hash_value);
    transparent_crc(g_3228, "g_3228", print_hash_value);
    transparent_crc(g_3271, "g_3271", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
