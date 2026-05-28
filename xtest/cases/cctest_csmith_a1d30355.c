// SPDX-License-Identifier: MIT
// cctest_csmith_a1d30355.c --- cctest case csmith_a1d30355 (csmith seed 2714960725)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xe8b8adef */
/* @exp_ticks 0x480b */

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

// Options:   -s 2714960725 -o /tmp/csmith_gen_5ymfn6mz/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const uint8_t  f0;
   int16_t  f1;
   const int32_t  f2;
   uint32_t  f3;
};
#pragma pack(pop)

struct S1 {
   int32_t  f0;
   uint32_t  f1;
   int32_t  f2;
   const int32_t  f3;
   uint16_t  f4;
   const struct S0  f5;
};

struct S2 {
   uint32_t  f0;
   uint32_t  f1;
};

union U3 {
   int64_t  f0;
   struct S2  f1;
   int64_t  f2;
   const uint32_t  f3;
};


static int8_t g_8 = 0L;
static int64_t g_38 = 0x2F5726B06574F207LL;
static union U3 g_40 = {0xC84D8BC8977B405ALL};
static struct S1 g_43 = {7L,1UL,6L,7L,0x237EL,{0UL,4L,5L,0x745DDB3FL}};
static uint32_t g_45[4][4] = {{18446744073709551614UL,0UL,18446744073709551614UL,18446744073709551614UL},{0UL,0UL,0xD72DEFE8L,0UL},{0UL,18446744073709551614UL,18446744073709551614UL,0UL},{18446744073709551614UL,0UL,18446744073709551614UL,18446744073709551614UL}};
static struct S2 g_57 = {0x95599277L,4294967295UL};
static int32_t g_82 = 0x08A62A98L;
static int16_t g_83 = 0xC4AEL;
static int8_t g_86 = 0x78L;
static int16_t g_100 = 0L;
static int16_t g_102 = 0xA9AFL;



static int8_t  func_1(void);
static uint64_t  func_9(const union U3  p_10, struct S0  p_11, uint8_t  p_12, uint32_t  p_13, int8_t  p_14);
static const union U3  func_15(uint32_t  p_16, uint32_t  p_17);
static int32_t  func_21(int32_t  p_22, uint16_t  p_23);




static int8_t  func_1(void)
{ 
    uint32_t l_2[5] = {0x25A80E35L,0x25A80E35L,0x25A80E35L,0x25A80E35L,0x25A80E35L};
    int32_t l_3 = 0L;
    struct S0 l_47 = {1UL,-1L,0x494CF712L,1UL};
    int32_t l_101 = 0x2727C904L;
    int i;
    l_3 |= l_2[0];
    g_102 &= (4UL >= (l_101 &= ((!(safe_mul_func_uint16_t_u_u((l_2[0] , (~(g_8 != (func_9(func_15(g_8, l_2[4]), l_47, l_3, g_43.f5.f0, g_43.f5.f3) > 0x115B8A5FABF03985LL)))), l_2[0]))) == 4294967295UL)));
    for (g_43.f2 = 0; (g_43.f2 == (-9)); g_43.f2 = safe_sub_func_int8_t_s_s(g_43.f2, 5))
    { 
        uint16_t l_109[1];
        int32_t l_110 = 0xD9C2790AL;
        int32_t l_111 = 9L;
        int i;
        for (i = 0; i < 1; i++)
            l_109[i] = 0UL;
        l_111 = ((-1L) < ((safe_add_func_int8_t_s_s((g_43.f0 < g_43.f5.f2), ((safe_mod_func_int8_t_s_s(((l_110 ^= l_109[0]) , g_43.f1), l_109[0])) , l_47.f3))) >= 0UL));
    }
    return g_43.f5.f2;
}



static uint64_t  func_9(const union U3  p_10, struct S0  p_11, uint8_t  p_12, uint32_t  p_13, int8_t  p_14)
{ 
    uint32_t l_52 = 0x7EE3D984L;
    int32_t l_53 = 0x49C75CA1L;
    int32_t l_81 = 3L;
    int32_t l_88 = (-2L);
    int32_t l_89[4] = {0x211DA04FL,0x211DA04FL,0x211DA04FL,0x211DA04FL};
    uint32_t l_93[5][5][5] = {{{0xAD813D13L,18446744073709551607UL,18446744073709551615UL,18446744073709551607UL,0xAD813D13L},{18446744073709551615UL,9UL,18446744073709551615UL,18446744073709551615UL,9UL},{0xAD813D13L,0x48FAD171L,7UL,18446744073709551607UL,7UL},{9UL,9UL,18446744073709551615UL,9UL,9UL},{7UL,0x48FAD171L,18446744073709551615UL,1UL,7UL}},{{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{7UL,0x48FAD171L,0xAD813D13L,0x48FAD171L,7UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{7UL,1UL,18446744073709551615UL,0x48FAD171L,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,9UL,18446744073709551615UL,18446744073709551615UL}},{{18446744073709551615UL,0x48FAD171L,18446744073709551615UL,1UL,7UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{7UL,0x48FAD171L,0xAD813D13L,0x48FAD171L,7UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{7UL,1UL,18446744073709551615UL,0x48FAD171L,18446744073709551615UL}},{{18446744073709551615UL,18446744073709551615UL,9UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,0x48FAD171L,18446744073709551615UL,1UL,7UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{7UL,0x48FAD171L,0xAD813D13L,0x48FAD171L,7UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL}},{{7UL,1UL,18446744073709551615UL,0x48FAD171L,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,9UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,0x48FAD171L,18446744073709551615UL,1UL,7UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{7UL,0x48FAD171L,0xAD813D13L,0x48FAD171L,7UL}}};
    int i, j, k;
    if (((safe_mul_func_int16_t_s_s(((l_53 = (safe_mul_func_uint16_t_u_u((g_45[3][1] <= (1L > (((p_12 , (g_43.f5.f1 , p_13)) >= l_52) == 0x94L))), p_11.f3))) | l_52), l_52)) , p_10.f3))
    { 
        uint32_t l_63[1];
        int i;
        for (i = 0; i < 1; i++)
            l_63[i] = 4294967294UL;
        g_43.f0 |= 0x72CC6491L;
        for (g_40.f2 = 0; (g_40.f2 != 0); ++g_40.f2)
        { 
            struct S2 l_56[5] = {{1UL,4294967295UL},{1UL,4294967295UL},{1UL,4294967295UL},{1UL,4294967295UL},{1UL,4294967295UL}};
            int i;
            g_57 = l_56[1];
            for (g_43.f2 = (-27); (g_43.f2 >= (-4)); g_43.f2++)
            { 
                uint8_t l_64 = 1UL;
                l_63[0] = (+(safe_add_func_uint32_t_u_u(0x5E0BD005L, g_8)));
                if (l_64)
                    continue;
            }
        }
        l_53 = 0L;
    }
    else
    { 
        uint32_t l_70 = 0x5DA263B4L;
        for (l_52 = (-21); (l_52 != 15); l_52 = safe_add_func_uint8_t_u_u(l_52, 1))
        { 
            int16_t l_69 = 0x872AL;
            int32_t l_84 = 0xA8E6C661L;
            int32_t l_85 = 8L;
            int32_t l_87 = 1L;
            l_53 = 0xB025B1A9L;
            for (l_53 = 0; (l_53 != (-13)); l_53 = safe_sub_func_int16_t_s_s(l_53, 1))
            { 
                uint64_t l_90 = 1UL;
                --l_70;
                if (g_45[3][0])
                    continue;
                g_82 = ((p_12--) != (safe_lshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u((g_100 = (safe_add_func_int16_t_s_s((p_11.f2 >= ((++l_90) , l_93[2][1][2])), (safe_add_func_int32_t_s_s(((g_43.f1 > (--g_57.f0)) <= (g_43.f4 = (safe_mod_func_uint16_t_u_u(p_13, l_70)))), p_10.f3))))), p_10.f2)), g_43.f0)));
            }
        }
    }
    return g_43.f1;
}



static const union U3  func_15(uint32_t  p_16, uint32_t  p_17)
{ 
    const union U3 l_46 = {0L};
    for (p_17 = (-10); (p_17 <= 6); p_17++)
    { 
        struct S1 l_20 = {0xC8953526L,18446744073709551611UL,0x3413F087L,0x0D35DA2AL,65526UL,{0x07L,-9L,1L,4294967295UL}};
        g_45[3][0] ^= (l_20 , func_21((g_8 , ((p_16 , (safe_mul_func_int8_t_s_s((safe_mod_func_int16_t_s_s(l_20.f4, (-1L))), 0xADL))) & p_17)), g_8));
    }
    return l_46;
}



static int32_t  func_21(int32_t  p_22, uint16_t  p_23)
{ 
    int64_t l_34 = 1L;
    int32_t l_37[4][4][3] = {{{1L,0xFC22F747L,1L},{0xC80D6736L,2L,1L},{(-1L),0xBDC590CBL,0L},{0L,1L,1L}},{{2L,0xF726845DL,0x5BB54A03L},{0L,0x309E69C1L,0x746C20B1L},{(-1L),(-1L),0xFC22F747L},{0xC80D6736L,(-1L),0xBDC590CBL}},{{1L,0x309E69C1L,(-1L)},{0x9F00F3BCL,0xF726845DL,0xA6906E71L},{0x746C20B1L,1L,(-1L)},{1L,0xBDC590CBL,0xBDC590CBL}},{{0xA7ABE333L,2L,0xFC22F747L},{0xA7ABE333L,0xFC22F747L,0x746C20B1L},{1L,0xC80D6736L,0x5BB54A03L},{0x746C20B1L,0x9F00F3BCL,1L}}};
    int i, j, k;
lbl_39:
    g_38 = (((safe_rshift_func_int16_t_s_u(g_8, (((safe_mod_func_int32_t_s_s(((((l_37[3][2][1] = (((safe_lshift_func_uint16_t_u_s(l_34, p_22)) < (safe_lshift_func_int8_t_s_s(((0xF4DAD240L != p_22) ^ l_34), p_22))) , 0xB126L)) & 7UL) <= 0x75E7L) & 4L), p_22)) | l_34) <= g_8))) <= g_8) < l_34);
    for (l_34 = 0; (l_34 <= 2); l_34 += 1)
    { 
        if (p_22)
            goto lbl_39;
        for (p_23 = 0; (p_23 <= 2); p_23 += 1)
        { 
            int16_t l_44[1];
            int i;
            for (i = 0; i < 1; i++)
                l_44[i] = 0x9332L;
            for (p_22 = 2; (p_22 >= 0); p_22 -= 1)
            { 
                int i, j, k;
                l_37[l_34][p_23][p_23] = (g_40 , (((safe_mul_func_int16_t_s_s(1L, (g_43 , ((((l_37[(l_34 + 1)][l_34][p_23] , 0x1FL) < (-7L)) ^ g_40.f2) && l_44[0])))) && 0x00L) || 1UL));
            }
            return g_43.f5.f0;
        }
    }
    return g_40.f2;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_40.f0, "g_40.f0", print_hash_value);
    transparent_crc(g_40.f2, "g_40.f2", print_hash_value);
    transparent_crc(g_40.f3, "g_40.f3", print_hash_value);
    transparent_crc(g_43.f0, "g_43.f0", print_hash_value);
    transparent_crc(g_43.f1, "g_43.f1", print_hash_value);
    transparent_crc(g_43.f2, "g_43.f2", print_hash_value);
    transparent_crc(g_43.f3, "g_43.f3", print_hash_value);
    transparent_crc(g_43.f4, "g_43.f4", print_hash_value);
    transparent_crc(g_43.f5.f0, "g_43.f5.f0", print_hash_value);
    transparent_crc(g_43.f5.f1, "g_43.f5.f1", print_hash_value);
    transparent_crc(g_43.f5.f2, "g_43.f5.f2", print_hash_value);
    transparent_crc(g_43.f5.f3, "g_43.f5.f3", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_45[i][j], "g_45[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_57.f0, "g_57.f0", print_hash_value);
    transparent_crc(g_57.f1, "g_57.f1", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
