// SPDX-License-Identifier: MIT
// cctest_csmith_3eee406e.c --- cctest case csmith_3eee406e (csmith seed 1055801454)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xe28ffaea */
/* @exp_ticks 0x961c1f */

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

// Options:   -s 1055801454 -o /tmp/csmith_gen_eu73mtm5/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint16_t  f0;
   uint32_t  f1;
   int16_t  f2;
   const int32_t  f3;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   uint32_t  f0;
   int8_t  f1;
   uint8_t  f2;
};
#pragma pack(pop)

union U2 {
   int32_t  f0;
   int64_t  f1;
   uint8_t  f2;
};


static uint16_t g_15[5] = {0xFCF3L,0xFCF3L,0xFCF3L,0xFCF3L,0xFCF3L};
static struct S1 g_22 = {0x0389A9B8L,0xA4L,0xA2L};
static uint64_t g_38 = 3UL;
static uint64_t g_46 = 0UL;
static uint32_t g_52 = 0x76A17913L;
static int32_t g_57 = 0L;
static uint8_t g_58 = 249UL;
static uint16_t g_59 = 0UL;
static int64_t g_68 = 0x5D8D6691A67D5513LL;
static uint16_t g_69 = 9UL;
static int16_t g_74[1] = {0xE99EL};
static uint16_t g_75 = 0UL;
static uint64_t g_87 = 0xAFCE28766912E21ELL;
static int32_t g_94 = 0x27A07EE3L;
static uint32_t g_97 = 0xF341A2B6L;
static int8_t g_125[5][3] = {{1L,0x87L,1L},{0xC8L,0x48L,0xC8L},{1L,0x87L,1L},{0xC8L,0x48L,0xC8L},{1L,0x87L,1L}};
static uint16_t g_144 = 65527UL;
static uint8_t g_188 = 2UL;
static uint64_t g_240 = 0x4C3FBF1EE3AC004CLL;
static int64_t g_256 = 1L;
static uint32_t g_258[3] = {1UL,1UL,1UL};
static int64_t g_284 = 0xB5586E65512604FDLL;
static int16_t g_324 = 0L;



static const int32_t  func_1(void);
static int32_t  func_2(uint8_t  p_3, int32_t  p_4, struct S0  p_5, int64_t  p_6);
static uint16_t  func_7(int32_t  p_8, union U2  p_9, int16_t  p_10, int64_t  p_11, const int64_t  p_12);
static struct S0  func_17(int64_t  p_18, int8_t  p_19, struct S1  p_20);




static const int32_t  func_1(void)
{ 
    union U2 l_16 = {2L};
    int32_t l_189 = (-1L);
    struct S0 l_190[1][5] = {{{65534UL,7UL,0x8A32L,-1L},{65534UL,7UL,0x8A32L,-1L},{65534UL,7UL,0x8A32L,-1L},{65534UL,7UL,0x8A32L,-1L},{65534UL,7UL,0x8A32L,-1L}}};
    uint8_t l_191 = 0xE3L;
    struct S1 l_325 = {0x0D747A76L,0xE4L,0UL};
    int i, j;
    if (func_2((g_188 &= ((func_7((~(~g_15[4])), l_16, g_15[4], (func_17((((+0x5E53L) > 1UL) <= l_16.f2), g_15[4], g_22) , 0x8E2BB11FE8BE9C2CLL), g_15[2]) < 0x5C21L) < 2UL)), l_189, l_190[0][4], l_191))
    { 
        return g_125[4][1];
    }
    else
    { 
        uint32_t l_283 = 0UL;
        int32_t l_323 = (-1L);
        for (g_97 = 0; (g_97 != 46); ++g_97)
        { 
            int32_t l_280[5][4][2] = {{{0x94865011L,0x94865011L},{0x94865011L,0xC627A455L},{(-4L),0xBD198489L},{0xC627A455L,0xBD198489L}},{{(-4L),0xC627A455L},{0x94865011L,0x94865011L},{0x94865011L,0xC627A455L},{(-4L),0xBD198489L}},{{0xC627A455L,0x94865011L},{0x894AC38EL,(-4L)},{0xC627A455L,0xC627A455L},{0xC627A455L,(-4L)}},{{0x894AC38EL,0x94865011L},{(-4L),0x94865011L},{0x894AC38EL,(-4L)},{0xC627A455L,0xC627A455L}},{{0xC627A455L,(-4L)},{0x894AC38EL,0x94865011L},{(-4L),0x94865011L},{0x894AC38EL,(-4L)}}};
            int i, j, k;
            g_94 = (((safe_unary_minus_func_uint8_t_u(((safe_mul_func_int8_t_s_s(l_280[3][3][0], ((g_52 = 4294967294UL) , ((safe_rshift_func_int8_t_s_u(g_144, (0xF4L < g_22.f1))) == l_283)))) != g_284))) ^ 0x2071BF11L) > 0xBB86L);
            if (((safe_mod_func_int64_t_s_s((safe_add_func_int32_t_s_s(((l_283 , g_240) <= (g_58 |= (safe_mul_func_int8_t_s_s((safe_div_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u((!(g_68 != ((safe_sub_func_int64_t_s_s(l_190[0][4].f0, l_283)) || l_280[4][0][0]))), 0x33BA4A93L)) < 0xC544L), 0x78F5L)), g_59)))), (-5L))), g_125[2][0])) , 0x62BF9C2CL))
            { 
                if (g_22.f0)
                    break;
            }
            else
            { 
                int16_t l_310 = (-5L);
                g_324 = (safe_rshift_func_uint8_t_u_s((safe_mod_func_int8_t_s_s(((l_323 = (safe_mod_func_uint16_t_u_u((--g_144), ((safe_sub_func_int8_t_s_s((g_58 == l_310), (safe_mod_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(((!(g_94 = (safe_div_func_uint16_t_u_u((65531UL >= (((~(safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(0x2BL, l_190[0][4].f2)), 0x598BL))) != g_46) < l_283)), g_74[0])))) || l_280[3][3][0]), 0x011FL)), g_74[0])))) ^ 0x00L)))) | g_188), l_283)), g_188));
                l_16.f0 = ((g_74[0] == (func_17(((l_325 , (safe_mul_func_int16_t_s_s(0x73ABL, l_325.f2))) , g_144), l_280[3][3][0], g_22) , 18446744073709551606UL)) ^ (-7L));
            }
        }
    }
    return l_16.f2;
}



static int32_t  func_2(uint8_t  p_3, int32_t  p_4, struct S0  p_5, int64_t  p_6)
{ 
    struct S1 l_194 = {2UL,-1L,0x78L};
    int8_t l_238 = 0xEBL;
    int32_t l_239 = 0x761C6CB6L;
    int32_t l_255 = 0L;
    int32_t l_257 = (-6L);
    for (p_5.f2 = 0; (p_5.f2 >= 6); ++p_5.f2)
    { 
        struct S1 l_195[3] = {{0x8DD3C908L,0x26L,255UL},{0x8DD3C908L,0x26L,255UL},{0x8DD3C908L,0x26L,255UL}};
        int32_t l_209 = 0xB70B35F6L;
        int32_t l_254[3][4][3] = {{{0L,1L,0L},{0x57B76B94L,1L,0x57B76B94L},{0L,1L,0L},{0x57B76B94L,1L,0x57B76B94L}},{{0L,1L,0L},{0x57B76B94L,1L,0x57B76B94L},{0L,1L,0L},{0x57B76B94L,1L,0x57B76B94L}},{{0L,1L,0L},{0x57B76B94L,1L,0x57B76B94L},{0L,1L,0L},{0x57B76B94L,1L,0x57B76B94L}}};
        int i, j, k;
        l_195[1] = l_194;
        if ((safe_add_func_uint16_t_u_u((l_195[1].f1 > ((safe_mul_func_uint8_t_u_u((g_22.f2++), g_22.f0)) >= p_5.f1)), (1L != p_6))))
        { 
            uint16_t l_236 = 0UL;
            int32_t l_252 = 5L;
            int32_t l_253[3][5] = {{(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),0L,(-1L),(-1L)}};
            int i, j;
            for (g_94 = 0; (g_94 == 12); ++g_94)
            { 
                uint8_t l_208 = 0xCDL;
                int32_t l_235 = 0x6B081F9AL;
                int32_t l_237 = (-1L);
                uint64_t l_249 = 0x28776ED50CF4A1DDLL;
                l_209 = (safe_mod_func_uint32_t_u_u(((((g_22.f1 , ((0x24A0073B97F15FC2LL >= g_22.f0) , ((4UL ^ l_208) , g_68))) && g_38) & 1L) != g_22.f2), 0xA42F718EL));
                g_240 = (safe_add_func_uint32_t_u_u(((safe_mod_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((l_239 = (!(safe_sub_func_int16_t_s_s((l_238 &= (((((g_74[0] &= (safe_rshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s((((safe_add_func_uint64_t_u_u((safe_lshift_func_int8_t_s_s(l_194.f0, 3)), (safe_rshift_func_int8_t_s_u(l_195[1].f0, g_68)))) <= (l_237 = (safe_mul_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s((l_235 = (safe_rshift_func_int16_t_s_u(l_208, 1))), l_236)) & g_57), g_58)))) >= 0UL), g_46)), l_209))) ^ g_69) <= p_5.f2) & 0xD3L) , (-1L))), 0x22EDL)))), l_194.f0)), g_69)) ^ 4294967286UL), p_4));
                l_239 = (safe_unary_minus_func_uint16_t_u((safe_unary_minus_func_uint8_t_u((safe_rshift_func_uint16_t_u_u(p_4, ((safe_sub_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u(l_249, (g_240 | (l_209 |= (safe_mod_func_uint16_t_u_u(p_3, g_15[4])))))) || p_4), 0L)) ^ l_195[1].f1)))))));
            }
            --g_258[2];
            g_94 &= 1L;
        }
        else
        { 
            int32_t l_269[2];
            int32_t l_270 = (-5L);
            int i;
            for (i = 0; i < 2; i++)
                l_269[i] = (-6L);
            l_270 = ((safe_div_func_int64_t_s_s(((!(safe_rshift_func_uint8_t_u_s(((g_87 &= (((((safe_rshift_func_int8_t_s_s(l_195[1].f2, 1)) < (g_256 || (l_254[0][3][0] , (((~(0x0133C60276B29E6FLL || 0xB34544C11F17EFCALL)) <= g_258[0]) >= 1L)))) > l_254[1][3][1]) && 1L) >= l_269[1])) , g_22.f0), 5))) >= l_269[0]), p_5.f1)) || 0L);
            for (l_270 = 0; (l_270 == (-22)); --l_270)
            { 
                l_239 &= 3L;
            }
            for (g_188 = 0; (g_188 != 7); g_188 = safe_add_func_int8_t_s_s(g_188, 7))
            { 
                if (l_195[1].f0)
                    break;
            }
        }
    }
    return p_5.f1;
}



static uint16_t  func_7(int32_t  p_8, union U2  p_9, int16_t  p_10, int64_t  p_11, const int64_t  p_12)
{ 
    uint32_t l_67 = 18446744073709551611UL;
    int32_t l_73 = 0x1C1CA363L;
    int32_t l_86 = 2L;
    int32_t l_138 = 0xF553DE48L;
lbl_80:
    g_69 |= ((p_10 = ((((p_9.f2 & (safe_mod_func_int32_t_s_s((g_68 = ((safe_div_func_uint64_t_u_u((g_46 = p_9.f2), l_67)) < p_8)), p_12))) || p_12) != g_38) ^ l_67)) == p_9.f2);
    if (g_22.f1)
    { 
        uint32_t l_70[4];
        int i;
        for (i = 0; i < 4; i++)
            l_70[i] = 0xA24CD7C0L;
        p_8 = ((--l_70[3]) || (l_73 = l_70[3]));
        --g_75;
        for (p_11 = (-22); (p_11 > (-27)); p_11 = safe_sub_func_int8_t_s_s(p_11, 1))
        { 
            if (g_75)
                goto lbl_80;
            if (p_11)
                continue;
        }
    }
    else
    { 
        int32_t l_85 = 0x503B3C44L;
        int32_t l_93[1];
        struct S1 l_121 = {18446744073709551612UL,2L,0x42L};
        int i;
        for (i = 0; i < 1; i++)
            l_93[i] = 0xBBE02B32L;
        g_87 = ((((7UL ^ (l_86 = (l_73 = (0xA03D0BAEL <= (safe_add_func_uint8_t_u_u((((safe_mod_func_uint16_t_u_u(((p_9.f0 <= (l_85 != g_57)) || g_22.f1), l_85)) & p_10) > l_85), g_68)))))) <= g_75) , l_85) || l_67);
        for (l_67 = (-25); (l_67 != 20); l_67 = safe_add_func_uint64_t_u_u(l_67, 5))
        { 
            struct S1 l_95 = {0xF7E9ACA8L,0x8CL,0x92L};
            uint8_t l_107[4];
            int32_t l_120 = 0x3B6E2EDBL;
            int i;
            for (i = 0; i < 4; i++)
                l_107[i] = 0x95L;
            if (p_9.f2)
            { 
                union U2 l_90[5][5][2] = {{{{-4L},{0x0EE7DBBEL}},{{0x0EE7DBBEL},{-4L}},{{0x0EE7DBBEL},{0x0EE7DBBEL}},{{-4L},{0x0EE7DBBEL}},{{0x0EE7DBBEL},{-4L}}},{{{0x0EE7DBBEL},{0x0EE7DBBEL}},{{-4L},{0x0EE7DBBEL}},{{0x0EE7DBBEL},{-4L}},{{0x0EE7DBBEL},{0x0EE7DBBEL}},{{-4L},{0x0EE7DBBEL}}},{{{0x0EE7DBBEL},{-4L}},{{0x0EE7DBBEL},{0x0EE7DBBEL}},{{-4L},{0x0EE7DBBEL}},{{0x0EE7DBBEL},{-4L}},{{0x0EE7DBBEL},{0x0EE7DBBEL}}},{{{-4L},{0x0EE7DBBEL}},{{0x0EE7DBBEL},{-4L}},{{0x0EE7DBBEL},{0x0EE7DBBEL}},{{-4L},{0x0EE7DBBEL}},{{0x0EE7DBBEL},{-4L}}},{{{0x0EE7DBBEL},{0x0EE7DBBEL}},{{-4L},{0x0EE7DBBEL}},{{0x0EE7DBBEL},{-4L}},{{0x0EE7DBBEL},{0x0EE7DBBEL}},{{-4L},{0x0EE7DBBEL}}}};
                int i, j, k;
                l_93[0] = (((l_90[4][2][0] , ((0x1EL >= (safe_mul_func_int8_t_s_s((l_85 = l_85), p_9.f2))) > 4UL)) , 4294967287UL) && g_57);
                g_94 = 6L;
            }
            else
            { 
                int32_t l_96 = (-5L);
                g_22 = l_95;
                if (l_96)
                    break;
                --g_97;
            }
            if ((safe_rshift_func_int8_t_s_u((safe_div_func_uint16_t_u_u(((safe_div_func_int32_t_s_s(((((4294967295UL >= (~l_107[3])) == g_94) & (safe_div_func_uint8_t_u_u(0xD0L, g_69))) == g_22.f2), 0xF8503667L)) | l_107[0]), g_97)), p_11)))
            { 
                return p_9.f2;
            }
            else
            { 
                uint32_t l_114 = 0x609A04A8L;
                p_8 |= ((g_52 = 4294967295UL) < (safe_sub_func_int8_t_s_s((safe_mul_func_int8_t_s_s(l_114, (!g_22.f0))), (l_120 = (safe_div_func_int64_t_s_s((safe_div_func_int8_t_s_s((p_11 || l_93[0]), g_75)), l_86))))));
                p_8 = (l_73 = (-1L));
                l_95 = l_121;
            }
        }
    }
    if ((l_86 = g_52))
    { 
        uint32_t l_122 = 1UL;
        const struct S1 l_128 = {18446744073709551615UL,0xADL,0xD1L};
        int32_t l_137 = 0L;
        g_125[4][1] &= ((g_94 = l_122) && (safe_lshift_func_uint16_t_u_u(p_11, 7)));
        for (g_97 = 0; (g_97 < 23); g_97 = safe_add_func_int16_t_s_s(g_97, 1))
        { 
            g_94 &= g_59;
            g_22 = l_128;
            for (l_86 = 0; (l_86 <= 2); l_86 += 1)
            { 
                int i;
                return g_15[l_86];
            }
        }
        for (g_22.f2 = 0; (g_22.f2 == 1); g_22.f2++)
        { 
            uint32_t l_131[3];
            uint8_t l_132 = 0x90L;
            int i;
            for (i = 0; i < 3; i++)
                l_131[i] = 0x26E7CEC0L;
            g_94 &= g_57;
            l_138 ^= (1L ^ (((g_94 = l_131[2]) ^ (l_137 = (l_86 = (l_132 <= (safe_lshift_func_uint8_t_u_u(((((safe_rshift_func_uint16_t_u_u(65529UL, 7)) | l_131[0]) , 0xFD2E611AL) ^ p_10), g_38)))))) != l_73));
            l_86 = 0L;
        }
    }
    else
    { 
        int32_t l_143[3][2];
        int32_t l_151[1];
        const union U2 l_181 = {0x5BBFDF0FL};
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 2; j++)
                l_143[i][j] = 0x4623539AL;
        }
        for (i = 0; i < 1; i++)
            l_151[i] = 0xE5E0314BL;
        for (g_75 = 0; (g_75 <= 10); g_75++)
        { 
            for (p_9.f1 = 0; (p_9.f1 == 14); p_9.f1 = safe_add_func_uint16_t_u_u(p_9.f1, 1))
            { 
                if (p_10)
                    goto lbl_80;
                g_144++;
            }
        }
        for (g_46 = (-17); (g_46 == 22); ++g_46)
        { 
            uint8_t l_154 = 0xC5L;
            uint64_t l_177 = 0x39CDCE665EB517B2LL;
            int32_t l_178 = (-1L);
            for (p_8 = (-21); (p_8 <= (-6)); p_8++)
            { 
                l_151[0] ^= 8L;
                if (g_69)
                    continue;
            }
            l_178 = (safe_add_func_uint64_t_u_u(p_8, (((l_154--) , (((!(0xF2L <= (((safe_mul_func_int16_t_s_s((((safe_lshift_func_int8_t_s_u((safe_div_func_int32_t_s_s((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((+(safe_unary_minus_func_uint8_t_u(((safe_mod_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((g_125[4][1] ^ (+0x9DL)), (-2L))), p_8)) < p_9.f2)))), l_177)), p_8)), 0xB3CCEB7EL)), p_9.f2)) , g_57) < 0x42D507010F87BC80LL), 6L)) & p_9.f2) > p_12))) , g_58) , 1UL)) != l_177)));
        }
        for (l_86 = 0; (l_86 <= 1); l_86 += 1)
        { 
            int64_t l_187 = 0xEB9260482E1C061DLL;
            for (p_8 = 0; (p_8 >= 0); p_8 -= 1)
            { 
                uint64_t l_186[4];
                int i, j;
                for (i = 0; i < 4; i++)
                    l_186[i] = 0x2687B70EE5EE185ALL;
                l_187 = (((g_15[(p_8 + 1)] == (g_22.f2 = (((l_151[p_8] = (l_181 , ((safe_rshift_func_uint16_t_u_s((l_143[(l_86 + 1)][p_8] ^ (65535UL == l_86)), g_22.f1)) == p_9.f0))) , (-1L)) == g_58))) ^ l_186[0]) == 0xDEL);
            }
            for (g_22.f1 = 0; (g_22.f1 >= 0); g_22.f1 -= 1)
            { 
                int i;
                if (g_15[(g_22.f1 + 1)])
                    break;
            }
        }
    }
    return p_8;
}



static struct S0  func_17(int64_t  p_18, int8_t  p_19, struct S1  p_20)
{ 
    int8_t l_31 = 0x03L;
    int32_t l_45 = 0x4BB9CEC0L;
    int16_t l_53 = (-9L);
    int32_t l_55 = 0xE6264A05L;
    struct S0 l_62[4][3] = {{{3UL,0x78C4B1E4L,0x3731L,0xA37A5474L},{1UL,4294967295UL,-1L,0L},{3UL,0x78C4B1E4L,0x3731L,0xA37A5474L}},{{0x9490L,4294967286UL,0x6125L,-8L},{0x821FL,1UL,0x3E3BL,-7L},{65535UL,0xEB41E225L,0xE45BL,0x28040910L}},{{0x9490L,4294967286UL,0x6125L,-8L},{0x9490L,4294967286UL,0x6125L,-8L},{0x821FL,1UL,0x3E3BL,-7L}},{{3UL,0x78C4B1E4L,0x3731L,0xA37A5474L},{0x821FL,1UL,0x3E3BL,-7L},{0x821FL,1UL,0x3E3BL,-7L}}};
    int i, j;
    p_20 = p_20;
    if ((p_19 < (safe_mod_func_int8_t_s_s(((((safe_lshift_func_uint16_t_u_u(((0x56FDL >= (safe_div_func_uint32_t_u_u(((safe_mod_func_int8_t_s_s(((l_31 < ((safe_div_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((((++g_38) != (l_45 = ((safe_add_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u(p_18, 8)), p_20.f1)) , g_22.f0))) ^ 65535UL), 6)), g_22.f2)), l_31)) , g_22.f1)) == l_31), l_31)) || g_22.f2), g_22.f2))) != p_20.f2), g_15[4])) < 1L) == l_31) && g_22.f0), 0x47L))))
    { 
        uint64_t l_54 = 0xB2B3A3C3A871D1BALL;
        g_46 ^= g_15[0];
        l_55 &= ((g_46 ^ (p_20.f0 < (l_54 = (safe_lshift_func_int8_t_s_s(g_46, ((((((g_52 = (safe_mod_func_uint32_t_u_u((((l_45 = (~250UL)) < 0x38L) >= g_15[4]), l_31))) == l_53) || g_46) <= 18446744073709551612UL) > 0xCCE7L) < 0x9EEB3BD8L)))))) > p_20.f0);
    }
    else
    { 
        struct S1 l_56 = {0x37D796E9L,0x00L,1UL};
        l_55 = (-10L);
        g_22 = (l_56 = (p_20 = g_22));
        g_58 = (g_57 = (0xCE4CL < g_15[0]));
    }
    g_59++;
    return l_62[2][0];
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_15[i], "g_15[i]", print_hash_value);

    }
    transparent_crc(g_22.f0, "g_22.f0", print_hash_value);
    transparent_crc(g_22.f1, "g_22.f1", print_hash_value);
    transparent_crc(g_22.f2, "g_22.f2", print_hash_value);
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_74[i], "g_74[i]", print_hash_value);

    }
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_125[i][j], "g_125[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_188, "g_188", print_hash_value);
    transparent_crc(g_240, "g_240", print_hash_value);
    transparent_crc(g_256, "g_256", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_258[i], "g_258[i]", print_hash_value);

    }
    transparent_crc(g_284, "g_284", print_hash_value);
    transparent_crc(g_324, "g_324", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
