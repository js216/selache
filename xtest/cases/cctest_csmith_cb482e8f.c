// SPDX-License-Identifier: MIT
// cctest_csmith_cb482e8f.c --- cctest case csmith_cb482e8f (csmith seed 3410505359)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xd6c0e26b */

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

// Options:   -s 3410505359 -o /tmp/csmith_gen_l59m_gp_/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
   int32_t  f1;
   const int16_t  f2;
   uint32_t  f3;
   int8_t  f4;
};
#pragma pack(pop)

union U1 {
   uint32_t  f0;
   int32_t  f1;
};


static int8_t g_20 = (-1L);
static int32_t g_21 = 0x74ADF298L;
static int64_t g_23[1] = {0xFEC1B16EB2D3650DLL};
static uint32_t g_24 = 1UL;
static uint16_t g_42 = 0xBAC6L;
static uint64_t g_47[2] = {0x5A3231966BA05392LL,0x5A3231966BA05392LL};
static uint8_t g_78 = 9UL;
static uint32_t g_94 = 0x701E4A26L;
static union U1 g_164[3][5][1] = {{{{0xD4997D19L}},{{9UL}},{{0x4DD17DDFL}},{{0xD7E5A20DL}},{{0x4DD17DDFL}}},{{{9UL}},{{0xD4997D19L}},{{0xD4997D19L}},{{9UL}},{{0x4DD17DDFL}}},{{{0xD7E5A20DL}},{{0x4DD17DDFL}},{{9UL}},{{0xD4997D19L}},{{0xD4997D19L}}}};
static struct S0 g_182 = {0x77578BEDL,0x77992E5DL,5L,0x25814189L,9L};



static uint32_t  func_1(void);
static int32_t  func_5(uint64_t  p_6, int8_t  p_7, int32_t  p_8, int32_t  p_9, uint16_t  p_10);
static uint64_t  func_11(uint16_t  p_12, int32_t  p_13, const struct S0  p_14, const uint32_t  p_15, const uint32_t  p_16);
static uint16_t  func_33(int16_t  p_34, int64_t  p_35, int32_t  p_36, int32_t  p_37, int32_t  p_38);




static uint32_t  func_1(void)
{ 
    uint32_t l_2 = 0x2A2C7C8AL;
    int32_t l_3 = 0x9DFCF09CL;
    uint16_t l_4[2];
    const struct S0 l_22 = {0L,0x219A6FDDL,0xFB8CL,0xFFB91E60L,9L};
    int32_t l_188 = (-1L);
    union U1 l_201 = {0x2A517131L};
    const int16_t l_208 = 1L;
    int16_t l_209 = 0x71FDL;
    int i;
    for (i = 0; i < 2; i++)
        l_4[i] = 0xD786L;
lbl_227:
    if (l_2)
    { 
        l_3 = (-3L);
        for (l_2 = 0; (l_2 <= 1); l_2 += 1)
        { 
            int i;
            return l_4[l_2];
        }
    }
    else
    { 
        int32_t l_19 = 6L;
        int32_t l_160 = 0xE1DE84E0L;
        int64_t l_172[1][3][4] = {{{0x9A01C8D9E6B8C764LL,0xBAD84171F4BA9CC6LL,0x9A01C8D9E6B8C764LL,0x9A01C8D9E6B8C764LL},{0xBAD84171F4BA9CC6LL,0xBAD84171F4BA9CC6LL,0L,0xBAD84171F4BA9CC6LL},{0xBAD84171F4BA9CC6LL,0x9A01C8D9E6B8C764LL,0x9A01C8D9E6B8C764LL,0xBAD84171F4BA9CC6LL}}};
        int i, j, k;
        for (l_2 = 0; (l_2 <= 1); l_2 += 1)
        { 
            uint8_t l_141 = 0UL;
            int32_t l_158 = 0x3BD90028L;
            int32_t l_159 = 0x6642384DL;
            int i;
            l_3 = func_5(func_11((l_4[l_2] , (safe_sub_func_int64_t_s_s((g_20 = l_19), 0x9DF9481F3403CA95LL))), g_21, l_22, l_19, g_21), l_2, l_141, g_23[0], g_23[0]);
            if ((safe_lshift_func_uint16_t_u_u(8UL, 4)))
            { 
                l_160 &= (safe_mul_func_int16_t_s_s((((safe_sub_func_int64_t_s_s(((~g_20) , (-5L)), (safe_mul_func_int16_t_s_s(((l_159 ^= (safe_div_func_uint32_t_u_u(((l_158 |= g_23[0]) | l_22.f4), l_19))) , l_3), l_19)))) | l_22.f4) > l_4[l_2]), g_20));
            }
            else
            { 
                if (l_160)
                    break;
            }
            for (l_141 = 0; (l_141 <= 1); l_141 += 1)
            { 
                int8_t l_161 = (-1L);
                return l_161;
            }
        }
        for (l_19 = 0; (l_19 > (-8)); l_19 = safe_sub_func_uint8_t_u_u(l_19, 9))
        { 
            int32_t l_165 = 0x1BE0C029L;
            int32_t l_199 = 0L;
            uint64_t l_200 = 18446744073709551610UL;
            l_160 = (1L <= ((g_164[1][2][0] , ((l_165 != (((safe_lshift_func_uint16_t_u_s(((((safe_rshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u(((g_24 & g_20) ^ l_165), g_78)), 4)) <= g_21) <= 0x95ADL) & 0x8E42L), 11)) < l_3) , l_172[0][2][3])) == 3L)) | l_4[0]));
            for (l_165 = 0; (l_165 == 5); l_165 = safe_add_func_uint32_t_u_u(l_165, 1))
            { 
                int64_t l_187 = 0L;
                l_188 = (safe_sub_func_uint64_t_u_u((~((safe_add_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u(0xC5E6L, 14)) == (((g_182 , (l_3 = (g_20 &= ((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_u(l_172[0][0][3], 4)), 2)) ^ (g_182.f4 = 0x34L))))) > l_22.f3) > g_94)), l_187)) & 0x5AL)), l_165));
                g_182.f1 = ((safe_mul_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_s((g_42 = (safe_rshift_func_int8_t_s_s(g_182.f2, (((safe_lshift_func_uint16_t_u_u(g_94, 9)) != l_187) >= ((g_21 = ((safe_mod_func_int32_t_s_s(((l_200 &= (l_199 |= 1L)) || l_187), l_165)) > g_47[1])) < l_165))))), l_187)) ^ l_4[1]) ^ l_22.f1), 1L)) || g_164[1][2][0].f0);
            }
            l_199 |= (((((((l_201 , ((((safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((g_182.f4 < (-1L)), 2)), (safe_add_func_int32_t_s_s(0x4D0847C5L, g_47[1])))) != l_172[0][2][3]) , l_208) != l_172[0][0][2])) != 0x8999L) < l_165) && 4L) >= 7L) > g_164[1][2][0].f0) && l_209);
        }
    }
    g_21 &= (safe_add_func_int16_t_s_s((safe_add_func_int16_t_s_s(((~((--g_47[1]) & (((1UL <= (safe_div_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(((l_3 ^ g_164[1][2][0].f1) > (safe_add_func_uint64_t_u_u((l_188 = ((safe_mod_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((l_209 || g_78), 0xD2L)), 1UL)) >= l_201.f1)), g_182.f1))), g_23[0])), g_182.f0))) , 4294967295UL) <= 0xAE7EB1C1L))) <= l_22.f2), l_4[1])), 0x7F81L));
    for (g_182.f4 = 0; (g_182.f4 <= 0); g_182.f4 += 1)
    { 
        int32_t l_228 = 0x2BE6E403L;
        int i;
        if (l_22.f2)
            goto lbl_227;
        l_228 &= g_23[g_182.f4];
    }
    return l_3;
}



static int32_t  func_5(uint64_t  p_6, int8_t  p_7, int32_t  p_8, int32_t  p_9, uint16_t  p_10)
{ 
    for (g_42 = 0; (g_42 <= 34); ++g_42)
    { 
        uint64_t l_144[4][3] = {{0xC06C6856C2794937LL,0xC06C6856C2794937LL,0xC06C6856C2794937LL},{0x53D154C37BB759A0LL,0x53D154C37BB759A0LL,0x53D154C37BB759A0LL},{0xC06C6856C2794937LL,0xC06C6856C2794937LL,0xC06C6856C2794937LL},{0x53D154C37BB759A0LL,0x53D154C37BB759A0LL,0x53D154C37BB759A0LL}};
        int i, j;
        if (p_7)
            break;
        g_21 = (p_10 < (g_23[0] && 0x307DL));
        --l_144[3][1];
    }
    return p_6;
}



static uint64_t  func_11(uint16_t  p_12, int32_t  p_13, const struct S0  p_14, const uint32_t  p_15, const uint32_t  p_16)
{ 
    int16_t l_29[2];
    int32_t l_89 = 0xFFE0AB02L;
    int32_t l_93[5];
    int i;
    for (i = 0; i < 2; i++)
        l_29[i] = 0x4FD5L;
    for (i = 0; i < 5; i++)
        l_93[i] = 0L;
    for (g_20 = 0; (g_20 <= 0); g_20 += 1)
    { 
        int i;
        if (((g_24 &= g_23[g_20]) , (0x65C3L == ((+(safe_mod_func_int8_t_s_s(1L, (safe_unary_minus_func_uint8_t_u(l_29[1]))))) == (-1L)))))
        { 
            uint32_t l_41 = 0x9E8A28D8L;
            if (g_23[g_20])
                break;
            g_21 = (g_24 > (safe_mod_func_int8_t_s_s((0x2438L | (~(g_21 | func_33((safe_div_func_int64_t_s_s(l_29[1], p_14.f1)), g_24, g_23[g_20], l_41, p_14.f1)))), g_21)));
        }
        else
        { 
            uint8_t l_66 = 0x71L;
            int32_t l_79 = (-7L);
            l_66 = (-8L);
            l_79 &= (((((safe_lshift_func_int8_t_s_s(0x30L, 3)) | (((safe_mod_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(g_47[0], (g_78 &= (safe_lshift_func_int16_t_s_u(((4294967288UL | (+((((p_13 > g_20) || 0x2C1B334FL) > p_14.f3) || g_21))) || g_23[0]), p_13))))), g_23[0])) <= l_66), 254UL)) | 4L) , p_14.f3)) <= 1UL) & p_13) , g_21);
        }
        for (p_12 = 0; (p_12 <= 0); p_12 += 1)
        { 
            int32_t l_80 = 1L;
            p_13 ^= g_23[0];
            if (p_15)
                continue;
            if (l_80)
                continue;
        }
        p_13 |= ((((g_47[1] >= ((safe_lshift_func_int8_t_s_s(p_14.f4, 3)) ^ p_14.f3)) == g_24) ^ 1L) == 0xF7CDL);
    }
    if ((safe_add_func_uint32_t_u_u((l_29[1] > (((safe_rshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(0x43L, (0x7603CC2EL || (g_21 ^= (((((((l_89 &= (l_29[1] != 65531UL)) | 0xEAL) >= p_14.f3) || g_78) && g_24) ^ g_78) , l_29[1]))))), 2)) || p_13) && p_14.f1)), 1UL)))
    { 
        int8_t l_92 = 0xD7L;
        uint8_t l_103 = 255UL;
        g_21 = (safe_mul_func_uint16_t_u_u(((g_94++) , g_24), (((safe_mul_func_int16_t_s_s(((l_89 = (safe_lshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u(g_78, (l_103 | (l_103 , g_47[1])))), 7))) == p_16), g_21)) <= p_16) >= l_103)));
    }
    else
    { 
        uint32_t l_120 = 0x173AA332L;
        int32_t l_123 = 0xF123D7E6L;
        int32_t l_127[3];
        int32_t l_128 = 0xCED03213L;
        int i;
        for (i = 0; i < 3; i++)
            l_127[i] = 0L;
        for (g_20 = (-3); (g_20 >= 29); g_20 = safe_add_func_int64_t_s_s(g_20, 8))
        { 
            int32_t l_126 = 0x64EC0B5BL;
            for (g_21 = 0; (g_21 >= 19); g_21++)
            { 
                return l_29[0];
            }
            l_123 = (safe_rshift_func_uint16_t_u_s(((+(safe_rshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u(((safe_unary_minus_func_int32_t_s(((((safe_mod_func_int32_t_s_s((safe_div_func_int64_t_s_s(l_120, 0xBD8298C9807A6E46LL)), 4294967295UL)) , ((((((safe_mul_func_uint8_t_u_u((p_15 || g_24), p_12)) <= 0UL) & g_24) || 0x5099L) > g_24) , 1L)) == g_24) && g_20))) ^ g_24), l_29[1])), 5))) , g_23[0]), 3));
            p_13 &= ((((l_128 = (safe_lshift_func_uint16_t_u_u(0xF913L, (l_127[0] ^= (l_123 <= l_126))))) > ((safe_mul_func_int8_t_s_s((((safe_mul_func_int8_t_s_s((-3L), 0xD0L)) , 0x659033EFA0937D76LL) ^ 1L), 0x8AL)) == p_14.f1)) <= (-1L)) , g_24);
        }
        p_13 = (((safe_mod_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_u(((l_128 > (safe_lshift_func_int8_t_s_s(p_14.f2, l_89))) && ((safe_add_func_int64_t_s_s((0x3C15363C4F9E1A8ALL & l_89), l_127[0])) == 0x09C1L)), 6)) || p_14.f1), 3L)) >= 65526UL) & 65533UL);
    }
    return g_20;
}



static uint16_t  func_33(int16_t  p_34, int64_t  p_35, int32_t  p_36, int32_t  p_37, int32_t  p_38)
{ 
    int8_t l_45 = 4L;
    int32_t l_46[4] = {0L,0L,0L,0L};
    int32_t l_64 = 0L;
    int32_t l_65 = 0xE861E80FL;
    int i;
    g_42++;
    g_47[1]++;
    l_46[1] = ((l_65 |= (safe_mod_func_int64_t_s_s((safe_sub_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u(((((((safe_mul_func_int8_t_s_s(((((!g_42) , (safe_sub_func_int16_t_s_s((p_34 = (+(safe_mod_func_uint64_t_u_u(((l_46[3] | l_46[3]) >= (l_64 = l_46[0])), l_46[1])))), l_46[2]))) | p_35) <= 9UL), l_46[1])) >= p_36) >= (-7L)) && l_46[0]) ^ 0xAFC8L) | g_42), p_37)) ^ 0L), g_21)), l_45))) == p_37);
    return p_36;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_23[i], "g_23[i]", print_hash_value);

    }
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_47[i], "g_47[i]", print_hash_value);

    }
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_164[i][j][k].f0, "g_164[i][j][k].f0", print_hash_value);
                transparent_crc(g_164[i][j][k].f1, "g_164[i][j][k].f1", print_hash_value);

            }
        }
    }
    transparent_crc(g_182.f0, "g_182.f0", print_hash_value);
    transparent_crc(g_182.f1, "g_182.f1", print_hash_value);
    transparent_crc(g_182.f2, "g_182.f2", print_hash_value);
    transparent_crc(g_182.f3, "g_182.f3", print_hash_value);
    transparent_crc(g_182.f4, "g_182.f4", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
